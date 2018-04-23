#include <iostream>
using namespace std;



class linked_stack{
private:
    struct node{
        int data;
        node *next;

    };

public:
    node *head=NULL;

void push(int x){
    node *temp  = new node;
    temp->data = x;
    temp->next = head;
    head = temp;

}
void pop(){
    if(head == NULL){
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;

}
void show(){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void pushn(int x, int n){
    node *temp1 = new node();
    node *temp2 = head;
    temp1->data = x;
    temp1->next = NULL;

    if(n == 1){
        temp1->next = head;
        head = temp1;
    }else{
        for(int i = 0;i<n-2;i++){
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        temp2->next = temp1;
    }
}
void deleten(int n){
    node *temp = head;
    if(n == 1){
        head = head->next;
        delete temp;
    }else{
        for(int i=0;i<n-2;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
}
void add(int x){
    node *temp1 = new node();
    node *temp2 = head;
    temp1->data = x;
    temp1->next = NULL;
    if(head == NULL){
        head->data = x;
        head->next = NULL;
    }else{
        while(temp2->next != NULL){
            temp2 = temp2->next;

        }
        temp2->next = temp1;
    }
}

};
int main ()
{
//    linked_stack s;
//
//    s.push(5);
//    s.push(8);
//    s.push(4);
//    s.push(2);
//
//    s.pushn(3,3);
//
//    cout<<endl;
//
//    s.show();
//    s.deleten(3);
//    s.show();
//    s.add(1314);
//    s.show();

    linked_stack *s;
    s = new linked_stack;
    s->push(5);
    s->pop();
    s->show();


}

