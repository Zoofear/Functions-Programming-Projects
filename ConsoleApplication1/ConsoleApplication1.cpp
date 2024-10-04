// ConsoleApplication1.cpp : This file contains the project 1: propertiess of a circle
// This file is to take two cardinal points from the user and tell them the radius, circumference, and area of their circle using said cardinal points

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

    //Prototype functions

double calcDistance(double x1, double y1, double x2, double y2);    //This function will use the distance formula using two points on a cartesian plane and returns the distance

double calcRadius(double x1, double y1, double x2, double y2);      //This function just runs and returns calcDistance divided in half

double calcCircumference(double r, double pi);                      //This function takes the radius and uses it to calculate the circumference using the circumference formula      
   
double calcArea(double r, double pi);                               //This function takes the radius and uses it to calculate the area for using the area formula

int main()
{
        //Variables

    double pi = 3.1416;

    double x1, y1, x2, y2;

        //Asking for user input
    
    cout << "Enter your first coordinate" << endl;                  //This ask the user for the first coordinate
   
    cout << "x:";
   
    cin >> x1;
   
    cout << "y:";

    cin >> y1;

    cout << "Enter your second coordinate" << endl;                 //This asks the user for the second coordinate

    cout << "x:";
    
    cin >> x2;

    cout << "y:";

    cin >> y2;

        //Calculations

    double radius = calcRadius(x1, y1, x2, y2);

    double circumference = calcCircumference(radius, pi);

    double area = calcArea(radius, pi);

        //Output variables

    cout << setprecision(3) << "The radius of your circle is: " << radius << endl;

    cout << "The circumference of your circle is: " << circumference << endl;

    cout << "The area of your circle is: " << area << endl;

    return 0;
}

double calcDistance(double x1, double y1, double x2, double y2)
{
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));      //This is the distance formula for two cardinal points (it is having rounding errors)

    return distance;
    
}

double calcRadius(double x1, double y1, double x2, double y2)
{
    double distance = calcDistance(x1, x2, y1, y2);                 //Calls the more general function calcDistance and specializes it for this 

    double radius = distance / 2;                                   //Divides the distance in half since the radius is half of the overall diameter
    
    return radius;
}

double calcCircumference(double r, double pi)
{
    double circumference = (2 * pi * r);                       //Circumference formula

    return circumference;
}

double calcArea(double r, double pi)
{
    double area = pow((pi * r), 2);                            //Area formula

    return area;
}