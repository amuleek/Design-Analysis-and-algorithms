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
