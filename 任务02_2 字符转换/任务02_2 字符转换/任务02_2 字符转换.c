/**
 *说明：任务02_2 字符转换
 *姓名：付娆
 *学号：2016011558
 *班级：5班
 *日期：2017/03/18
 */
#include <stdio.h>
int main(void)
{
    char a;
    char b;
    char c;
    printf("请输入三个小写字母:");
    scanf("%c %c %c",&a,&b,&c);
    printf("所输入字母的ascll码为:%d %d %d\n",a,b,c);
    printf("所输入字母的大写形式为:%c %c %c",a-32,b-32,c-32);
    return 0;
}