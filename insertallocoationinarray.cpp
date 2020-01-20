#include <iostream>
using namespace std;
int main()
{
 int array[10];
 int position,number;
 int temp;
 static int count;
 for(int i=0;i<10;i++)
 {
 array[i]=NULL;
 }
 for(int i=0;i<10;i++)
 {
 cout<<"Enter the element you want to enter (except 0) : ";
 cin>>number;
 cout<<"Enter the position of element : ";
 cin>>position;
 array[position]=number;
 }
 
