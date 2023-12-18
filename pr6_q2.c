/*
Q.2 Write a Program to count the frequency of each character in a given string.
For example,
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 2
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/

#include<stdio.h>

void main(){
	
	int i,j,x,y;
	char a[100];
	
	printf("Enter any string:- ");
	gets(a);
	
	x=strlen(a);
	
	printf("frequency of each letter:\n");
	
	for(i=0;i<x;i++){
		y=1;
		if(a[i]){
			for(j=i+1;j<x;j++){
				if(a[i]==a[j]){
					y++;
					a[j]='\0';
				}
			}
			printf("%c = %d\n",a[i],y);
		}
	}
	
}

/*
Output:-

Enter any string:- development
frequency of each letter:
d = 1
e = 3
v = 1
l = 1
o = 1
p = 1
m = 1
n = 1
t = 1
*/
