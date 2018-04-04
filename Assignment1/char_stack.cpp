/* File: char_stack.cpp

  Implementation of functions for basic simple array-based implementation of a stack.

*/
#include <iostream>
#include "char_stack.h"// contains the declarations of the variables and functions.
using namespace std;
char_stack::char_stack() {
    top_index = -1;
    current_size = 0;
}

void char_stack::push(char item) {
    top_index = top_index+1;
    A[top_index] = item;
}
char char_stack::top(){
    return A[top_index];
};
char char_stack::pop(){
    top_index = top_index - 1 ;
    return A[ top_index + 1 ];
}

bool char_stack::empty() {
    return top_index == -1;
}
void char_stack::show(){
    while(top_index >-1){
        cout<<A[top_index]<<endl;
        top_index--;
    }
}