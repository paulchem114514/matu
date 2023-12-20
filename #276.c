/*
韩信点兵：
韩信有一队兵，他想知道有多少人，便让士兵排队报数。按从1至m1报数，最末一个士兵报的数为x1；按从1至m2报数，最末一个士兵报的数为x2；按从1至m3报数，最末一个士兵报的数为x3；……,按从1至mn报数，最末一个士兵报的数为xn。
请输出最少的人数。
输入：第一行为n
      第二行到第n+1行依次为本次报数的数量和最后1个士兵报的数
输出：满足条件的最少人数。
输入非法数据时输出error
例如：输入：
4
5 1
6 5
7 4
11 10
输出：2111
*/
/*
错误情况
1.行数是非数字 
2.行数为非正数 
*/
/*这个题本身是一个数论问题， n=k*mi+xi;
最终的所有答案一定是可以写为
k*(m1*m2*...*mn)+w(n)，题目要求输出的就是w(n),
可以用递归的思想得到
w(n)=w(n-1)+k*m1*m2*...m(n-1)
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	if(scanf("%d",&n)!=1||n<1)
	{
		printf("error");
		return 0; 
	}
		//记得free p[i] p 
		int **p=(int **)malloc(n*sizeof(int *));
		for(int i=0;i<n;i++)
		{
			p[i]=(int *)malloc(sizeof(int)*2);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&p[i][0],&p[i][1]);
		}
		int k=p[0][1];
		int multiple=p[0][0];
		for(int i=1;i<n;i++)
		{
			while(k%p[i][0]!=p[i][1])
			{
				k+=multiple;
			}
			multiple*=p[i][0];
		}
		printf("%d",k);
		for(int i=0;i<n;i++)
		{
			free(p[i]);
		}
		free(p);
	return 0;
}
*/
/*
运用二维数组，对地址的访问过于频繁，如果我们不申请动态内存创建二维数组，程序运行速度会更快 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	if(scanf("%d",&n)!=1||n<1)
	{
		printf("error");
		return 0; 
	}
	int a,b; 
	scanf("%d %d",&a,&b);
	int k=b;
	int multiple=a;
	if(n>1)
	{
		scanf("%d %d",&a,&b);
	}
	for(int i=1;i<n-1;i++)
	{
		while(k%a!=b)
		{
			k+=multiple;
			
		}
		multiple*=a;
		scanf("%d %d",&a,&b);
	}
	while(k%a!=b)
	{
		k+=multiple;		
	}
	printf("%d",k);
	return 0;
}


