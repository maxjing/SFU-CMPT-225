#include <iostream>
using namespace std;
#include <stack>

int main() {
    stack s1;
    stack *s2;

    s2 = new stack;

    s1.push(3);

    s2->push(4);
}