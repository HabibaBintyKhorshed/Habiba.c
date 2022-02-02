/*
Course name : CSE1102
Assignment number : 3
Semester : spring 2021
Group : C1
ID : 20210104103
*/

#include <stdio.h>

int main()
{
    int n,m,i,j,k;
    printf("Enter a number of rows");
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=m-1;j++)
       {
           printf(" ");
       }
       for(k=1;k<=2*i-1;k++)
       {
           if(k==1 || k==2*i-1 || i==n)
           printf("*");
           else
           printf(" ");
       }
       m--;

      printf("\n");
    }
    return 0;
}
