#include<stdio.h>
int linear(int arr[],int l,int r,int x)
{
 if(r<l)
return -1;
if(arr[l]==x)
return l;
if(arr[r]==x)
return r;
return linear(arr,l+1,r-1,x);
}

int main()
{
int arr[]={10,20,30,5,9},i;
int n=sizeof (arr)/sizeof (arr[0]);
int x=20;
int index=linear(arr,0,n-1,x);
if(index!=-1)
printf("element is %d is present at index %d",x,index);
else
printf("element %d not present",x);
return 0;
}

