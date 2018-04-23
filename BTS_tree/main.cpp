#include <iostream>
using namespace std;
struct node{
public:
    node *left;
    node *right;
    int data;
};
class btree{
    public:
        node *root;
        btree();
        void inser(int);
        void insert(node*,int);
        bool search(int);
        bool search(node*,int);
        bool search();
        bool isEmpty(node*);
        void remove(int);
        node* search_node(int);
        node* search_node(node*,int);

};
btree::btree(){
    root = NULL;
}
bool btree::isEmpty(node* head) {
    if (head==NULL){
        return true;
    }
    return false;
}
void btree::inser(int x) {
    if(root!=NULL)
        insert(root,x);
    else
    {
        root=new node;
        root->data=x;
        root->left=NULL;
        root->right=NULL;
    }
}
void btree::insert(node* head,int x){
    node* temp = new node;
    temp->data = x;

    if(x<=head->data){
        if(head->left!=NULL){
            insert(head->left,x);
        }else{
            head->left = temp;
            temp->left = NULL;
            temp->right = NULL;
        }
    }
    else if(x>head->data){
        if(head->right!=NULL){
            insert(head->right,x);
        }else{
            head->right = temp;
            temp->left = NULL;
            temp->right = NULL;
        }
    }
}
bool btree::search(int x) {
    if(root == NULL){
        return false;
    }else{
        return search(root,x);
    };
}
bool btree::search(node * head, int x) {
    if(x == head->data ){
        return true;
    }else if(x<head->data && head->left!=NULL){
        return search(head->left,x);
    }else if(x>head->data && head->right !=NULL){
        return search(head->right,x);
    }else{
        return false;
    }
}
node* btree::search_node(int x) {
    return search_node(root,x);
}
node* btree::search_node(node *head, int x){
    if(x == head->data ){
        return head;
    }else if(x<head->data && head->left!=NULL){
        return search_node(head->left,x);
    }else if(x>head->data && head->right !=NULL){
        return search_node(head->right,x);
    }else{
        return NULL;
    }
}
//void btree::remove(int x) {
//    node *temp = search_node(root,x);
//    if(temp->left==NULL || temp->right==NULL){
//        delete temp;
//    }
//    else if(temp->left==NULL&&temp->right==NULL)
//}
int main() {
    btree Btree;
    Btree.inser(66);
    Btree.inser(55);
    cout<<Btree.root->data<<endl;
    cout<<Btree.root->left->data<<endl;
    cout<<Btree.search(55);
//    node *temp = new node;
//    temp = Btree.search_node(55);


    return 0;
}