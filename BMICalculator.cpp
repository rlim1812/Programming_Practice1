#include <iostream>
using namespace std;

int main()
{ 
    //setting up variables
    double height,
           weight,
              bmi;

    //ask user for input
    cout << "This program is a BMI calculator.\n";
    cout << "Please enter your height: ";
    cin >> height;
    cout << "Please enter in your weight: ";
    cin >> weight;

    //calculation
    bmi = (height * 703)/(weight * weight);
    
    //output 
    cout << "Your BMI is: " << bmi << endl;

    /*
    For adults 20 years and older:
    A BMI below 18.5 (shown in white) is considered underweight.
    A BMI of 18.5 to 24.9 (green) is considered healthy.
    A BMI of 25 to 29.9 (yellow) is considered overweight.
    A BMI of 30 or higher (red) is considered obese.
    */

    if (bmi < 18.5)
    {
    cout << "You are underweight.\n\n";
    }
    else if (18.5 <= bmi && bmi <= 24.9)
    {
    cout << "Your weight is in the optimal range.\n\n";
    }
    else if (25 <= bmi && bmi <= 29.9)
    {
    cout << "You are overweight.\n\n";
    }
    else 
    {
    cout << "You are obese.\n";
    cout << "Please go see a doctor.\n\n";
    }
    //end of BMI Calculator Program
}