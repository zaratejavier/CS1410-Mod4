#include <iostream>
using namespace std;

class smallobj;     // define class
{
private:
    int somedata;       //class data
public:
        void setdata(int d)     //member function to set data
        {
            somedata = d;
        }
        void showdata()     //member function to display/get data
        {
            cout<<"Data is "<< somedata<<endl;
        }
};

int main()
{
    //create instances or a memebr of the class
    smallobj s1, s2;

    // ERROR: you cannot access your data directly
    // need to use an access method.
    //cout<<" some datat is "<< s1.somedata<<endl;

    //set my data
    // dot operator -> class members access operator
    s1.setdata(123);
    s2.setdata(456);
    //show your data
    s1.showdata();
    s2.showdata();
    return 0;
}