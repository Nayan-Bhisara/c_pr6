/*
Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

------------------------------------------------

For example,
Input:
Enter any string: hello

Output:
Given string is not a Palindrome.
*/

#include<stdio.h>

void main(){
	
	char a[50];
	int i,x=0,y=1;
	
	printf("Enter your name:");
	gets(a);
	
	          
	for(i=0; a[i]!='\0'; i++){
		x++;
	}
	for(i=0; i<x/2; i++){
		if(a[i] != a[x-1-i]){
			y=0;
		}
	}
	(y==1)?printf("given name is Palindrome..")
			:printf("given name is note Palindrome..");
}


/*
Output:-

Enter your name:nayan
given name is palindome..

Enter your name:abcd
given name is note palindome..
*/
