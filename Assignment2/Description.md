# CMPT 225 Assignment 2: Dynamic Deque Implementation
This assignment is an exercise in simple dynamic data structures. You will create a dynamic implementation of a deque. A deque is a "double-ended queue", in other words, an ADT that stores a sequence of values or objects and has insertion and removal at both ends. (It is a generalization of both the classic stack and queue). The implementation is using a doubly-linked list. That is, a linked list in which each node (except the first) has a point to the previous node, as well as the next node, in the list.

A header file with the class declaration will be provided. You can implement the class completely from scratch if you want, but you will be provided with a partial implementation to help you get started. You will also be provided with some sample test programs (but as usual, you should also write your own programs to do more extensive testing).

The Deque Class
The class has the expected basic operations which we will call push_left, push_right, pop_left, pop_right, empty, size. There are two constructors, a default constructor that creates a new empty deque, and a copy constructor that makes a new deque with contents identical to a given one that is passed as a parameter.

In addition, instances of the class have a cursor. This is an abstraction of a pointer to a node in the list: it gives access to list contents, allowing a programmer to access any elements of the list, but only by moving left or right along the list. That is, there is no random access as in an array, and there is no access to the underlying linked list data structure. It is, of course, implemented using a pointer. (An iterator is a more sophisticated version of this idea.) The operations associated with the cursor are:

bool cursor_left()
bool cursor_right()
int get_cursor()
void set_cursor()
Finally, the class has a destructor: a function that is executed whenever an instance of the class is dealocated (either because it was deleted from dynamic memory or because it was popped off the call stack.) The purpose of the destructor is to avoid memory leaks, be de-allocating all dynamic memory that has been allocated by the instance. That is, the descructor should delete all nodes of the linked list. You never call the destructor: it is called automatically when the instance is deallocated.

Some details:

Use the provided header file Deque.h. The comments in that file give some details of the behaviour that are not described in the text above.
Do not make changes to any public part of the class Deque class declaration. You may change the private declarations if you want, but you are encouraged you not to.
Implement the functions for the queue class in a file "Deque.cpp".
Your class must have no memory leaks.
The copy constructor must make a deep copy.
Calling the functions of your class should never cause a program to crash if the function preconditions were satisfied.
Advice
Start by carefully examining the header file. If you need more information to understand doubly-linked lists, copy constructors, or deconstructors, read the appropriate sections of the textbook (or/and find suitable online tutorial material).

Start small. As much as possible, work on one function or operation at a time. When you add some code, test and debug it a fully as possible before proceeding: Debugging code with multiple errors in different places is orders of magnitude harder than finding errors that are all in a few lines of new code.

There are numerous places where you have a "generic step", but also need to deal with multiple special cases. Very few people are able to get these right without drawing several diagrams and working through every possible case. Try to do this as much as possible before writing much code. Doing this requires patience, and lots of students try to avoid it, but it usually saves time and reduces frustration. Also, once you start coding, do lots of tracing (e.g., printing out actual addresses, or using a debugger), to make sure each small part does what it should as you go: getting the right output on a small test case doesn't mean its right.

Due Date
The assignment is due by 19:00 (7pm) on Thursday March 15.
Sample Test Files
A simple Makefile (updated to dqtest4)
Simple tests of left and right push, plus moving cursor: dqtest1.cpp; with sample output dqtest1-output.txt;
Tests of left and right peek and pop: dqtest2.cpp; with sample output dqtest2-output.txt;
Test of cursor_set: dqtest3.cpp; with sample output dqtest3-output.txt;
Test of copy constructor: dqtest4.cpp; with sample output dqtest4-output.txt;
Testing for Memory Leaks
Whenever space that has been allocated on the heap ("dynamic memory") is no longer needed, it must be de-allocated, or returned to the operating system. A programs that consumes more-and-more memory because of failure to dellocate heap space that it no longer uses is said to have a memory leak. In C++ (at least until recently, and also in some other languages), we must look after the cleaning up of allocated heap space explicitly in our programs. We do this using the delete keyword. For example, suppose p is a pointer to some object on the heap, previously allocated by p = new X. We return the allocated memory to the heap by executing delete p.

It is impossible to write a program that can correctly determine, for every input C++ program, whether it has a memory leak or not. (It is not just hard to do - you can prove it is impossible. So, its a good idea to use programming methodology that helps you avoid creating them.) However, there are programs that can help find many memory leaks. One such program is valgrind. If you have an executable called test, you can run it with valgrind like this:

uname@hostname: ~$ valgrind --leak-check=full ./test
valgrind will give a report of how much memory was allocated by the execution of test but not de-allocated before termination. One way to produce a memory leak is to have a linked data structure and an operation such as dequeue or pop that fails to delete nodes that are no longer used. Here is an example:
A small program using the Deque class, dqtest5.cpp designed to check if the pop_left() function creates a memory leak or not.
Sample valgrind outputs, with a correct implementation of pop_left(); with an pop_left() that leaks memopry.
Another way is to have a class that allocates dynmamic memory but does not have a destructor that deleted all allocated memory if the object is deleted. The destructor is not called directly, but is invoked whenever an object is deleted. For example, if an instance of a stack class is allocated by s = new Stack, then when we finish with the stack, we execute delete s). This causes execution of the destructor, and also the return space used directly by the instance, to the heap. So, the main job of the descructor is to delete objects on the heap that would be "leaked" if we did not delete them before deleting our object s. Here is an example:
A small program using the Deque class, dqtest6.cpp designed to check if the destructor creates a memory leak or not.
Sample valgrind outputs, with a correct implementation of ~Deque; with a ~Deque that leaks memopry.
