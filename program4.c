#include<stdio.h>
void OddDisplay(int iNo1)
{ int i=0;
  for(i=1; i<=iNo1; i=i+2)
    {
        printf("%d\n", i);
    }

}

















int main()
{
int iValue=0;
printf("enter number:\n");
scanf("%d",&iValue);
OddDisplay(iValue);

    return 0;
}