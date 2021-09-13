
/*Hasibul Hasan Tushar
ID-1935202509
*/

#include<stdio.h>
#define MAX 10
void BubbleSortRecursion(int a[],int size);
main()
{
    int i,size;
    int a[MAX];
    printf("Enter size of ARRAY [1 - 10]:\n");
    scanf("%d",&size);
    printf("Enter Element\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

    BubbleSortRecursion(a,size);

    printf("Given Element in descending order \n");
    for(i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}


void BubbleSortRecursion(int a[],int size)
{
    int j,temp;
    if(size>0)
    {
        for(j=0; j<size-1; j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        BubbleSortRecursion(a,size-1);
    }
    else
    {
        return;
    }
}
