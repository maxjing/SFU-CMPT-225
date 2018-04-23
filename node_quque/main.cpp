#include <iostream>
using namespace std;
class node{
public:
    int data;
    node *next;


};

class Queue:public node{
private:
    node* front;
    node* rear;
    int size;
public:
    Queue() {
        size = 0;
        front = NULL;
        rear = NULL;

    }
    void add(int item);
    int remove();
    void print();
    int top(){
        return front->data;
    }
    bool isEmpty(){
        return (front==NULL && rear==NULL);
    }
    int getsize(){
           return size;
    };
    void add_at_n(int item, int n){
        node *temp = new node;
        temp->data = item;
        temp->next=0;
        node *copy_front = front;
        if(n==1){
            temp->next=front;
            front = temp;
            return;
        }for(int i=0;i<n-2;i++){
            copy_front = copy_front->next;
        }
       temp->next=copy_front->next;
        copy_front->next=temp;
        delete copy_front;

    }

};
void Queue::add(int item){
    node *temp = new node;
    temp->data = item;
    temp->next = NULL;
    if(isEmpty()){
        front=rear=temp;

    }

    rear->next = temp;
    rear = temp;
    size++;

}
int Queue::remove(){
    node *oldfront = front;
    int temp;
    temp = oldfront->data;
    front = front->next;
    delete oldfront;
    size--;
    return temp;



};
void Queue::print(){
    node *temp = front;

    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
}

int main() {
    Queue q1;
    q1.add(5);
    q1.add(6);
    q1.add(7);
    q1.add(8);
    q1.add(9);
    q1.add(10);
    q1.add_at_n(1,2);
    q1.print();
    q1.add_at_n(1,2);
    q1.print();
//    cout<<q1.getsize()<<endl;
//    cout<<q1.remove();
//    cout<<q1.remove();
//    cout<<q1.remove();
//    cout<<q1.remove();
//    q1.print();
//    cout<<q1.getsize()<<endl;
}