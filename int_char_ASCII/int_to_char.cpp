#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int  ch,num1,num2,large;
    char ch1;
    printf("請輸入字元:");
    scanf("%c",&ch);
    if ( (65<=ch && ch<=90) || (97<=ch && ch<=122) )
    {
        printf("此字元是英文:%c \n",ch);
        printf("ASCII碼:%d \n",ch);
    }
    else if(48<=ch<=57)
    {
        printf("此字元是數字:%c \n",ch);
    }


    system("pause");
    return 0;
}