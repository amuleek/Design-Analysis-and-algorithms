#include <bits/stdc++.h>
using namespace std;
int smallest_pair(int a[], int n)
{
 int min = INT_MAX, secondMin = INT_MAX;
 for (int j = 0; j < n; j++)
 {
 if (a[j] < min)
 {
   secondMin = min;
 min = a[j];
 }
 else if ((a[j] < secondMin) && a[j] != min)
 {
 secondMin = a[j];
 }
 }
 return (secondMin + min);
}
int main()
{
 int arr[] = {43,56,44,1,88,89,62,12};
 int n = sizeof(arr) / sizeof(arr[0]);
 cout << "Smallest pair is : " << smallest_pair(arr, n);
 return 0;
}


