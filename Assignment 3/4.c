/*
Course name : CSE1102
Assignment number : 3
Semester : spring 2021
Group : C1
ID : 20210104103
*/


#include<stdio.h>
#include<math.h>
int rev(int x);
int main()
{
    int n,a,b,c,d;

   for(n=10;n<=100;n++)    //if n=12
   {
     a=pow(n,2);           //a=144
     b=rev(n);             //b=21
     c=pow(b,2);           //c=441
     d=rev(c);             //d=144
     if(a==d)
        printf("%d\t",n);
   }

    return 0;
}
int rev(int x)
{
    int i,p,q=0;
    for(i=x;i!=0;i=i/10)
    {
        p=i%10;
        q=q*10+p;
    }
    return q;
}
