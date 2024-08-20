#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
int i,j,k;
float a[100],temp;
rand();
for(i=0;i<100;i++)
{
a[i]=((10.0+(rand()%1000/100.0)));
}
printf("the generated 100 random real numbers :\n");
for(i=0;i<100;i++)
{
printf("%f\t",a[i]);
}
for(j=0;j<99;j++)
{
for(k=j+1;k<100;k++)
{
if(a[j]<a[k])
{
temp = a[j];
a[j]=a[k];
a[k]=temp;
}
}
}
printf("sorted descending order numbers\n");
for(i=0;i<100;i++)
{
printf("%f\t",a[i]);
}
getch();
return 0;
}
