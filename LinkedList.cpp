
/* 
File Name: LinkedList.cpp

*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

//Constructor
LinkedList::LinkedList()
{
    head = nullptr;
}

//Destructor
LinkedList::~LinkedList()
{
    Node* c = head;
    
    while(c)
    {
        Node* t = c;

        c = c->next;

        delete t;   //Deallocating memory of each node
    }

    head = nullptr;
}

//Inserts a new node with the given value 
void LinkedList::insert(int v)
{
    Node* insertValue = new Node(v);

    if(!head)
    {
        head = insertValue;
        return;
    }

    //Traverse to the last node
    Node* temp = head;

    while(temp->next)
    {
        temp = temp->next;
    }

    temp->next = insertValue; //Attached new node at the end

}

//Searches for a given value in the linked list
bool LinkedList::search(int v)
{
    Node* searchValue = head;

    while(searchValue)
    {
        if(searchValue->data == v) 
        {
            return true;    //Value found
        }
        searchValue = searchValue->next;
    }

    return false;   //Value not found
}

//This prints all elements 
void LinkedList::printList()
{
    if(!head)  //This is to check if the list is empty
    {
        cout << "The list is empty." << endl;
        return;
    }


    Node* printValue = head;

    while(printValue)
    {
        cout << printValue->data;
        if(printValue->next)
        {
            cout << " -> "; //A print separator
        }

        printValue = printValue->next;
    }

    cout << endl;
}
