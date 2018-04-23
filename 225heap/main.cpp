#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
class makeHeap{
 int *a;
 int size;
public:
    makeHeap(int n){
        a = new int[n];
        size = 0;
    }
   void show(){
       for(int i = 0; i<size;i++){
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }
void insert(int x){
    a[size] = x;
    size++;
}
int left(int i){
    return 2*i+1;
}
int right(int i){
    return 2*i+2;
}

void trickledown(int i){

    while( i<size/2+1 && (a[i] > a[left(i)] || a[i]>a[right(i)])){
        if(a[left(i)]< a[right(i)]){
            swap(a[left(i)],a[i]);
            i = 2*i+1;
        }else{
            swap(a[right(i)],a[i]);
            i = 2*i+2;
        }
    }



}
void make_heap(){


   for(int i = size/2-1;i>=0;i--){
       trickledown(i);
   }


}
};

class heap{
    int *a;
    int capacity;
    int current;
    public:
        heap(int n){
        capacity = n;
        a = new int[n];
            current = 0;
        }
   void insert(int n){
      int i = current;
       a[i] = n;
       while(i>0 && a[parent(i)>a[i]]){
           swap(a[parent(i)],a[i]);
           i = parent(i);
       }
       current++;
   }
   int parent(int i){
       return (i-1)/2;
   }
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }
    void print(){
        for(int i = 0; i<current;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    int extrac_min(){
        int temp = a[0];
        current = current -1; // because everytime insert will plus one 
        a[0] = a[current];
        a[current] = INT_MAX;
        int i = 0;
        while(a[i] > a[left(i)] || a[i]>a[right(i)]){
            if(a[left(i)]< a[right(i)]){
                swap(a[left(i)],a[i]);
                i = 2*i+1;
            }else{
                swap(a[right(i)],a[i]);
                 i = 2*i+2;
            }
        }
        return temp;
    }
    int get_size(){
        cout<<current<<endl;
    }


};



int main() {
    heap heap(7);
    heap.insert(7);
    heap.insert(6);
    heap.insert(5);
    heap.insert(4);
    heap.insert(3);
    heap.insert(2);
    heap.insert(1);
    heap.print();

//    heap.extrac_min();
//    heap.print();


    makeHeap a(7);
    a.insert(7);
    a.insert(6);
    a.insert(5);
    a.insert(4);
    a.insert(3);
    a.insert(2);
    a.insert(1);
    a.show();
    a.make_heap();
    a.show();

}