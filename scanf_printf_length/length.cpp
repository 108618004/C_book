#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1=123456, num2, num3;
    float f1=1.23456f, f2, f3;
    printf("num1%%d���Ȭ�:%d \n",num1);
    printf("num1%%2d���Ȭ�:%2d \n",num1);
    printf("num1%%8d���Ȭ�:%8d \n",num1);
    printf("num1%%08d���Ȭ�:%08d \n",num1);
    printf("f1%%f���Ȭ�:%f \n",f1);
    printf("f1%%6.4f���Ȭ�:%6.4f \n",f1);
    printf("f1%%9.4f���Ȭ�:%9.4f \n",f1);
    printf("f1%%.2f���Ȭ�:%.2f \n",f1);
// printf:�i������׻P���;
// %d�G��int�ƾڪ���ڪ���?�X;
// %md�Gm�����w����X�e�סC�p�G�ƾڪ���Ƥp��m�A�h���ݸɪŮ�F�Y�j��m�A�h����ڦ�ƿ�X;
// %0md�G�P�W�A��?���p�G�ƾڪ���Ƥp��m�A�h���ݸ�0�F�Y�j��m�A�h����ڦ�ƿ�X;
// %f�G��Ƴ���������X�A�ÿ�X?��p��;
// %m.nf�G��X�@�em�C�An��p?�A�Y�ƭȼe�פp��m�h���ݸɪŮ�;
// %.nf�G��Ƴ���������X�A�ÿ�Xn��p��;

    printf("��J�@��int��:");
    scanf("%d",&num2);
    printf("��J��%%d�Ȭ�:%d \n",num2);
    printf("%%2d���Ȭ�:%2d \n",num2);

    printf("��J�@��int��(%%4d):");
    scanf("%3d",&num3);
    printf("��J%%3d��%%4d�Ȭ�:%4d \n",num3);
    printf("%%2d���Ȭ�:%2d \n",num3);
    printf("%%d���Ȭ�:%d \n",num3);
// �Ȧs���s�F�h��J����(%3d��J4���)
    fflush(stdin);
    printf("��J�@��float��:");
    scanf("%f",&f2);
    printf("��J��%%f�Ȭ�:%f \n",f2);
    printf("%%.2f���Ȭ�:%.2f \n",f2);

    printf("��J�@��float(%%4.2f)��:");
    scanf("%3.2f",&f3);
    printf("��J%%3.1f��%%4.2f�Ȭ�:%4.2f \n",f3);
    printf("%%.2f���Ȭ�:%.1f \n",f3);
    printf("%%f���Ȭ�:%ff \n",f3);
// �Ȧs���s�F�h��J����(%3.1f��J4.1���)
    fflush(stdin);
    printf("(�A�@��)��J�@��float(%%4.2f)��:");
    scanf("%3f",&f3);
    printf("��J%%3f��%%4.2f�Ȭ�:%4.2f \n",f3);
    printf("%%.1f���Ȭ�:%.1f \n",f3);
    printf("%%f���Ȭ�:%ff \n",f3);
// scanf:�i������צ����i�H������;    
}
