/* Enter your solutions in this file */

#include <stdio.h>


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



