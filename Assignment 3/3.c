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
    int a,x,y=1,z=0,n,i;

   for(n=1;n<=1000000;n++)
   {
        for(a=n ;a!=0;a=a/10)
        {
            x=a%10;
            for(i=1;i<=x;i++)
                y=y*i;
            z=z+y;
            y=1;
        }
        if(z==n)
            printf("%d\t",n);
        z=0;
    }

    return 0;
}
