/*
编写函数，使其能处理字符串中除字母（大小写）、数字外的其他ASCII字符，对连在一起的相同字符，使其缩减至仅保留一个。
（参考函数原型：void del(char* str)）
输入输出格式要求：
	只编写函数，请勿输出其他字符
例如：
str为：aa*++1123.,
调用del函数之后str为：aa*+1123.,
*/
/*

*/

#include<stdio.h>
#include<string.h>
void del(char* str);
void del(char* str)
{
    int n=strlen(str);
    for(int i=1;i<n;i++)
    {
        if('0'-1<str[i]&&str[i]<'9'+1||'a'-1<str[i]&&str[i]<'z'+1||'A'-1<str[i]&&str[i]<'Z'+1)
        continue;
        else if(str[i-1]==str[i])
        {
            for(int j=i;j<n-1;j++)
            {
                str[j]=str[j+1];
            }
            str[n-1]='\0';
            //删除后字符串长度会减少，同时删除后，仍应在i处继续处理
            --n,--i;
        }
    }
}
int main()
{
    char str[]="AABB+++ccdd---1122";
    del(str);
    printf("%s",str);
}
