#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int bottom,top,mid,n;
void bubble_sort(int a[]);
int binary_search(int a[], int key);
void main()
{
int i,a[50],key;
int res;
double clk;
clock_t starttime,endtime;
printf("Enter the number of products\n");
scanf("%d",&n);
for(i=0;i<n;i++)
a[i]=rand()%100000;
printf("\nThe Product IDs are: \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
bubble_sort(a);
printf("\n\nSorted Product IDs are: \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n\nEnter the ISBN to be searched: \n");
scanf("%d",&key);starttime=clock();
res= binary_search(a,key);
endtime=clock();
if (res !=0)
{
printf("\nProduct found!!\n");
printf("\n\n Product ID %d found in position: %d\n", key, res+ 1);
}
else
printf("\n Out of stock\nproduct ID %d not found\n", key);
clk=(double)(endtime-starttime)/CLOCKS_PER_SEC;
printf("\nTime taken for searching %f seconds\n",clk);
}
int binary_search(int a[], int key)
{
bottom = 0;
top = n-1;
while (key != a[mid] && bottom <= top)
{
mid = (bottom + top) / 2;
if (key < a[mid])
top = mid - 1;
else if (key > a[mid])
bottom = mid + 1;
}
if(key == a[mid])
return mid;
else
return 0;
}
void bubble_sort(int a[])
{
int i,j,temp;
for(i=0;i<n;i++)

for(j=0;j<n-i-1;j++)

if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;

}

}
