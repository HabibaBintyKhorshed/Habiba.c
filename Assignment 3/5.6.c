/*
Course name : CSE1102
Assignment number : 3
Semester : spring 2021
Group : C1
ID : 20210104103
*/


#include<stdio.h>
int main()
{int i,j,rows,b,c,space,t;

printf("Enter Rows : ");
scanf("%d",&rows);

if(((rows*2)-1)%2==0) --rows;

b=((((rows*2)-1)+1)/2);
c=((rows*2)-1)-b;

for(i=1;i<=b;i++)
{
    for(space=1;space<=b-i;space++)printf(" ");
          for(j=1;j<=2*i-1;j++){
if(j<=(((2*i-1)+1)/2))
{
    printf("%d",j);
    t=j;
}
else
{
   t--;
printf("%d",t);

}}
    printf("\n");
}
for(i=1;i<=c;i++)
{
    for(space=0;space<=i-1;space++)printf(" ");
          for(j=1;j<=2*c-(2*i-1);j++)
          {
              if(j<=((2*c-(2*i-1))+1)/2)
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

return 0;
}
