#include <stdio.h>
#include <assert.h>


int min(int [], int);
int min(int x[],int n)
{
int t,i;
t=x[0];
for(i=1;i<n;i++)
{
if(x[i]<t)
t=x[i];
}
return(t);
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
