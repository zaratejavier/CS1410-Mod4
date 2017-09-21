


// File: Counter

// Created by Javier Zarate on 9/21/17 for CS1410.


// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;

// Constants, struct, classes
class Counter
{
private:

    unsigned int count;


public:
    // constructor
    Counter(): count(100)
    {/*empty body*/}
    void incCount()     //increment count
    {
        count++;
    }
    int getCount()      //return the count
    {
        return count;
    }
};


// Prototypes


// Main Program Program

int main()
{
    Counter c1, c2;

    cout<<"\n c1="<<c1.getCount();  //display
    c2.incCount();                  //incement c1
    cout<<"\n c1="<<c1.getCount();  //display

    cout<<"\n c2="<<c2.getCount();  //display
    c2.incCount();                  //incement c1
    cout<<"\n c2="<<c2.getCount();  //display
    
    return 0;

}

// Function Definitions