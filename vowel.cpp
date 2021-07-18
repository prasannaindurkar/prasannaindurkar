#include<iostream>
using namespace std;

int main()
{
    char c;
    int isLowercasevowel,isUppercasevowel;
    cout<<"Enter an Alphabet\n";
    cin>>c;

isLowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
isUppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(isLowercasevowel||isUppercasevowel)
cout<<c<<" is a vowel\n";
else
   cout<<c<<" is a consonant\n";
   return 0;
}