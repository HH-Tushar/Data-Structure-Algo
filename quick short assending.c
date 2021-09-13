/*
Hasibul Hasan Tushar
ID-1935202509
Batch-52 (CSE-DAY)
*/
#include<stdio.h>
#define MAX 20
void print(int arr[],int count);
void quicksort(int arr[],int first,int last);
int main()
{
    int i, count, arr[MAX];                          // T(1)
    printf("Enter elements Number (Max 20): ");
    scanf("%d",&count);                           // T(1)

    printf("Enter elements: \n");
    for(i=0; i<count; i++)                          // T(n+1)
    {
        scanf("%d",&arr[i]);                        // T(n)
    }

    printf("Giver array is : ");
    print(arr,count);                                // T(1)

    quicksort(arr,0,count-1);                        // T(1)

    printf("\nSorted Order is: ");
    print(arr,count);


    return 0;
}

void print(int arr[],int count)
{
    int i;
    for(i=0; i<count; i++)                    // T(n+1)
    {
        printf(" %d",arr[i]);                 // T(n)
    }

}
void quicksort(int arr[],int first,int last)
{
    int i, j, pivot, temp;               // T(1)
    if(first<last)                       // T(1)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)                        // T(n)
        {
            while(arr[i]<=arr[pivot]&&i<last)  // T(n)
                i++;
            while(arr[j]>arr[pivot])        // T(n)
                j--;
            if(i<j)                          // T(1)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        quicksort(arr,first,j-1);           // T(1)
        quicksort(arr,j+1,last);             // T(1)
    }
}
// 10 4 0 6 8 7 9 1 77 2
