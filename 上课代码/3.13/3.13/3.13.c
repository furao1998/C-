///*
//����Բ�������������
//��ʾЧ��Ϊ�£�
//           ������Բ����İ뾶��
//           ������Բ����ĸߣ�
//           Բ��������Ϊ��
//           Բ��������Ϊ��
//*/
//#include <stdio.h>
//int main(void)
//{
//    float r;
//    float h;
//    float s;
//    float v;
//    const double pi=3.14;
//
//    printf("������Բ����İ뾶:");
//    scanf("%f",&r);
//    printf("������Բ����ĸߣ�");
//    scanf("%f",&h);
//    s=r*r*pi*2+2*pi*r*h;
//    printf("Բ����ı����Ϊ:%.2f\n",s);
//    v=pi*r*r*h;
//    printf("Բ��������Ϊ:%.2f\n",v);
//}
/*
����һ������Ϊ5 ��Ӣ�ĵ��ʲ���ΪСд
�����Ӣ�ĵ��ʵĴ�д��ʽ
*/
#include <stdio.h>
int main(void)
{
    
    char a;
    char b;
    char c;
    char d;
    char e;
    
    printf("������һ������Ϊ5��Ӣ�ĵ��ʣ�");
    scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);
    printf("���������Ӣ�ĵ��ʵĴ�д��ʽΪ��%c%c%c%c%c",a-32,b-32,c-32,d-32,e-32);
//scanf�в����о���˵����
    


}
