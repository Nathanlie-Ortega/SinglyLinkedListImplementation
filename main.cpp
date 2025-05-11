
/* 
File Name: main.cpp

*/

#include <iostream>
#include "LinkedList.h"

using namespace std;


int main()
{
	//A display of the title, my name, and e-mail address
	cout << endl;
    cout << "+-------------------------------------------------+" << endl;
    cout << "|      Singly Linked List Implementation          |" << endl;
    cout << "|      Author name: Nathanlie Ortega              |" << endl;
    cout << "|      NathanlieOrtega.Dev@gmail.com              |" << endl;
    cout << "+-------------------------------------------------+\n" << endl;
	
    LinkedList lst; //Linked List object

    int choice = 0;

    while(choice != 4)  //User menu loop
    {
        cout << "\nThe Menu:" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Search" << endl;
        cout << "3. Print" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        
        if(choice == 1) //Insert option
        {
            int value;
            cout << "\nEnter a Value: ";
            cin >> value;
            lst.insert(value);
        }

        else if(choice == 2)    //Search Option
        {
            int searchValue;

            cout << "\nEnter a value to search: ";
            cin >> searchValue;

            if(lst.search(searchValue)) 
            {
                cout << searchValue << " value has been found." << endl;
            }

            else 
            {
                cout << "Entered value cannot be found." << endl;
            }

        }

        else if(choice == 3)    //Print option
        {
            lst.printList();    //Call the print function
        }

        else if(choice == 4)    //Exiting option
        {
            cout << "\nExiting..." << endl;
        }

        else
        {
            cout << "\nInvalid Choice. Please enter the choice number from 1-4 only" << endl;

        }
    }


    return 0;

}