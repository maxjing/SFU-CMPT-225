#include <iostream>   // for I/O facilities
#include "btree_set.h" //
#include <iostream> // I/O library.
#include <algorithm> // Includes sort()
#include <ctime> // access to the system clock
#include <time.h> // access to "wall clock"
using namespace std;

double elapsed_time( clock_t start, clock_t finish){
    // returns elapsed time in milliseconds
    return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main (int argc, char * const argv[]) {



   int SIZE = 2000; // size of array to work on.
  

   srand( time(NULL) ); // seed the random number generator.

   clock_t start, finish ;// used to time function calls.
   double process_time = 0;
   	

   		btree::btree_set<int,std::less<int>,std::allocator<int>,64> S1 ;
   	    start = clock();

      for(int i = 0 ; i < SIZE ; i++ ){
          int x = rand() % SIZE*10;
          S1.insert(x);
      }
          finish = clock();
          process_time += elapsed_time(start,finish);


    
    cout << "C++ process time: " << process_time<< endl ;


   cout<<"node = "<<S1.nodes()<<endl;
   cout<<"height = "<<S1.height()<<endl;
   cout<<"average_number_of_bytes_used_per_data = "<<S1.average_bytes_per_value() <<endl;
    return 0;
}