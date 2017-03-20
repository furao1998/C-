/**
 *说明：任务01_1向C语言问好
 *姓名：付娆
 *学号：2016011558
 *班级：5班
 *日期：2017/03/03
 */
#include <stdio.h>
int main(void)
{
    float h;
    float r;
    printf ("圆柱体底圆半径为:");
    scanf("%f",&r);
    printf("圆柱体高度为:");
    scanf("%f",&h);
    printf("圆柱体表面积为:%.2f\n",3.14*r*r*2+2*3.14*r*h);
    printf("圆柱体体积为:%.2f",3.14*r*r*h);
    return 0;
}