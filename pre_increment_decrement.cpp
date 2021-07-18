#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter a number:"<<endl;

cin>>b;
cin>>c;
//5    6     7     3     
a=++b - c++ + ++c - --b + ++b;
//6     7     7     3     6
cout<<a<<endl;

return 0;
}

