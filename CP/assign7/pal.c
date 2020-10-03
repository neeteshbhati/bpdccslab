#include<stdio.h>
#include<string.h>

int isPalindrome (char str[]);

void main ()
{
 char str[10]; int check = 0;
 printf("Enter a string: ");
 gets(str);
 check = isPalindrome(str);
 if(check)
  printf("It is a palindrome");
 else
  printf("It is not a palindrome");
 }

int isPalindrome (char str[])
{
 for(int i=0;i<strlen(str);++i)
 {
  if(str[i]!=str[strlen(str)-i-1])
   return 0;
 }
 return 1;
}
  
