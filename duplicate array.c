#include <stdio.h>

int Total_Duplicates(int arr[], int Size);
 
int main()
{
	int arr[3], i, Size, Count = 0;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	Count = Total_Duplicates(arr, Size);

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);
	     
 	return 0;
}
int Total_Duplicates(int arr[], int Size)
{
	int i, j, Count = 0;
	
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}
	return Count;	
}
