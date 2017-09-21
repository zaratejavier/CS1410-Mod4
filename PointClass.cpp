


// File: PointClass

// Created by Javier Zarate on 9/21/17 for CS1410.


// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;

// Constants, struct, classes
class Point
{
private:
    float x;
    float y;
public:
    // constructor
    Point() : x(0.0), y(0.0) {}
    //methods

    void showPoint()
    {
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;


    }
    void updatePoint(float xnew, float ynew)
    {
        x = xnew;
        y = ynew;
    }
};

// Prototypes


// Main Program Program

int main()
{

    Point p1;
    p1.showPoint();     //display
    p1.updatePoint(2.5, 3.9);   //update values
    p1.showPoint();     //display
    return 0;

}

// Function Definitions