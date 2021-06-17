#include <stdio.h>
#include <assert.h>


int mode(int [], int);
int mode(int x[], int n)
{
int max=0,most=0,i,j;

for (i = 0; i < n; ++i) {
int count = 0;
      
for (j = 0; j < n; ++j) {
if (x[j] == x[i])
++count;
}
      
if (count > most) {
most = count;
max= x[i];
}
   }

return(max);
}

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
