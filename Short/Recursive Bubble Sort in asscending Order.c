
#include<stdio.h>
void BubbleSortRecursion(int a[],int num);
main()
{
int i,j,num,temp;
int a[10];
printf("Enter number of elements\n");
scanf("%d",&num);

printf("Enter numbers\n");
for(i=0;i<num;i++)
{
 scanf("%d",&a[i]);
}
BubbleSortRecursion(a,num);
printf("Given numbers in Ascending order \n");
for(i=0;i<num;i++)
{
 printf("%d\n",a[i]);
}
}
void BubbleSortRecursion(int a[],int num)
{
 int i,j,temp;
 i=num;
if(i>0)
  {
       for(j=0;j<num-1;j++)
       {
         if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
      }
  BubbleSortRecursion(a,num-1);
  }
else
  {
       return;
   }
}
