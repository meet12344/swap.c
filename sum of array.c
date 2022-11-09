#include <stdio.h>
//Calculate array size
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int sumArrayElements(int arr[], const int n)
{
    int sum = 0;  // accumulate sum in this variable
    int i;
    // Iterate through all elements
    // and add them to sum
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {2,5,8};
    // length of the array
    const int N = ARRAY_SIZE(arr);
    const int sum =  sumArrayElements(arr,N);
    printf("\nSum = %d", sum);
    return 0;
}
