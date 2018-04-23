/*  Header file for node class for dynamic basic_int_stack
 *
 *  File: int_node.h
 *
 */
class int_node {
public:
    int_node(int new_data, int_node * next_node );
    int data ;
    int_node * next ;
};
int_node::int_node( int new_data, int_node * new_next ){
    data = new_data ;
    next = new_next ;
};
