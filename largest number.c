#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3;
scanf("%d%d%d",&s1,&s2,&s3);
if(s1>s2&&s1>s3)
{
printf("biggest value=%d",s1);
}
elseif(s2>s1&&s2>s3)
{
printf("biggest value=%d",s2);
}
else
{
printf("biggest value=%d",s3);
}
getch();
}


