#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i , count1=0, count2=0;
    float f1 = 1.25f, f2 = 1.75f, f3;
    char ch, ch1;
    
    for ( i =1 ; i <=10000; i++)
    {
        if (rand()%6+1==3)
        {
            ++count1;
            count2++;
        }
    }
    printf("總共骰到%d次3 \n",count1);
    printf("機率是%f \n",(float)count1/10000);
    

    system("pause");
    return 0;
}