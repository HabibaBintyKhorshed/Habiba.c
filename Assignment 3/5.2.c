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
    int i,j,k,row,t;
    printf("Enter a number of rows :");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {

        for(j=1;j<=(row-i);j++)
            printf(" ");
        for(k=1;k<=(2*i-1);k++)
        {

            if(k<=(((2*i-1)+1)/2))
            {
                printf("%d",k);
                t=k;
            }
            else
            {
                t--;
                printf("%d",t);

            }
        }

        printf("\n");
    }
return 0;
}
