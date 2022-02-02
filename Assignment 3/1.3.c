/*
Course name : CSE1102
Assignment number : 3
Semester : spring 2021
Group : C1
ID : 20210104103
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        x=pow(i,3);
        printf("log%d ",x);
       if(n>i)
            printf(" + ");
    }

    return 0;
}
