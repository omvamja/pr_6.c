/*
*  Q[1]
*/

#include<stdio.h>
 void main (){
 	
 char s1[50],s2[50];
 
 printf("\n enter the string ot check for palindrome:=>");
 gets(s1);
 
 strcpy(s2,s1);
 strrev(s2);
 
 if(strcmp(s1,s2)==0){
 
 printf("\ngiven string is a palinbrome .");
 	
 	
 }else{
 	printf("given string is not a palinbrome .");
 }
 }
