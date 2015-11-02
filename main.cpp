
//  Created by Ryan Lim on 10/31/15.
//  Copyright © 2015 Ryan Lim. All rights reserved.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //output program purpose
    cout << "This program accepts 10 values and outputs ";
    cout << "the highest and lowest values.\n";
    
    //setting up array
    const int numValues = 10;
    int numbersArray [numValues] = {0};
    int count = 0;
    
    //ask user for integer inputs and hold the values in an array
    for (int &range: numbersArray)
      {
          count ++;
          cout << "Enter a value ("<< count << "): ";
          cin >> range;
          sleep(0.21);
      }
    //iniatilize first value in array as highest and lowest value
    int lowest = numbersArray[0];
    int highest = numbersArray [0];
    
    for (int i = 1; i < numValues; i++)
      {
         if (numbersArray[i] < lowest)
          {
              lowest = numbersArray[i];
          }
         if (numbersArray[i] > highest)
          {
              highest = numbersArray[i];
          }
      }
    cout << "The lowest value is: " << lowest << endl;
    cout << "The highest value is: " << highest << endl << endl;
    //end of first program
    
    //Second program
    //outputting program purpose
    cout << "This program accepts the total rainfall for each of 12 months\n";
    cout << "and ouputs total yearly rainfall, average monthly rainfall,\n";
    cout << "and the highest and lowest amounts of rainfall.\n";
    
    //setting up array and variables
    const int x = 12;
    double monthsArray[x], total = 0.0,average,lower,higher;
    
     //range-based for loop that asks user to enter rainfall total for 12 months and saves values in array
    for (int var = 0; var < x; var++)
      {
          cout << "Please enter in the total rainfall for month " << var + 1 << ": ";
          cin >> monthsArray [var];
          total = total + monthsArray [var];
      }
    //calculate average amount of rainfall for each of the 12 months
    average = total/x;
    //initialize first array value as lowest and highest
    lower = monthsArray[0];
    higher = monthsArray [0];
    
    // compare consecutive array values and set the lower one to lowest and the higher one to highest
    for (int varPlusOne = 1; varPlusOne< x ; varPlusOne++)
      {
         if (monthsArray[varPlusOne] < lower)
             lower = monthsArray[varPlusOne];
         if (monthsArray[varPlusOne] > higher)
             higher = monthsArray[varPlusOne];
      }
    //output total rainfall for year, average rainfall per month, and highest and lowest amounts of rainfall
    cout << "The total rainfall for the year was: " << total << endl;
    cout << "The average rainfall per month was: " << average << endl;
    cout << "The highest amount of rainfall during the year was: " << higher << endl;
    cout << "The lowest amount of rainfall during the year was: " << lower << endl << endl;
    //end of second program
    
    //Parallel Arrays Program
    //program purpose
    cout << "This program keeps track of sales for 5 types of salsa: mild,medium,sweet,hot,and spicy.\n";

    //setting up two arrays - one for salsa names and one for sales for each type of salsa
    const int numberSalsas = 5;
    string salsaNames[numberSalsas] = {"mild","medium","sweet","hot","zesty"};
    int salsaSales[numberSalsas], totalSales = 0, highestSelling, lowestSelling, matchingNumber = 0, matchingNumber2 = 0;
    
    /*
    ask user to input sales for each type of salsa, output sales for each type of sala,                
    then add the total amount of sales
    */
    for (int numberCount = 0; numberCount < numberSalsas ; numberCount++)
      {
          cout << "Enter the number of " << salsaNames[numberCount] << " salsa jars sold: ";
          cin >> salsaSales[numberCount];
          totalSales = totalSales + salsaSales[numberCount];
          sleep(0.20);
      }
    
    //initialize highestSelling and lowestSelling variables as the first value in the salsaSales array
    lowestSelling = salsaSales[0];
    highestSelling = salsaSales[0];
    
    //compare array values to find lowest and highest values
    for (int counter = 1; counter < numberSalsas; counter++)
      {
          if (salsaSales[counter] < lowestSelling)
           {
               lowestSelling = salsaSales[counter];
               matchingNumber = counter;
           }
          if (salsaSales[counter] > highestSelling)
           {
               highestSelling = salsaSales[counter];
               matchingNumber2 = counter;
           }
      }
    
    /*
    output the amount of sales per salsa type
    total sales, and names of the highest and lowest selling products
    */
    for (int xyz = 0; xyz < numberSalsas; xyz++)
    {
        cout << "The number of sales for the " << salsaNames[xyz] << " salsa type was: ";
        cout << salsaSales[xyz] << endl;
    }
    cout << "The total amount of sales was: " << totalSales << endl;
    cout << "The highest selling product was: " << salsaNames[matchingNumber2] << " salsa" << endl;
    cout << "The lowest selling product was: " << salsaNames[matchingNumber] << " salsa" << endl << endl;
    //end of third program
    
    //Program 4
    //setting up variables and array
    const int size = 10;
    int userInput,
        incrementer = 0,
        listOfIntegers[size];
    
    //output program purpose
    cout << "Set up a list with 10 integer values, then choose a value.\n";
    cout << "The program will determine how many times the value appears in the list.\n";
    
    //ask user for input and save input values into array
    for (int &reference: listOfIntegers)
      {
          cout << "Enter a value: ";
          cin >> reference;
          sleep (0.21);
      }
    
    //output list values to user
    cout << "Here are the 10 values in the list: ";
    for (int val: listOfIntegers)
      {
          cout << val << " ";
      }
    cout << "\n" << "Please choose one: ";
    cin >> userInput;
    
    //check the number of times the user input value appears in the array list
    for (int value = 0; value < size; value++)
      {
          if (userInput == listOfIntegers[value])
           {
               incrementer++;
           }
      }
    cout << "The value " << userInput << " appears in the list " << incrementer << " times.\n\n";
    //end of program 4
    
    //Program 5
    const int Values = 8;
    int index;
    double userNumber,
           array[Values] = {0,1,2,3,4,5,6,0};
    
    //program purpose
   cout <<"This is a program that asks for an index and a number. It includes the number at the indicated\n";
   cout <<"index of the array ={1,2,3,4,5,6} and moves a position forward (from n to n+1) each element\n";
   cout << "after the selected index.\n";
   //ask user for input
    cout << "Here is a list of values: ";
    for (int r = 1; r < 7; r++)
      {
          cout << array[r] << " ";
      }
    cout << "\nPlease enter an idex value (index values start from 0 (one before the first value)";
    cout << " and go up to 7(one after the last value): ";
    cin >> index;
    //input validation
    while (index < 0 || index > 7)
        {
            cout << "Error. Please enter an index value between 0(one before the first value)";
            cout << " and 7(one after the last value): ";
            cin >> index;
        }
    cout << "Please enter a number that corresponds to the index: ";
    cin >> userNumber;
    
    //if index = 0, set the first value to userNumber
    if (index == 0)
     {
         array [index] = userNumber;
         cout << "Now, here is the list: ";
         for (int abc = 0; abc <= 6; abc++)
           {
               cout << array[abc] << " ";
           }
         cout << "\n";
     }
    //if index = 7, set the last value to userNumber
    else if (index == 7)
        {
          array[index] = userNumber;
          cout << "Now, here is the list: ";
          for (int tuv = 1; tuv <= 7; tuv++)
            {
              cout << array[tuv] << " ";
            }
          cout << "\n";
        }
    else if (0 < index && index < 7 )
        {
          for (int aValue = 7; aValue > index; aValue--)
            {
                array[aValue] = array[aValue-1];
            }
          array[index] = userNumber;
          cout << "Here is the list of values: ";
          for (int hello = 1; hello <= 7; hello++)
            {
                cout << array[hello] << " ";
            }
         cout << endl << endl;
        }
    return 0;
}
