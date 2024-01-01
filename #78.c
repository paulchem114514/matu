/*
题目描述：
编写程序，实现求集合（浮点数）的中位数的功能。中位数指n个数排序后，（1+n）/2位置处的元素。n为偶数时，中位数取n/2位置处元素。
输入格式：依次为元素个数n和元素序列。
输出格式：输出中位数(输出精度保持0位小数）。
注意：1、输入n错误时，输出ERROR（大写）并结束程序2、任意多余输出视为错误。
例如输入
4回车
4空格3空格2空格1回车
正确输出：
2
*/
/*
n错误
1.n不是数字
2.n为零或者负数
*/
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
void sort(int *p,int n);
int main()
{
    int n;
    if(scanf("%d",&n)!=1||n<1)
    {
        printf("ERROR");
        return 0;
    }
    
    int *p=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    sort(p,n);
    if(n%2)
    {
        n++;
    }
    n=n/2-1;
    printf("%d",p[n]);
    return 0;
}
void sort(int *p,int n)
{
    int temp;
    for(int i=n-1;i>-1;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}
