#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
system("cls");
printf("Enter the limit of first:");
scanf("%d",&n1);
printf("Enter the limit of second:");
scanf("%d",&n2);
printf("Enter the elements of first array\n");
int i,a[n1],b[n2],c[n1+n2],temp,j;
for(i=0;i<n1;i++)
{
 printf("a[%d]=",i);
 scanf("%d",&a[i]);
}
printf("Enter the elements of second array\n");
for(i=0;i<n2;i++)
{
 printf("b[%d]=",i);
 scanf("%d",&b[i]);
}
n3=n1+n2;
for(i=0;i<n1;i++)
{
c[i]=a[i];
}
for(i=0;i<n2;i++)
{
c[i+n1]=b[i];
}
printf("\nFinal array\n");
printf("[");
for(i=0;i<n3;i++)
{
printf(" %d",c[i]);
}
printf("]");
printf("\nSorted array\n");
for(i=0;i<n3;i++)
{
    for(j=0;j<n3;j++)
    {
    if(c[j]>=c[j+1])
    {
       temp=c[j];
       c[j]=c[j+1];
       c[j+1]=temp;
    }
    }
}
printf("[");
for(i=0;i<n3;i++)
{
printf(" %d",c[i]);
}
printf("]");
getch();
}


