#include<stdio.h>
void print(int a[],int size);
int insertion_short(int a[],int size);
int main ()
{
    int size;
    int array[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    size=10;

    printf("printing sorted elements : \n");

    insertion_short(array,size);

    return 0;
}
int insertion_short(int a[],int size)
{
    int i,j,temp;
    for(i=1; i<size; i++)
    {
        temp = a[i];
        j= i-1;
        while(j>=0 && temp >= a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }

    print(a,size);
}
void print(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("  %d ",a[i]);
    }

}

