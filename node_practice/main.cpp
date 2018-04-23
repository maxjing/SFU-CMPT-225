#include <iostream>

class node{


public:
    node(int, node *);

    int data;
    node *next;
    node();
};
node::node(int x, node *new_next){
    data = x;
    next = new_next;

}

node::node() {}

class Stack:public node{
private:
    int size;
    node* top_ptr;
public:
    Stack(){
        top_ptr = NULL;
        size = 0;
    }
    void push(int x){
        top_ptr = new node(x, top_ptr);
        size++;

    }
    int pop(){
       node *old_top = top_ptr;
        int temp = old_top->data;
        top_ptr = top_ptr->next;
        delete(old_top);
        size--;
        return temp;

    }
};

int main() {
   Stack s1;
    s1.push(5);
    s1.push(6);
    std::cout<<s1.pop();
}