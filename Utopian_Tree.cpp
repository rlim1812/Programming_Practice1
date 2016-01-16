/*
 Ryan Lim
 Utopian Tree Program
 This program is a simulation of the growth of a
 Utopian Tree that has an initial height of 1 meter
 over a certain amount of growth cycles. Each cycle
 inclues 1 years worth of growth. During the spring,
 the Utopian Tree doubles in height, but during the
 summer, it grows by one meter.
 */
#include <iostream>
using namespace std;
int main()
{
    int testCases,
    numCycles,
    treeHeight = 1;
    
    cout << "How many test cases should there be? ";
    cin >> testCases;
    cout << "Enter the number of cycles for each test case\n";
    cout << "(each number should be on a separate line): ";
    cout << "\n";
    
    //declare an array to hold test case values
    int output[testCases];
    
    //iterate through the test cases
    for (int i = 0; i < testCases; i++)
    {
      	 //number of Cycles
        cin >> numCycles;
        /*
         for each cycle, the Utopian Tree doubles in height
         during the Spring and grows taller by 1 meter
         */
        for (int x = 1; x <= numCycles; x++)
        {
            if (x % 2 == 0)
            {
                treeHeight = treeHeight + 1;
            }
            else
            {
                treeHeight = treeHeight * 2;
            }
        }
        output[i] = treeHeight;
        treeHeight = 1;
    }
    
    /*
     iterate through array that holds test case values
     and output each value
     */
    
    for (int a = 0; a < testCases; a++)
    {
        cout << "Test case " << a + 1 << ": " << output[a] << " meters " << endl;
    }
    
    return 0;
}