//1_mystrcpy
/*
题目： 
实现字符串的拷贝。
void my_strcpy(char * destination,char * source);
将source指向的字符串拷贝到destination指向的位置。
注意：使用空格字符来表示字符串的结束。
例如source指向位置，依次保存了字符'a'，字符'b'，字符空格' '，字符'c'，则source指向的字符串为"ab"。
遇到异常情况，输出"error"；否则不要随意输出，会视为错误。
提醒：
(1)	拷贝结束后，source的字符串不能被修改；destination字符串只有source第一个空格之前的串被替换，
其余的字符都不能被修改。
比如source: ab xy z; destination: tkf m。则拷贝结束后，source不变，destination：ab  m(ab和m之间是2个空格)
(2)	字符串虽然是’\0’作为结束符，本题的字符串是一定会包含空格的。本题是通过空格作为字符串拷贝的结束标记。
*/
/*
这个题目的字符串都是用空格作为结尾目的是不让我们使用 <string.h>里面的函数，
即要求我们自己写计算长度（计算两个指针地址是否太近而会影响到字符串的拷贝）和字符串拷贝的函数 
错误的可能性：
1.指针为空指针
2. 指针地址是否太近而会影响到字符串的拷贝
*****
注意在结尾要加上' '作为新指针的结尾 
*/
#include<stdio.h>
#include<math.h>
void my_strcpy(char * destination,char * source);
int my_length(char * s);
int my_length(char * s)
{
	int n=0;
	while(*s!=' ')
	{
		n++,s++;
	}
	return n;
}
void my_strcpy(char * destination,char * source)
{
	if(destination==NULL||source==NULL)
	{
		printf("error");	
	}
	else
	{
		int d=my_length(source);
		if(abs(destination-source)<d)
		{
			printf("error");
		}
		else
		{
			while(*source!=' ')
			{
				*destination=*source;
				source++,destination++;
			}
			*destination=' ';
		}
	}
	return ;	
} 
