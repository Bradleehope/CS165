/***********************************************************************
* Program:
*    Assignment ##, ????          
*    Brother Cook, CS165
* Author:
*   Bradlee Rothwell 
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Employee
{
private:
   string name;
public:
   string getName()
   {
      return name;
   }
   void setName(string n)
   {
      name = n;
   }
   virtual void display()
   {
      cout << name << endl;
   }
};

class HourlyEmployee : public Employee
{
private:
   int wage;
   int hours;
public:
   Employee employee;
   int getWage()
   {
      return wage;
   }
   void setWage(int w)
   {
      wage = w;
   }
   virtual void display()
   {
      cout << getName() << " makes $" << wage << "/hour" << endl;
   }
};

class SalaryEmployee : public Employee
{
private:
   int salary;
public:
   Employee employee;
   int getSalary()
   {
      return salary;
   }
   void setSalary(int s)
   {
      salary = s;
   }
   virtual void display()
   {
      cout << getName() << " makes $" << salary << "/year" << endl;
   }
};

#define SIZE 3
   
/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   Employee* employee[SIZE];

   for (int i = 0; i < SIZE; i++)
   {
      char input;
      cout << "Is employee hourly or salary? (h/s) ";
      cin >> input; 

      string name;
      cin.ignore(256,'\n');
      cout << "Employee's name: ";
      getline(cin, name);

      if(input == 'h')
      {
         int wage;
         cout << "Enter " << name << "'s hourly wage: ";
         cin >> wage;

         HourlyEmployee* hourlyEmployee = new HourlyEmployee;
         hourlyEmployee->setName(name);
         hourlyEmployee->setWage(wage);

         employee[i] = hourlyEmployee;
      }
      else
      {
         int salary;
         cout << "Enter " << name << "'s salary wage: ";
         cin >> salary;

         SalaryEmployee* salaryEmployee = new SalaryEmployee;
         salaryEmployee->setName(name);
         salaryEmployee->setSalary(salary);

         employee[i] = salaryEmployee;
      }
     
      for(int i = 0; i < SIZE; i++)
      {
         employee[i]->display();
      }
      for(int i = 0; i < SIZE; i++)
      {
         delete employee[i];
      }
   }


      
   return 0;
}
