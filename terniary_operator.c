/*
Student Name: Ajay Wonta
Subject:Programming fundamental
Roll:
Lab:
Programme:WAP to take two input from user and print largest and smallest nos using terniary operator.
Date: 2016/10/24
*/

#include<stdio.h>
#include<math.h>

int main(){
int a, b,Largest, smallest;

printf("\n intput 1st number");
scanf("%d",&a);
printf("\n intput 2nd number");
scanf("%d",&b);

Largest = (a>b)? a:b;
	printf("Largest value is %d",Largest);

smallest = (b>a) ? a:b;
	printf("Smallest value is %d",smallest);

return 0;
}
