#include <stdio.h>

int isodd(long long int n)
{
  if(n % 2 == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
int collatz_it(long long int n, int c)
{
  if(n == 1)
  {
    c++;
    return c;
  }
  if(isodd(n) == 0)
  {
    c++;
    n = collatz_it(((int)(n/2)), c);
  }
  else
  {
    c++;
    n = collatz_it((3*n+1), c);
  }
}

int main()
{
  long long int n;
  printf("Number to find the length of the collatz sequence: ");
  int y = scanf("%lld", &n);
  if(y == EOF || y == 0)
  {
    return 1;
  }
  int c = collatz_it(n, 0);
  printf("Iterative result: %d\n", c);
  printf("Recursive result: %d\n", c);
}
