#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Funny looking emoticon
    cout << "   ///// \n";
    cout << "  +\"\"\"\"\"+ \n";
    cout << "(| o   o |)\n";
    cout << " |   ^   |\n";
    cout << " |  \'-\'  |\n";
    cout << " +-------+\n";
    cout << "\n";
    //end of first program

    /*
    This program asks for user's name and birthday,
    then prints them out
    */

    //setting up variables for name and birthday
    string firstName,
           lastName,
           birthMonth;

       int birthDay,
           birthYear;

   //ask user for name and birthday
   cout << "What is your first name? ";
   cin >> firstName;
   cout << "What is your last name? ";
   cin >> lastName;
   cout << "Enter your birthday \n";
   cout << "Month?(Enter a word) ";
   cin >> birthMonth;
   cout << "Day?(Enter a number) ";
   cin >> birthDay;
   cout << "Year?(Enter a number) ";
   cin >> birthYear;
      
   //Output name and birthday to screen
   cout << firstName << " " << lastName;
   cout << "'s date of birth is: ";
   cout << birthMonth << " " << birthDay << ", " << birthYear;
   cout << "\n";
   cout << "\n";
       
   /*
   This program takes 3 sides of a triangle
   and calculates the area of the triangles
   */
   
   //setting up variables
   long double a,
               b,
               c,
               p,  
               A;
   
   //ask user to input sides of triangle
   cout << "This program accepts input for three sides of a triangle \n";
   cout << "and calculates the area of the triangle \n";
   cout << "Enter the value of the first side: ";
   cin >> a;
   cout << "Enter the value of the second side: ";
   cin >> b;
   cout << "Enter the value of the third side: ";
   cin >> c;
   
   //Calculating perimeter and area of triangle
   p = (a + b + c)/2;
   A = sqrt(p * (p-a) * (p-b) * (p-c));
     
   //Outputting area of triangle
   cout << "The area of the triangle is: " << A;
   cout << "\n"; 
   cout << "\n"; 
                 
   //Change Machine
   
   //setting up variables
   int total, dollarBills20, remainder20, dollarBills10, remainder10,
       dollarBills5, remainder5, dollarBills1, remainder1, quarters,
       remainderQuarters, dimes, remainderDimes, nickels,
       remainderNickels, pennies;
   
   //Ask user for input
   cout << "How many pennies do you have?\n";  
   cout << "Enter a number less than or equal to 5000: ";
   cin >> total;
     
   //Calculations
   dollarBills20 = total / 2000;
   remainder20 = total % 2000;
   dollarBills10 = remainder20 / 1000;
   remainder10 = remainder20 % 1000;
   dollarBills5 = remainder10 / 500;
   remainder5 = remainder10 % 500;
   dollarBills1 = remainder5 / 100;
   remainder1 = remainder5 % 100;
   quarters = remainder1 / 25;
   remainderQuarters = remainder1 % 25;
   dimes = remainderQuarters / 10;
   remainderDimes = remainderQuarters % 10;
   nickels = remainderDimes / 5;
   remainderNickels = remainderDimes  % 5;
   pennies = remainderNickels / 1;
   
   //Outputting Values 
   cout << "You get back: \n";
   cout << "$20 bills: " << dollarBills20 << endl;
   cout << "$10 bills: " << dollarBills10 << endl;
   cout << "$5 bills: " << dollarBills5 << endl;
   cout << "$1 bills: " << dollarBills1 << endl;
   cout << "Quarters: " << quarters << endl;
   cout << "Dimes: " << dimes << endl;
   cout << "Nickels: " << nickels << endl;
   cout << "Pennies: " << pennies << endl;
   cout << "\n";
   return 0;
}
/* 
Programming_Practice1
This is the first set of programs that I have created in C++.
*/
