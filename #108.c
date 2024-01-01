/*
输入一个字符串，要求按相反的顺序输出各个字符。例如，输入为AbcD，则输出为DcbA。
提示：这个题与习题4.1类似，但需注意的是：
存储要输入的字符串的字符数组的长度要足够大；如果输入字符串过长，对应存储的字符数组是否会越界。可以考虑实现变长数组。
输入输出格式要求：
	输入格式：string回车
	输出格式：gnirts
例如：
输入：hello回车
输出：olleh
*/
/*

*/
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
void getprint();
int main()
{
    getprint();
}
void getprint()
{
    char c;
    if((c=getchar())!='\n')
    {
        getprint();
        printf("%c",c);
    }
}
