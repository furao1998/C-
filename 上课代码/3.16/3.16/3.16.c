///*
//�򵥵����������û��������������ֱ�����Ӽ��˳�ȡ��
//*/
//#include <stdio.h>
//int main(void)
//{
//    int a;
//    int b;
//    int c,d,e,f,g;
//    printf("�������һ������a= " );
//    scanf ("%d",&a);
//    printf("�������һ������b= " );
//    scanf ("%d",&b);
//
//    c=a+b;
//    d=a-b;
//    e=a*b;
//    f=a/b;
//    g=a%b;
//    printf ("%d%d%d%d%d",c,d,e,f,g);
//    return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//    int num1,num2;
//    printf("������������������");
//    scanf("%d%d",&num1,&num2);                //3/2*1.0=1.0
//    printf("�ӷ���%d\n",num1+num2);           //1.0*3/2=1.5
//    printf("����:%d\n",num1-num2);
//    printf("�˳���%d\n",num1*num2);
//    printf("������%.2lf\n",1.0*num1/num2);//3/2ʱӦΪ1��Ϊ��
//    printf("ȡ�ࣺ%d\n",num1%num2);
//}//��������ʱ�Ҳ���������Ϊ��
////ȡ������ʱ�Ҳ���������Ϊ��
//�����Ϊ��ʱ������ȡ���Ϊ��
//ȡ�������е��������� �����������������
//#include <stdio.h>
//int main(void)
//{
//    int i=1;
//    printf("%d\n",++i);
//    printf("%d\n",i);
//
//}
//#include <stdio.h>
//int main(void)
//{
//    int i=1;
//    printf("%d\n",5*++i);
//    printf("%d\n",i);
//
//}
//#include <stdio.h>
//int main(void)
//{
//    int i=1;
//    printf("%d\n",i++);
//    printf("%d\n",i);
//
//}//���Ϊ1
   //      2
//#include <stdio.h>
//int main(void)
//{
//    int i=1;
//    printf("%d\n",i++ + ++i);//=i+ ++i�� i=i+1
//    printf("%d\n",i);
//
//}//4��1+2+1��i++�ڱ��ʽ�������ټ�1����
 //3
#include <stdio.h>
int main(void)
{
    int i=1;
    printf("%d\n",++i+ ++i);//6
    
    printf("%d\n",i);//3

} //printf("%d\n",i+++ i++);
     // printf("%d\n",i++ + ++i+i);