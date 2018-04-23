#include <iostream>
struct node{
    public:
        node *next;
        int data;
};
class list{
public:
    list(){
        node *first = NULL;
        node *rear = NULL;

    }
    void push(int item){
        node *temp = new node();
        temp->data = item;
        temp->next = NULL;
        if(first)
    }


};
