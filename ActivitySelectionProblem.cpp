#include<stdio.h>
void activity_selection(int start_time[], int finish_time[], int number_of_processes)
{
 int i, j;
 printf ("Selected Activities are : ");
 i = 0;
 printf("%d ", i);
 for (j = 1; j < 7; j++)
 {
 if (start_time[j] >= finish_time[i])
 {
 printf ("%d ", j);
 i = j;
 }
 }
}
int main()
{
 int start_time[] = {1, 3, 0, 5, 8, 5};
 int finish_time[] = {2, 4, 6, 7, 9, 9};
 int number_of_processes = sizeof(start_time)/sizeof(start_time[0]);
 activity_selection(start_time, finish_time, number_of_processes);
 return 0;
}
