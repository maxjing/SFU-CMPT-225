#include <iostream>
using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x){
    if(top == MAX_SIZE -1){
        cout<<"Error: stack overflow\n";
    }
    A[++top] = x;
}

void Pop(){
        if(top ==-1){
            cout<<"Error: stack is empty\n";
        }
    top--;
}

int Top(){
    return A[top];
}
void Print(){
    for(int i=0;i<=top;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main() {
    Push(2);
    Push(3);Push(4);Print();

    Pop();
    Print();

}