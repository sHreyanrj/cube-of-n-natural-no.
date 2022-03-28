#include <stdio.h>
#include <math.h>
void main ()
{
  int i, n,s;
  printf ("Enter no of natural no. to be added:\t");
  scanf ("%d", &n);
  printf("\nN natural numbers are:\n");
  for (i = 0; i <= n ; i++)
    {
        printf("\t%d\n",i);
        s=((n*(n+1)/2)*(n*(n+1)/2));
    }
    	    printf ("\n%d is the sum of cube of n natural numbers", s);

}
