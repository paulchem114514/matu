//2_实现指定函数swap
/*
实现swap方法：
void swap(int * array,int n);
传入数组和数组元素个数。
函数内部将数组的第一个元素和最后一个元素的值进行交换。
保存为swap.cpp。
遇到异常情况，输出"error"；否则不要随意输出将视为错误。
*/
#include<stdio.h>
void swap(int * array,int n);
void swap(int * array,int n)
{
	//异常情况包括指针为空，n数量不是正数
	if(array==NULL||n<1)
	{
		printf("error");
	}
	else
	{
	 	int temp=*array;
		//n-1 个偏移量 就是第n个元素 
	 	*array=*(array+n-1);
	 	*(array+n-1)=temp; 
	}
	
}
