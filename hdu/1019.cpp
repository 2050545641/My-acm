////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: ���
////Run ID: 
////Submit time: 2016-01-27 18:20:54
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1019
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1404KB
//////////////////System Comment End//////////////////
#include<stdio.h>
int gcd(int m,int n)//�������������Լ��
{
	int r;
	while((r=m%n)!=0)
	{
		m=n;
		n=r;
	}
	return n;
}
int main()
{
	int n;
	while(scanf("%d",&n)==1)
	{
		int i,j;
		for(i=1;i<=n;i++)
		{
			int a,b;
			scanf("%d%d",&a,&b);//���뿪ͷ�ĸ����͵�һ����
			for(j=1;j<a;j++)
			{
				int c;//����ÿ����
				scanf("%d",&c);
				b=b/gcd(b,c)*c;//��������������С�������������ĳ˻�/�����������Լ��
			}
			printf("%d\n",b);
		}
	}
	return 0;
}