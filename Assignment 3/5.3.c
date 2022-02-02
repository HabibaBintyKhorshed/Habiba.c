/*
Course name : CSE1102
Assignment number : 3
Semester : spring 2021
Group : C1
ID : 20210104103
*/


#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n || j==n)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
