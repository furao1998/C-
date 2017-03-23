#include <stdio.h>
int main(void)
{
    char a;
    printf("请输入一个英文字母：");
    scanf("%c\n",&a);
    printf("%c",a>96?a-=32:a+=32);

}//需要输入两次字母才能执行（原因应将+换为+=-换为-=）
//#include <stdio.h>
//int main(void)
//{
//    char c;
//    printf("请输入一个英文字母：");
//    scanf("%c",&c);
//    (c<'a')?(c+=32):(c-=32);
//    printf("%c",c);
//}//老师的代码
#include <stdio.h>
int main(void)
{
    char a;
    printf("请输入一个英文字母：");
    scanf("%c\n",&a);
    printf("%c",a>96?a-32:a+32);

}