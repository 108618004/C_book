#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int  ch,num1,num2,large;
    char ch1;
    printf("�п�J�r��:");
    scanf("%c",&ch);
    if ( (65<=ch && ch<=90) || (97<=ch && ch<=122) )
    {
        printf("���r���O�^��:%c \n",ch);
        printf("ASCII�X:%d \n",ch);
    }
    else if(48<=ch<=57)
    {
        printf("���r���O�Ʀr:%c \n",ch);
    }


    system("pause");
    return 0;
}