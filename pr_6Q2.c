/*
* Q[2]
*/

#include<stdio.h>

void main (){
	 
	char a[100],b;
	int i,j=0;
	 
	printf("enter your string =>");
	gets(a);
	
	for(b='a';b<='z';b++){
		
		j=0;
		for(i=0;a[i]!=0;i++){
			
			if(b==a[i])
			j++;
		}if(j>0)
		printf("\n%c=>%d",b,j);
	}
	
}
