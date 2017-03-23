#include <stdio.h>
int main(void)
{
    char a;
    int b,c,d,e,f,g,h,i;
    printf("请输入一个英文字母");
    scanf("%c",&a);
    b=a%2;
    c=a/2%2;
    d=c/2%2;
    e=d/2%2;
    f=e/2%2;
    g=f/2%2;
    h=g/2%2;
    i=h/2%2;


    printf("所输入的字母的二进制为%d%d%d%d%d%d%d",b,c,e,f,g,h,i);
   
}


//
//printf("%d",(a>>7)%2);
//printf("%d",(a>>6)%2);
//printf("%d",(a>>5)%2);
//printf("%d",(a>>4)%2);
//printf("%d",(a>>3)%2);
//printf("%d",(a>>2)%2);
//printf("%d",(a>>1)%2);

//
//printf("%d",(a/64)2);
//printf("%d",(a/32)%2);
//printf("%d",(a/16)%2);
//printf("%d",(a/8)%2);
//printf("%d",(a/4)%2);
//printf("%d",(a/2)%2);
//printf("%d",(a)%2);




//
//printf("%d",(c&(1<<7))!=0);
//printf("%d",(c&(1<<6))!=0);
//printf("%d",(c&(1<<5))!=0);
//printf("%d",(c&(1<<4))!=0);
//printf("%d",(c&(1<<3))!=0);
//printf("%d",(c&(1<<2))!=0);
//printf("%d",(c&(1<<1))!=0);

