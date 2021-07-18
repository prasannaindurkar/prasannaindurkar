#include<iostream>
using namespace std;
int main()
{
    int sidea, sideb, sidec;
    cout<<"input three sides of triangle:\n";
    cin>> sidea >> sideb >> sidec;

    if (sidea == sideb && sideb == sidec)
    {
        cout<<"This triangle is equilateral.\n";
         }
         else if (sidea==sideb || sidea==sidec || sideb==sidec)
         {
             cout<<"This is an isosceles triangle.\n";
         }
         else
         {
             cout<<"This is an scalane triangle.\n";
         }
         return 0;
}
