/**
 *˵��������01_1��C�����ʺ�
 *���������
 *ѧ�ţ�2016011558
 *�༶��5��
 *���ڣ�2017/03/03
 */
#include <stdio.h>
int main(void)
{
    float h;
    float r;
    printf ("Բ�����Բ�뾶Ϊ:");
    scanf("%f",&r);
    printf("Բ����߶�Ϊ:");
    scanf("%f",&h);
    printf("Բ��������Ϊ:%.2f\n",3.14*r*r*2+2*3.14*r*h);
    printf("Բ�������Ϊ:%.2f",3.14*r*r*h);
    return 0;
}