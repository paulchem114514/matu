
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int find(int director, int j);
int prime(int a,int b);
int main()
{
    int s[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s[i]);
    }
    for(int i=1;i<5;i++)
    {
        s[0]=find(s[0],s[i]);
    }
    printf("%d",s[0]);
    return 0;
}
int prime(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    return prime(b,a%b);
}
int find(int director, int j)
{
    return director*j/prime(director, j);
}
