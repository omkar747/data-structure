
#include<stdio.h>
int main(void)
{
int a[50],n,pass,i,j,temp = 0;
setbuf(stdout,NULL);
printf("Enter the value of n :\n");
scanf("%d", &n);
printf("Enter n elements:\n");
for (i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
//computation for bubble sort
for (pass=1; pass<=n-1; pass++)
{
for (j=0; j<n-pass;j++)
{
if (a[j] > a[j+1])
{
temp = a[j+1];
a[j+1]= a[j];
a[j] = temp;
}
}
}
printf("The sorted array after bubble sort is :\n");
for (i=0; i<n; i++)
{
printf("%d", a[i]);
}
return 0;
}

