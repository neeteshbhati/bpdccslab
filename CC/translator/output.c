#include <stdio.h>
int
main ()
{
  int num;
  int i, flag;
  float x[2][3];
  flag = 5;
  x[1][3] = 4 + x[2][1];
  printf ("Enter the value to be checked ");
  scanf ("%d", &num);
  for (i = 2; i <= 5; i++;)
    {
      if (num == 5)
	{
	  flag = 1;
	  goto Exit;
	}
    }
Exit:
  if (flag == 1)
    {
      printf ("The value %d is not prime ", num);
    }
  else
    {
      printf ("The value %d is prime ", num);
    }
}
