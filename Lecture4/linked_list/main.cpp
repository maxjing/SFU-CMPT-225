#include <iostream>
using namespace std;
const int MAX = 3;
int main() {
    int i = 5;
    int *p;

    p = &i;        //&i is the address of i store &i in p
    cout<<i<<endl;
    cout<<p<<endl; //output the address of i
    cout<<*p<<endl; //derefences p
    //that is *p is the value pointed to by P in this case is 5


    int AAAA[3] = { 222222222, 333333333, 444444444};
    cout<<"array variable aaaa is a pointer a[0]:aaaa = "<<*(AAAA+1)<<endl;
    cout<<"so, derefenrencing aaaa should be give us a[0]:aaaa"<<endl;


    int  var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; // assign the address of integer.
    }

    for (int i = 0; i < MAX; i++) {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }

    return 0;
}