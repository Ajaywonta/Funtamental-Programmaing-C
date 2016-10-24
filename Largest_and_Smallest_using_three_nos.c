/*
Student Name: Ajay Wonta
Subject:Programming fundamental
Roll:
Lab:
Programme:WAP to print Largest and Smallest using terniary operator for three nos
Date: 2016/10/24
*/

#include<stdio.h>


int main(){
	int a,b,c;
	
	printf("Enter 1st nos \n");
		scanf("%d",&a);
	printf("Enter 2nd nos \n");
		scanf("%d",&b);
	printf("Enter 3rd nos \n");
		scanf("%d",&c);
	
	(a >= b && a >= c) ? printf("1st is %d which is largest nos",a):((b>=a && b>=c) ? printf("2nd is %d which is largest nos",b):printf("3rd is %d which is largest nos",c));
	
	return 0;}
