#include<stdio.h>
int findPosition(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int N,target,position;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d elements in the array:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find in the array: ");
    scanf("%d", &target);
    position = findPosition(arr, N, target);
    if (position != -1)
    {
        printf("The number %d is found at position %d in the array.\n", target, position + 1);
    } else
    {
        printf("The number %d is not found in the array.\n", target);
    }

    return 0;
}

