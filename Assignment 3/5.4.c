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
    int n,j,t,i;
    printf("Enter a number of rows :");
    scanf("%d",&n);
    if(n%2==0)
        n++;
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            {
                if(j<=(n+1)/2)
                {
                    printf("%d",j);
                    t=j;
                }
                else
                {
                    t--;
                    printf("%d",t);
                }
            }
            printf("\n");
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                    printf("1");
                else printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
