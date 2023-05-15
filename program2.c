#include<stdio.h>


void Display(int iNo1)
{
int iCnt=0;






if(iNo1<=0)
{


    iNo1=-iNo1;
}



for(iCnt=1;iCnt<=iNo1;iCnt++)
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