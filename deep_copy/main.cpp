#include <iostream>
using namespace std;

class int_node {
public:
    int_node(int new_data, int_node * next_node );
    int data ;
    int_node * next ;
};
int_node::int_node( int new_data, int_node * new_next ){
    data = new_data ;
    next = new_next ;
};


class Stack
{
public:
    // This part should be implementation independent.
    Stack(int); // constructor
    Stack(const Stack &s){
       top_ptr = s.top_ptr;
        current_size = s.current_size;
      stack = new int[current_size];
        for(int i = 0; i< current_size;i++){
            stack[i] = s.stack[i];
        }
    };


    int *stack;
    void push(int item );
    int pop();
    int top();
    bool empty();
    int size();
    void show();


private:

    int_node * top_ptr ;
    int current_size ;
};

Stack::Stack(int n){
    current_size = 0 ;
    top_ptr = NULL ;
    stack = new int[n];
}

void Stack::push( int item ){
    top_ptr = new int_node( item, top_ptr );
    current_size++;
}

int Stack::pop(){
    int_node * old_top = top_ptr ;
    int temp = old_top->data ;
    top_ptr = top_ptr->next ;
    delete old_top;
    current_size-- ;
    return temp;
}

bool Stack::empty(){
    return top_ptr == NULL ;
}

int Stack::top(){
    return top_ptr->data;
}

int Stack::size(){
    return current_size ;
}
void Stack::show(){
    int_node *temp = top_ptr;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main() {
    Stack s1(2);
    s1.push(1);
    s1.push(2);
    Stack s2 = s1;
    cout<<"s1 : ";
    s1.show();
    cout<<"s2 : ";
    s2.show();



    return 0;
}