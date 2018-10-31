#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   float money;
   char line[100];
   cout << "Line: ";
   cin.getline(line, 100);
   cout << "Money: ";
   cin >> money;
   cout << "You said: \n"
        << "\t" << line << endl;
   cout << "You have: " << money << endl
        << setw(9) << left << "\tPrice: " << "$" << setw(4) << right << "20.00" 
        << endl
        << setw(13) << left << "\tSales tax: \t$" << setw(4) << right << money 
        <<  endl;
}
   


