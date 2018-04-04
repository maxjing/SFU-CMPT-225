
#include <iostream>
using namespace std;
#include "Deque.h"
Deque::Deque() {
    cursor = NULL;
    left_p = NULL;
    right_p = NULL;
    current_size = 0;
}
Deque::Deque( const Deque& dq ){


    left_p = NULL;
    right_p = NULL;
    current_size = 0;
    node *temp = dq.left_p;
    int count = 0;
    int count2 = 0;
    while(temp->next != NULL){
        push_right(temp->data);
        temp = temp->next;
        count++;
    }
    push_right(temp->data);
    while(temp != dq.cursor){
        count2++;
        temp = temp->prev;
    }
    int cursor_position = count-count2;
    for(int i = 0;i<cursor_position;i++){
        cursor_right();
    }
//    delete temp;
    return;


}
Deque::~Deque(){
    node *temp = left_p;
    while(temp != NULL){
        temp = left_p->next;
        delete left_p;
        left_p = temp;
    }
    delete temp;

    left_p = NULL;
    right_p = NULL;
    cursor = NULL;
    current_size = 0;
}
int Deque::size() {
    return current_size;
}
bool Deque::cursor_left(){
    if(cursor->prev==NULL || empty()){
        return false;
    }
    cursor = cursor->prev;
    return true;
}
bool Deque::cursor_right(){
    if(cursor->next==NULL||empty()){
        return false;
    }
    cursor= cursor->next;
    return true;
}
bool Deque::empty() {
    return(size()==0);
}
void Deque::push_left( int item ){


    if(empty()){
        node *temp = new node(item,NULL,NULL);
        left_p = temp;
        cursor = left_p;
        right_p = left_p;

    }else{

        node *temp = new node(item,NULL,left_p);
        left_p->prev = temp;
        left_p = temp;
    };
    current_size++;


}
void Deque::push_right( int item ){
    if(empty()){
        node *temp = new node(item,NULL,NULL);
        right_p = temp;
        left_p = right_p;
        cursor = right_p;
    }else{
        node *temp = new node(item,right_p,NULL);
        right_p ->next= temp;
        right_p = temp;

    };
    current_size++;
}


int Deque::pop_left(){
    int temp = left_p->data;
    if(size()==1){
        left_p = right_p = cursor = NULL;
        current_size--;
    }else{

        if(cursor==left_p){
            cursor = cursor->next;
        }
        left_p = left_p -> next;
        delete left_p -> prev;
        current_size--;
        return temp;
    }
}


int Deque::pop_right(){
    int temp = right_p->data;
    if(size()==1){
        left_p = right_p = cursor = NULL;
        current_size--;
    }else{
        if(cursor==right_p){
            cursor = cursor->prev;
        }

        right_p = right_p -> prev;
        right_p->next = NULL;
        current_size--;
        return temp;
    }
}


int Deque::peek_left(){
    return left_p->data;
};
int Deque::peek_right(){
    return right_p->data;

};
int Deque::get_cursor() {

    return cursor->data;
}
void Deque::set_cursor(int i){
    cursor->data = i;
}
/* Utility functions */
void Deque::display(){
    node *temp = left_p;
    cout<<"[";
    if (empty()){
        cout<<"size = "<<size()<<", cursor = "<<"NULL"<<endl;
        delete temp;
    }else{
        while(temp != NULL){
            cout<<temp->data<<";";
            temp = temp->next;
        }
        cout<<"] ";
        cout<<"size = "<<size()<<", cursor = "<<get_cursor()<<endl;}
    delete temp;
    return;
}
void Deque::verbose_display(){
    node * temp = left_p;
    int count = 0;

    if (empty()){
        cout<<"size = "<<size()<<", cursor = "<<"NULL"<<endl;
        delete temp;
    } else {
        count++;
        while (temp != NULL) {

            cout <<"item "<<count<< ": node address: " << temp << ", pointer value: " << temp->data << "." << endl;
            temp = temp->next;
        }

        cout<<"size = "<<size()<<", cursor = "<<get_cursor()<<endl;;
        delete temp;
        return;
    }

}
