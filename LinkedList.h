
/* 
File Name: LinkedList.h

*/

#include "Node.h"

//Linked List class definition
class LinkedList
{
    private:
        Node* head; //Pointer to the head of the linked list

    public:
        LinkedList();   //Constructor
        
        ~LinkedList();  //Destructor

        void insert(int v);     //A function to insert a new node
        bool search(int v);     //A function to search for a value
        void printList();       //A function that prints all elements in the list

};