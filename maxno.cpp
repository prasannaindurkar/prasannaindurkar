#include<iostream>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"both are equal\n";
    }
    else if(a>b){
        cout<<"a is greater than b\n";
    }
    else{
        cout<<"b is greater than a\n";
    }
    return 0;
}
