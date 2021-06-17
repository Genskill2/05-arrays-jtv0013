#include <stdio.h>
#include <assert.h>


int factors(int, int []);
int factors(int num, int f[])
{

int count;

int m=0;
int t;


for(count = 2; num > 1; count++)  
{  
while(num%count == 0)  
{  

num = num / count;  


f[m]=count;
m=m+1;
}
}


return(m);
}

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
