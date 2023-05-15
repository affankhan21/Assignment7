#include<stdio.h>


void Pattern(int iNo1)
{
int iCnt=0;






if(iNo1<=0)
{


    iNo1=-iNo1;
}



for(iCnt=1;iCnt<=iNo1;iCnt++)
{



    printf(" $  #  *");
}






}







int main()
{
int iValue=0;
printf("enter number to print:\n");
scanf("%d",&iValue);
Pattern(iValue);

    return 0;
}