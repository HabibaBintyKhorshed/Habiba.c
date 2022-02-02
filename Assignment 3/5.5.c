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
    int i,j,rows,k;
    printf("Enter a number of rows : ");
    scanf("%d",&rows);
    //rows=5;
    for(i=1;i<=rows;i++)        // printing increasing triangle
    {
        for(k=1;k<=rows-i;k++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=rows;i++)        //  printing decreasing triangle
    {
        for(k=1;k<=i;k++)
            printf(" ");
        for(j=1;j<=2*(rows-i)-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
