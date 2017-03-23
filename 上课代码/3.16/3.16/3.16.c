///*
//简单的运算器由用户输入两个整数分别输出加减乘除取余
//*/
//#include <stdio.h>
//int main(void)
//{
//    int a;
//    int b;
//    int c,d,e,f,g;
//    printf("请输入第一个整数a= " );
//    scanf ("%d",&a);
//    printf("请输入第一个整数b= " );
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
//    printf("请您输入两个整数：");
//    scanf("%d%d",&num1,&num2);                //3/2*1.0=1.0
//    printf("加法：%d\n",num1+num2);           //1.0*3/2=1.5
//    printf("减法:%d\n",num1-num2);
//    printf("乘除：%d\n",num1*num2);
//    printf("除法：%.2lf\n",1.0*num1/num2);//3/2时应为1因为在
//    printf("取余：%d\n",num1%num2);
//}//除法运算时右操作数不能为零
////取余运算时右操作数不能为零
//左操作为零时除法和取余均为零
//取余运算中的正负是由 他的左操作数决定的
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
//}//结果为1
   //      2
//#include <stdio.h>
//int main(void)
//{
//    int i=1;
//    printf("%d\n",i++ + ++i);//=i+ ++i； i=i+1
//    printf("%d\n",i);
//
//}//4（1+2+1（i++在表达式结束后再加1））
 //3
#include <stdio.h>
int main(void)
{
    int i=1;
    printf("%d\n",++i+ ++i);//6
    
    printf("%d\n",i);//3

} //printf("%d\n",i+++ i++);
     // printf("%d\n",i++ + ++i+i);