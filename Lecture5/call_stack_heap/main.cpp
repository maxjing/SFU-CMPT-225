#include <iostream>
using namespace std;

class C{
    public:
        int x;
        void set(int y){
            x = y;
        }
        int get(){
            return x;
        }
};


int main() {

    C c1;
    c1.set(5);
    int y,z;
    y = c1.get();

    C * c2;
    c2 = new C;

    C * c3;
    c3 = new C;

    //only this works
    (*c3).set(5);
    z = (*c3).get();


    int n;
    n = 6;

    int *p;
    p = new int;
    *p = 7;

    cout<<n<<endl;
    cout<<p <<endl;
    cout<<*p<<endl;



}