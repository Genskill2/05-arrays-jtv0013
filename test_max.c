#include <stdio.h>
#include <assert.h>


int max(int [], int);
int max(int k[],x)
{
int t=k[0];
for(int i=0;i++;i<x)
{
if(k[i+1]>k[i])
{
t=k[i+1);
return(t);
}
}
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x,7)==10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
