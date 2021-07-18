#include<iostream>
using namespace std;

int main(){
    int i;
    cout<<"Enter a positive number\n";
    cin>>i;
    int n;
    cin>>n;
    for(i=1;i<=10;i++){
     cout<<i<<"-"<<n<<"="<<i-n<<endl;
    }
    return 0;
}