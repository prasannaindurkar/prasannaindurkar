#include<iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;

    if(age>=18){
        cout<<"you can vote\n";
    }
    else{
        cout<<"you are not eligible for voting\n";
    }
    return 0;
}