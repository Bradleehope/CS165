/***********************************************************************
* Program:
*    Checkpoint 08a, Inheritance
*    Brother Cook, CS165
* Author:
*    Bradlee Rothwell
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your Book class here
class Book
{
   protected:
   string title;
   string author;
   int pubYear;
   public:
   void prompt()
   {
      cout << "Title: ";
      getline(cin, title);
      cout << "Author: ";
      getline(cin, author);
      cout << "Publication Year: ";
      cin >> pubYear;
   }

   void display()
   {
      cout << title << " (" << pubYear << ") by " << author << endl;
   }
};

// TODO: Define your TextBook class here
class Textbook : public Book
{
   protected:
   string subject;
   public:
   Book book;
   void promptSubject()
   {
      book.prompt();
      cin.ignore(265, '\n');
      cout << "Subject: ";
      getline(cin, subject);
   }

   void displaySubject()
   {
      book.display();
      cout << "Subject: " << subject << endl;
   }
};

// TODO: Add your PictureBook class here
class Picturebook : public Book
{
   protected:
   string illustrator;
   public:
   Book book;
   void promptIllustrator()
   {
      book.prompt();
      cin.ignore(256, '\n');
      cout << "Illustrator: ";
      getline(cin, illustrator);
   }

   void displayIllustrator()
   {
      book.display();
      cout << "Illustrated by " << illustrator << endl;
   }
};


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare a Book object here and call its methods
   Book book;
   book.prompt();
   cout << endl;
   book.display();
   cout << endl;

   cin.ignore(256, '\n');
   // Declare a TextBook object here and call its methods
   Textbook textbook;
   textbook.promptSubject();
   cout << endl;
   textbook.displaySubject();
   cout << endl;

   // Declare a PictureBook object here and call its methods
   Picturebook picturebook;
   picturebook.promptIllustrator();
   cout << endl; 
   picturebook.displayIllustrator();


   return 0;
}


