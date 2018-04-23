#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;

}
class MinHeap{
    int *harr;
    int capacity;
    int heap_size;
public:
    MinHeap(int cap){
        heap_size = 0;
        capacity = cap;
        harr = new int[cap];
    }
    int parent(int i){
        return (i-1)/2;
    }
    int leftchild(int i){
        return 2*i + 1;
    }
    int rightchild(int i){
        return 2*i + 2;
    }
    void insertKey(int n){
        if(heap_size == capacity){
            cout<<"Overflow"<<endl;
            return;
        }
        heap_size++;
        int i = heap_size -1;
        harr[i] = n;
        while(i !=0 && harr[parent(i)]> harr[i]){ //tricle up i!=0 means not the root
            swap (harr[parent(i)],harr[i]);
            i = parent(i);
        }
    }
    int extractMin(){
        if(heap_size <= 0){
            return INT_MAX;
        }if(heap_size == 1){
            heap_size--;
            return harr[0];
        }
        int root = harr[0];
        harr[0] = harr[heap_size-1];
        heap_size--;
        MinHeapify(0);

        return root;
    }
    void MinHeapify(int i){ //tricle down
        int l = leftchild(i);
        int r = rightchild(i);
        int smallest = i;
        if(l < heap_size && harr[l] < harr[i]){
            smallest = l;
        }
        if(r < heap_size &&harr[r] < harr[smallest]){
            smallest = r;
        }
        if(smallest != i){
            swap(harr[i],harr[smallest]);
            MinHeapify(smallest);

        }
    }
    int getMin() { return harr[0]; }
    void print()
    {
        for(int i = 0;i<heap_size;i++){
            cout<<harr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MinHeap h(7);
//    h.insertKey(3);
//    h.insertKey(2);
//
//    h.insertKey(15);
//    h.insertKey(5);
//    h.insertKey(4);
//    h.insertKey(45);
//    cout << h.extractMin() << " ";
//    cout << h.getMin() << " ";
//
//    cout << h.getMin();
//    return 0;
    h.insertKey(7);

    h.insertKey(6);
    h.insertKey(5);

    h.insertKey(4);
    h.insertKey(3);
    h.insertKey(2);
    h.insertKey(1);
    h.print();
    cout<<1/2<<endl;
}