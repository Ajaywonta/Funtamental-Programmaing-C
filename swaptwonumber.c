/*
Name:Ajay Wonta
Subject:Programming fundamental
Roll no.:
Lab no.:
Program:WAP to swap two number
Date:2016-10-19
*/

#include<stdio.h>

void main(){
int a, b,temp;

printf("Enter the 1st number \n");
scanf("%d",&a);

printf("Enter the 2st number \n");
scanf("%d",&b);

printf("\n Before Swap a is %d",a);
printf("\n Before Swap b is %d",b);

temp=a;
a=b;
b=temp;

printf("\n After Swap a is %d",a);
printf("\n After Swap b is %d",b);

getch();
}
