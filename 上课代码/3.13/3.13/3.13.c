///*
//计算圆柱体的面积和体积
//显示效果为下：
//           请输入圆柱体的半径：
//           请输入圆柱体的高：
//           圆柱体的面积为：
//           圆柱体的体积为：
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
//    printf("请输入圆柱体的半径:");
//    scanf("%f",&r);
//    printf("请输入圆柱体的高：");
//    scanf("%f",&h);
//    s=r*r*pi*2+2*pi*r*h;
//    printf("圆柱体的表面积为:%.2f\n",s);
//    v=pi*r*r*h;
//    printf("圆柱体的体积为:%.2f\n",v);
//}
/*
输入一个长度为5 的英文单词并且为小写
输出该英文单词的大写形式
*/
#include <stdio.h>
int main(void)
{
    
    char a;
    char b;
    char c;
    char d;
    char e;
    
    printf("请输入一个长度为5的英文单词：");
    scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);
    printf("您所输入的英文单词的大写形式为：%c%c%c%c%c",a-32,b-32,c-32,d-32,e-32);
//scanf中不能有精度说明符
    


}
