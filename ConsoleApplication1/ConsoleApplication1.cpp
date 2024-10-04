// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

    //Prototype functions

void inflationInput(double& x, double& y, double& z);                              //This function asks the user for input of the price of the item during the current year and the last two years

void inflationCalc(double x, double y, double z, double& calc1, double& calc2); //This function calculates the two inflations for this year and the year before that 

void inflationOutput(double calc1, double calc2);                               //This function outputs the two inflations from this year and the previous year


int main()
{
        //variables
    
    double price0, price1, price2;  //These variables are the prices of an item from the current year, the year before, and the year before that

    double inflation1, inflation2;  //These variables are the inflation rates of this year and the year before

    inflationInput(price0, price1, price2);

    inflationCalc(price0, price1, price2, inflation1, inflation2);

    inflationOutput(inflation1, inflation2);

    return 0;

}

void inflationInput(double& x, double& y, double& z)
{
    cout << "What is the price of your item currently?" << endl;        //Getting this years item price

    cin >> x;

    cout << "What is the price of your item last year?" << endl;        //Getting the previous years item price

    cin >> y;

    cout << "What is the price of your item two years ago?" << endl;    //Getting the item price from two years ago

    cin >> z;
}

void inflationCalc(double x, double y, double z, double& calc1, double& calc2)
{
    calc1 = (x - y) / y;                                                        //This is the function to calculate the first inflation rate

    calc2 = (y - z) / z;                                                        //This is the function to calculate the second inflation rate
}

void inflationOutput(double calc1, double calc2)
{
    cout << setprecision(2) << "The inflation rate for this year is: " << calc1 << "%" << endl;     //Outputting the inflation rate for this year

    cout << "The inflation rate for the previous year was: " << calc2 << "%" << endl;               //Outputting the inflation rate for the previous year
}