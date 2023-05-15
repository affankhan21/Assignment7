#include<stdio.h>


void Display(int iNo1)
{
int iCnt=0;









for(iCnt=-iNo1;iCnt<=iNo1;iCnt++)
{



    printf(" %d",iCnt);
}






}







int main()
{
int iValue=0;
printf("enter number:\n");
scanf("%d",&iValue);
Display(iValue);

    return 0;
}