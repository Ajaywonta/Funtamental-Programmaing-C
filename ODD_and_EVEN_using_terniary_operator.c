/*
Student Name: Ajay Wonta
Subject:Programming fundamental
Roll:
Lab:
Programme:WAP to print ODD and EVEN using terniary operator
Date: 2016/10/24
*/

#include<stdio.h>


int main(){
	int a;
	
	printf("\n input number to find out ODD OR EVEN");
		scanf("%d",&a);
	
	(a % 2 == 0) ? printf("The %d is Even",a):printf("The %d is ODD",a);
	
	
	
	return 0;
}
