#include<stdio.h>
int addDigits(int number)
{
    while(number>9)
    {
        int sum=0;
        while(number>0)
        {
            sum+=number%10;
            number/=10;
        }
        number=sum;
    }
    return number;
}
int main()
{
    int number;
    scanf("%d",&number);
    int result=addDigits(number);
    printf("%d",result);
    return 0;
}