#include<stdio.h>
int main(void)
{
//declare array with maximaum 5 values
int marks[5]; 
//get the size of the array 
int noofsubjects = sizeof(marks)/sizeof(int);
// let us get the input from the user
for(int i=0; i<noofsubjects; i++)
{
	printf("\nEnter marks ");
	scanf("%d" , &marks[i]);
}
double average;
double sum = 0;
// fetch individual array elements
for(int i=0;i<noofsubjects; i++)
// let us print the average of marks
average = sum/noofsubjects;
printf("\nAverage marks = %1f", average);
return 0;
}
