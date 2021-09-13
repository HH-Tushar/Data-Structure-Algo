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
    int i, count, arr[MAX];
    printf("Enter elements Number (Max 20): ");
    scanf("%d",&count);

    printf("Enter elements: \n");
    for(i=0; i<count; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Giver array is : ");
    print(arr,count);

    quicksort(arr,0,count-1);

    printf("\nSorted Order is: ");
    print(arr,count);


    return 0;
}

void print(int arr[],int count)
{
    int i;
    for(i=0; i<count; i++)
    {
        printf(" %d",arr[i]);
    }

}

void quicksort(int arr[25],int first,int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(arr[i]>=arr[pivot]&&i<last)
                i++;
            while(arr[j]<arr[pivot])
                j--;
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);
    }
}
