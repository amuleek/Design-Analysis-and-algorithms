#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
 double number;
 double power;
 double result = 1;
cout<<"Enter number : ";
 cin>>number;
 cout<<"Enter power : ";
 cin>>power;
 if (power==0 && number==0)
   {
 cout<<"Not Defined";
 }
 else if(power==0 && number!=0)
 {
 cout<<"Result is : "<<result;
 }
 else if(power>0)
 {
 for(int i=1;i<=power;i++)
 {
 result=number*result;
 }

