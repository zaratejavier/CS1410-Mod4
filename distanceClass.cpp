// File: distanceClass
// Created by Javier Zarate on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
//task: define a calss distance
//that stores int feet and float inches
//two method: setDist-> set distance
//             getDist -> set the informatino with customer input
//             showDist -> display vlues
// Constants, struct, classes
class Distance
{
private:
    int feet;
    float inches;
public:
    int cm;
    void setDist(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getDist()      // get user input
    {
        cout<<"\nEnter feet:";
        cin>>feet;
        cout<<"\nEnter inhces";
        cin>>inches;
    }
    void showDist()     //display information
    {
        cout<<"Feet "<< feet<<" and inches "<<inches<<endl;
    }
};

// Prototypes


// Main Program Program

int main(void)
{
    //create an instance "instantiate" the class
    Distance d1, d2;

    d1.setDist(6, 6.5);
    cout<<" \nDist 1"<<endl;
    d1.showDist();

    d2.setDist(3, 2.5);
    cout<<" \nDist 2"<<endl;
    d1.showDist();
    //access a public a data member
    d2.cm= 8.2;
    cout<<"cm is "<< d2.cm<<endl;
    return 0;

}

// Function Definitions