//1.选择排序
// 思想： 每次都从一堆没排序的数里挑出最小的（或最大的），放到已排序区的最后面（最开始已排序区是空的）
//标准代码：
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<9;i++)
	{
		int min=i;//min会用来记录未排序部分最小值的索引 
		for(int j=i+1;j<10;j++)//在未排序部分继续找最小的 
		{
			if(a[j]<a[min])
			{
				min=j;//遍历到之后更新索引 
			}
		}
		swap(a[i],a[min]);//交换，使最小值到末位 
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
} 
