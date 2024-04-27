/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
    double fuel, consumption;
    double remainingDistance;

   cout << "please enter the amout of fuel and fuel consumption per hundred kilomeeters: ";
    cin >> fuel >> consumption;

    remainingDistance = fuel / consumption * 100;

    cout << "you can " << remainingDistance << " scroll another kilometer." << endl;

    if (remainingDistance < 100) {
        cout << "warning:the remining fuel is less than 100 km!" << endl;
    }

    return 0;
}



