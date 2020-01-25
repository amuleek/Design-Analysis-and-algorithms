#include <bits/stdc++.h>
using namespace std;
int smallest_pair(int a[], int n)
{
 int min = INT_MAX, secondMin = INT_MAX;
 for (int j = 0; j < n; j++)
 {
 if (a[j] < min)
 {
