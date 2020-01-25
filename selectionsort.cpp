#include<iostream>
using namespace std;
int findSmallest (int[],int);
int main ()
{
    int myarray[10] = {11,5,2,20,42,53,23,34,101,22};
    int pos,temp,pass=0;
    cout<<"\n Input list of elements to be Sorted\n";
    for(int i=0;i<10;i++)
    {
        cout<<myarray[i]<<"\t";
    }
