#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1=123456, num2, num3;
    float f1=1.23456f, f2, f3;
    printf("num1%%d的值為:%d \n",num1);
    printf("num1%%2d的值為:%2d \n",num1);
    printf("num1%%8d的值為:%8d \n",num1);
    printf("num1%%08d的值為:%08d \n",num1);
    printf("f1%%f的值為:%f \n",f1);
    printf("f1%%6.4f的值為:%6.4f \n",f1);
    printf("f1%%9.4f的值為:%9.4f \n",f1);
    printf("f1%%.2f的值為:%.2f \n",f1);
// printf:可限制長度與精度;
// %d：按int數據的實際長度?出;
// %md：m為指定的輸出寬度。如果數據的位數小於m，則左端補空格；若大於m，則按實際位數輸出;
// %0md：同上，但?里如果數據的位數小於m，則左端補0；若大於m，則按實際位數輸出;
// %f：整數部分全部輸出，並輸出?位小數;
// %m.nf：輸出共占m列，n位小?，若數值寬度小於m則左端補空格;
// %.nf：整數部分全部輸出，並輸出n位小數;

    printf("輸入一個int值:");
    scanf("%d",&num2);
    printf("輸入的%%d值為:%d \n",num2);
    printf("%%2d的值為:%2d \n",num2);

    printf("輸入一個int值(%%4d):");
    scanf("%3d",&num3);
    printf("輸入%%3d轉%%4d值為:%4d \n",num3);
    printf("%%2d的值為:%2d \n",num3);
    printf("%%d的值為:%d \n",num3);
// 暫存器存了多輸入的值(%3d輸入4位數)
    fflush(stdin);
    printf("輸入一個float值:");
    scanf("%f",&f2);
    printf("輸入的%%f值為:%f \n",f2);
    printf("%%.2f的值為:%.2f \n",f2);

    printf("輸入一個float(%%4.2f)值:");
    scanf("%3.2f",&f3);
    printf("輸入%%3.1f轉%%4.2f值為:%4.2f \n",f3);
    printf("%%.2f的值為:%.1f \n",f3);
    printf("%%f的值為:%ff \n",f3);
// 暫存器存了多輸入的值(%3.1f輸入4.1位數)
    fflush(stdin);
    printf("(再一次)輸入一個float(%%4.2f)值:");
    scanf("%3f",&f3);
    printf("輸入%%3f轉%%4.2f值為:%4.2f \n",f3);
    printf("%%.1f的值為:%.1f \n",f3);
    printf("%%f的值為:%ff \n",f3);
// scanf:可限制長度但不可以限制精度;    
}
