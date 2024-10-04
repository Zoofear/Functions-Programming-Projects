// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

    //Prototype functions

void inflationInput(double& x, double& y, double);                              //This function asks the user for input of the price of the item during the current year and the last two years

void inflationCalc(double x, double y, double z, double& calc1, double& calc2); //This function calculates the two inflations for this year and the year before that 

void inflationOutput(double calc1, double calc2);                               //This function outputs the two inflations from this year and the previous year


int main()
{
        //variables
    
    double price0, price1, price2;  //These variables are the prices of an item from the current year, the year before, and the year before that

    double inflation1, inflation2;  //These variables are the inflation rates of this year and the year before

}

void inflationInput(double& x, double& y, double& z)
{
    cout << "What is the price of your item currently?" << endl;

    cin >> x;

    cout << "What is the price of your item last year?" << endl;

    cin >> y;

    cout << "What is the price of your item two years ago?" << endl;

    cin >> z;
}

void inflationCalc(double x, double y, double z, )