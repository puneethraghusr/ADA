#include <stdio.h> 
  

void binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        
        if (arr[mid] == x) 
	{
		while(mid>0 && arr[mid-1]==x)
		{
			mid=mid-1;
		}
		printf("start:%d\n",mid);
		while(mid<=r && arr[mid+1]==x)
		{
			mid=mid+1;
		}
		printf("end:%d",mid);
		return;
	}
  
         
        if (arr[mid] > x) 
            binarySearch(arr, l, mid - 1, x); 
  
        
        binarySearch(arr, mid + 1, r, x); 
    } 
  
    
     
    return -1; 
} 
  
void main(void) 
{ 
    int arr[] = { 1,2,2,2,3 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 2; 
    binarySearch(arr, 0, n - 1, x); 
    
} 
