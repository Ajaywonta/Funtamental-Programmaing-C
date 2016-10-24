/*
Name: Ajay Wonta
Subject:Programmin fundamental
Roll no.:
Lab no.:
Program:write a program to print 
either number is positive negative or zero.
Date:
*/

#include<stdio.h>

   int main(){
	int a;   
printf("\n enter any number:\n");
scanf("%d",&a);
if (a>0)
 printf("%d positive number:\n",a);

 
   else if(a<0)
    
printf("%d negative number:\n",a);

else
printf("\n zero");

return 0;
}
