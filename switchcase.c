/*
Student Name : Kabir D Shrestha
Subject : Programming Fundamental
Lab No. : 06
Program : Write a C program sipmle calculation using 
		  a.switch case
		  b.break
Date : 2016-10-23
*/
#include<stdio.h>
		int main(){
		int a,b,result;
		char c;	
		
	printf("\nEnter the operator '+','-','*','/','%%': ");
	scanf("%c",&c);
	
	//c=getchar();
			
	printf("\nEnter the first value:\n");
	scanf("%d",&a);
	
	printf("\nEnter the second value:\n");
	scanf("%d",&b);
	
	
	
	switch(c){
		case'+':
			result=a+b;
			printf("\nSum of two numbers is : %d",result);
				break;
		
		case'-':
			result=a-b;
			printf("\nDifference of two numbers is : %d",result);
				break;
		
		case'*':
			result=a*b;
			printf("\nMultiplication of two numbers is : %d",result);
				break;
		
		case'/':
			result=a/b;
			printf("\nDivison of two numbers is : %d",result);
				break;
		     
		case'%':
			result=a%b;
			printf("\nModulus of two numbers is : %d",result);
				break;
		
		default:
			printf("\nChoose valid operator");
		}
		
	
		return 0 ;
	}	  
