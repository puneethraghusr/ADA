#include<stdio.h>
int gcd(int m,int n)
{
int rem;
while(n!=0) 
{
rem=m%n;
m=n;
n=rem;
}
return m;
}
int main()
{
int m,n;
printf("Enter m,n\n");
scanf("%d%d",&m,&n);
m=gcd(m,n);
printf("Gcd is%d",m);
return 0;
}
