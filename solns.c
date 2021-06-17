/* Enter your solutions in this file */

#include <stdio.h>
#include <assert.h>


int max(int [], int);
int max(int x[],int n)
{
int t,i;
t=x[0];
for(i=1;i<n;i++)
{
if(x[i]>t)
t=x[i];
}
return(t);
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
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
#include <stdio.h>
#include <assert.h>


float average(int [], int);
float average(int x[], int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+x[i];
}
float avg= sum/n;
return(avg);
}
int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }
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
