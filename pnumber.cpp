#include<iostream>
using namespace std;

int main()
{
int n;

cout<<"Enter a number to checking the palindrome number or not";
cin>>n;
int original=n,r;
int temp=0;
while(n)
{
r=n%10;
temp+=r*10;

n/=10;
}

if(temp==original)
cout<<"Number "<<original<<" is a Palindrome Number\n";

else
cout<<"Number "<<original<<" is not a Palindrome Number\n";
return 0;
}
