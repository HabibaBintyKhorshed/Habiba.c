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
    int a,x=1,y,z=0,n;
    scanf("%d",&n);
    for(a=n ;a!=0;a=a/10)
    {

        x=a%10;
        y=pow(x,3);
        z=z+y;

    }
    if(z==n)
        printf("%d is an Armstrong Number",n);
    else printf("%d is Not an Armstrong Number",n);

    return 0;
}
