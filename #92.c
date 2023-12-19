//3.9 2的k次方小于m的k的最大值
/*
编写程序，求满足公式的变量k的最大值：
		2^k <= m
其中，m是程序输入的一个正整数。

2^k表示2的k次方。

输入输出格式要求：
	输入格式：m回车
	程序中要求全部使用unsigned int 类型数据。scanf和printf中使用%u
	只输出运算结果，请不要输出其他字符。
例如：
输入：16回车
输出：4
输入：2140000000回车
输出：30
*/
/* 
这个题目最大的问题在于逆向思维，通常情况下理解是k是变量，m是已知量，
实际上如果我们转换思路，认为变量是m，而k实际上是给定的，即一个区间的m是属于同一个k
2^k到2^（k+1）-1其实都是同一个k,恰巧是这个数字在二进制下的位数，运用位运算即可。
当然也可以用
m/=2;
来替代
m>>=1;
实际上前者更具有普适性
*/
#include<stdio.h>
int main()
{
	unsigned int m,k=0;
	scanf("%u",&m);
  //改为while(m>0)平均耗费的时间会更少，原因：测试数据很大声while(m)判断很慢
	while(m)
	{
		k++;
		m>>=1;
	}
	printf("%u",k-1);
	return 0;
}

/*其他解法
#include<stdio.h>
#include<math.h>
int main(void){
	unsigned int m;
	scanf("%u",&m);
	int a=0;
	while ( pow(float(2),float(a)) <=m){
		a+=1;
	}
	printf("%u",a-1);
	return 0;
}
*/
