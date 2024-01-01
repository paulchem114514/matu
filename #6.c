/*
实现maxInt方法：
void maxInt(int * array,int n,int * result);
传入数组，数组元素个数，int指针。
将数组中的最大值保存在result中。
保存为maxInt.cpp.
遇到异常情况，输出"error"；否则不要随意输出。
*/
/*
异常情况：指针为空，传入数字是非正数
*/
#include <stdio.h>
void maxInt(int * array,int n,int * result);
void maxInt(int * array,int n,int * result)
{
    if(array==NULL||result==NULL||n<1)
    {
        printf("error");
        return;
    }
    int max=*array;
    for (int i=0;i<n;) 
    {
        max=max>*array?max:*array;
        i++,array++;
    }
    *result=max;
    return;
}
