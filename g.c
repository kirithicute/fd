

#include <stdio.h>
 
int main()
{
   int f1, s1, *p, *q, sum;
 
   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);
 
   p = &f1;
   q = &s1;
 
   sum = *p + *q;
 
   printf("Sum of entered numbers = %d\n",sum);
 
   return 0;
}
