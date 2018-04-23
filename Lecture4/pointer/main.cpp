/* A program to demonstrate printing out partial contents of the call stack */
#include <iostream>
#include <iomanip>
using namespace std;

int print_stack(int k, int j){
    cout << "print_stack() begins" << endl;

    cout << "argument k is at &k=" << &k << "  and k=" << k << endl;
    cout << "argument j is at &j=" << &j << "  and j=" << j << endl;

//    int CCC[2] = { 888888888, 999999999 } ;

    cout << "Peeking from &j up, for the space of k ints" << endl ;
    int *p = &j - 2 ;

    for( int l = k ; l > 0 ; l-- ){
        cout << p << ": " <<  setw(8) << hex << *p << " =  " << setw(11) << dec << *p << endl ;
        p += 1 ;// adding 1 to a pointer to an int makes it point to the next int
    }
    cout << "End of: print_stack()" << endl;
}

int fun(int fun_arg){
    cout << "fun() begins" << endl;

    cout << "fun_arg is at &fun_arg=" << &fun_arg << endl;

    int BBB[2] = { 555555555, 666666666 } ;
    cout << "BBB is at BBB=" << BBB << endl;

    print_stack(42, 777777777 );

    cout << "fun ends" << endl;
}

int main(){
    cout << "peek-stack main() begins\n";

    int XXX = 111111111 ;
    cout << "XXX is at &X=" << &XXX << endl ;

    int AAA[2] = { 222222222, 333333333 } ;//
    cout << "Array AAA is at AAA=" << AAA << " (because in C++, an array name *is* a pointer!)" << endl;

    fun( 444444444 );

    cout << "peek-stack main() ends" << endl ;
}