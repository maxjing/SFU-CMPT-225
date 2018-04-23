
//
//  Test Program for Basic Int Queue Class
//
#include <iostream>   // for I/O facilities
#include "Basic_int_queue.h" //  basic_int_queue declarations
using namespace std;

int main (int argc, char * const argv[]) {
    cout << "\n\nBasic_int_queue Class Test Procedure - START\n\n";

    // Make a queue, and verify that empty() says it is empty.

    Basic_int_queue q1 ;
    q1.enqueue(1);
    q1.enqueue(2); q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.show();
   q1.dequeue();
    q1.show();
//    q1.dequeue();
//    q1.enqueue(6);
//    q1.enqueue(7);
//    q1.enqueue(8);
//    q1.show();




//    cout << "empty() = " << q1.empty() << "\n";
//
//    // Put some things on it.
//    cout << "enqueue( " << 1 << " )\n";
//    q1.enqueue(1);
//    cout << "enqueue( " << 2 << " )\n";
//    q1.enqueue(2);
//
//    // Verify that empty() reports it is not empty,
//    // and that the right thing is at the front.
//    cout << "empty() = " << q1.empty() << "\n";
//    cout << "front() = " << q1.front() << "\n";
//
//    // Empty it, and verify that empty() again reports it is empty.
//    while( ! q1.empty() ){
//        cout << "dequeue() = " << q1.dequeue() << "\n";
//    }
//    cout << "empty() = " << q1.empty() << "\n";
//
//    cout << "\n\nBasic_int_queue Class Test Procedure - DONE\n\n";
//    return 0;
}