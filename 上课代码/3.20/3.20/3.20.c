#include <stdio.h>
int main(void)
{
    char a;
    printf("������һ��Ӣ����ĸ��");
    scanf("%c\n",&a);
    printf("%c",a>96?a-=32:a+=32);

}//��Ҫ����������ĸ����ִ�У�ԭ��Ӧ��+��Ϊ+=-��Ϊ-=��
//#include <stdio.h>
//int main(void)
//{
//    char c;
//    printf("������һ��Ӣ����ĸ��");
//    scanf("%c",&c);
//    (c<'a')?(c+=32):(c-=32);
//    printf("%c",c);
//}//��ʦ�Ĵ���
#include <stdio.h>
int main(void)
{
    char a;
    printf("������һ��Ӣ����ĸ��");
    scanf("%c\n",&a);
    printf("%c",a>96?a-32:a+32);

}