/*
Course name : CSE1102
Assignment number : 3
Semester : spring 2021
Group : C1
ID : 20210104103
*/s

#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>=1)
    {
        if(n!=1)
        printf("(1/1!) + ");
        else printf("(1/1!)");
    }

    for(i=2,j=3;i<=n,j<=n+1;i++,j++)
      {
        printf("(%d/%d!)",i,j);
        if(i<n)
            printf(" + ");
      }
    return 0;
}
