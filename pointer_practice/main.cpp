#include <iostream>
using namespace std;
int main() {
    int size=5;
    int array[5] = {1,2,3,4,5};
    int *p;
    p = array;
    int *p2=array+size;
    std::cout<<p<<" "<<p2<<endl;
    cout<<*p<<" "<<*p2<<endl;
    while(p<p2){
        std::cout<<*p<<" ";
        p++;
    }
}