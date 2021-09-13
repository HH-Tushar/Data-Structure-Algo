/*
  Hasibul Hasan Tushar
  ID-1935202509
  batch-52(CSE-DAY)
*/
#include <stdio.h>
#include <limits.h>
#define MAX 100
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void printArray(int A[], int size);
int surch(int arr[],int size,int key);
int next_max(int arr[],int size,int find,int key);
int min(int arr[],int size);

int main()
{
    int arr[MAX],i,arr_size,key;
    printf("Enter array size : ");
    scanf("%d",&arr_size);
    printf("Enter %d variable for array \n",arr_size);
    for(i=0; i<arr_size; i++)
    {
        scanf("%d",&arr[i]);
    }


    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);

    printf("\n");
    printf("Enter the key :");
    scanf("%d",&key);

    surch(arr,arr_size,key);

    return 0;
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}



void merge(int arr[], int l, int m, int r) //T(1)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[10], R[10];

    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}






//new added
int surch(int arr[],int size,int key)
{
    int i,flag=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }

    }
    printf("\n");

    if(flag==1)
    {
        printf("Key fount ");
        next_max(arr,size,i,key);
    }


    else
    {
        printf("key not found ! \n");
        min(arr,size);
    }

}

int min(int arr[],int size)
{
    int i,flag=0;
    int temp=INT_MAX;
    for(i=0; i<size; i++)
    {
        if(arr[i]<temp && arr[i]%8==0)
        {
            temp=arr[i];
            flag=1;

        }
    }

    if(flag==0)
    {
        printf("\n The lowest element from the list is not satisfying the cases");
    }
    else
    {
        printf("\n Smallest number is = %d ",temp);
    }
}


int next_max(int arr[],int size,int find,int key)
{
    int i,temp=INT_MAX,flag=0;
    for(i=find; i<size; i++)
    {

        if(arr[i]>key && arr[i]%2!=0 && arr[i]%5==0 && arr[i]<temp)
        {
            temp=arr[i];
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("\n Next greater element not found");
    }
    else
    {
        printf("\nNext max =%d ",temp);
    }
}

/*
7
9
2
6
4
25
3
16
*/
