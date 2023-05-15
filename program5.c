#include<stdio.h>
void MultipleDisplay(int iNo1)
{ int i=0;
  for(i=1; i<=5; i++)
    {
        printf("%d\n", iNo1*i);
    }

}

















int main()
{
int iValue=0;
printf("enter number:\n");
scanf("%d",&iValue);
MultipleDisplay(iValue);

    return 0;
}