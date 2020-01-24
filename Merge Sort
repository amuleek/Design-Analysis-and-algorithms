#include <iostream>
using namespace std;
void print_array(int array[], int array_size)
{
 int index;
 for(index=0;index<array_size;index++)
 {
 cout<<" "<<array[index];
 }
  cout<<endl;
}
void merge(int array[], int left, int middle, int right)
{
 int i, j, k;
 int size1=middle-left+1;
int size2=right-middle;
 int L[size1], R[size2];
 for(i=0; i<size1; i++)
 {
 L[i]=array[left+i];
 }
for(j=0; j<size2; j++)
 {
 R[j]=array[middle+1+j];
 }
 i=0;
 j=0;
 k=left;
 while (i<size1 && j<size2)
 {
 if (L[i]<=R[j])
 {
 array[k]=L[i];
 i++;
 }
 else
 {
 array[k]=R[j];
 j++;
  }
 k++;
 }
 while (i<size1)
 {
 array[k]=L[i];
 i++;
 k++;
 }
  while (j<size2)
 {
 array[k]=R[j];
 j++;
 k++;
 }
}
void merge_sort(int array[], int left, int right)
{
 if(left<right)
 {
 int middle = left + (right-left)/2;
 merge_sort(array, left, middle);
 merge_sort(array, middle+1, right);
 merge(array, left, middle, right);
 }
}
int main()
{
 int array[] = {9,2,7,4,1,3,5};
 int array_size = sizeof(array)/sizeof(array[0]);
 cout<<"Given array is : ";
 print_array(array, array_size);
 merge_sort(array, 0, array_size-1);
 cout<<"Sorted array is : ";
 print_array(array, array_size);
 return 0;
}


