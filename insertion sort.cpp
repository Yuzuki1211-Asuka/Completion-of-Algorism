//3.插入排序
//核心思想：像打扑克牌抓牌时整理手牌一样。把数组分成两部分：前面是已排序部分（初始只有第一个元素），后面是未排序部分。每次从未排序部分拿出第一个元素，把它插入到前面已排序部分的正确位置上，保持已排序部分始终有序。
//模板代码：
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for (int i = 1; i <10; i++)//从第二个数开始，视作要插入的牌 
	{
        int key = arr[i];//保存要插入的值 
        int j = i - 1;//从已排序部分的末尾开始比较 
        while (j >= 0 && arr[j] > key)//从后向前比 
		{
            arr[j + 1] = arr[j];//比key大的后移 
            j--;//向前移动 
        }
        arr[j + 1] = key;//插入key 
    }
    for(int i=0;i<10;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
} 
