/**
 *˵��������02_2 �ַ�ת��
 *���������
 *ѧ�ţ�2016011558
 *�༶��5��
 *���ڣ�2017/03/18
 */
#include <stdio.h>
int main(void)
{
    char a;
    char b;
    char c;
    printf("����������Сд��ĸ:");
    scanf("%c %c %c",&a,&b,&c);
    printf("��������ĸ��ascll��Ϊ:%d %d %d\n",a,b,c);
    printf("��������ĸ�Ĵ�д��ʽΪ:%c %c %c",a-32,b-32,c-32);
    return 0;
}