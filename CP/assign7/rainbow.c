#include<stdio.h>

void rainbow (char c);

void main()
{
 char c;
 printf("Enter a character : ");
 scanf("%c",&c);
 rainbow(c);
}

void rainbow (char c)
{
 switch (c)
 {
  case 'V' :
  case 'v' : printf("Violet");break;
  case 'I' :
  case 'i' : printf("Indigo");break;
  case 'B' :
  case 'b' : printf("Blue");break;
  case 'G' :
  case 'g' : printf("Green");break;
  case 'Y' :
  case 'y' : printf("Yellow");break;
  case 'O' :
  case 'o' : printf("Orange");break;
  case 'R' :
  case 'r' : printf("Red");break;
  default : printf("Color is not present");
 }
}
