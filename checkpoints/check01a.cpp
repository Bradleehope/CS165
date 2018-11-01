/***********************************************************************
* Program: 
*    Checkpoint 01a, review         (e.g. Checkpoint 01a, review)  
*    Brother Cook, CS165
* Author: 
* Bradlee Rothwell
*  
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

/*
* Display hello world
*/
void display()
{
   cout << "Hello CS 165 World!\n";
}

/*
* Ask name and age
*/
void question()
{
   string name;
   float age;
   
   cout << "Please enter your first name: ";
   cin >> name;
   cout << "Please enter your age: ";
   cin >> age;
   cout << endl;
   cout << "Hello " << name << ", you are " << age << " years old.\n";
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   display();
   question();
   return 0;
}
