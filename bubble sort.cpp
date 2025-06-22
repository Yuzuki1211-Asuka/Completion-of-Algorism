//2.冒泡排序
//核心思想：像水里的气泡一样，轻的（小的）往上浮，重的（大的）往下沉。通过不断比较相邻的两个元素，如果顺序不对就交换它们。
//模板代码：（苯人期中考试的时候灵机一动凑出来的，没想到能用自己也习惯了。orz）
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<10;i++)//计数器，总计会换10次 
	{
		for(int j=0;j<9;j++)//从第一个开始遍历 
		{
			for(int k=j+1;k<10;k++)
			{
				if(a[j]>a[k])
				{
					swap(a[j],a[k]);//发现前一个比后一个大，让大的往后面漂 
				}
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}
