//6.桶排序
//核心思想：分布式排序
//步骤：（1）分桶
//      （2）分配
//      （3）桶内排序 
//      （4）合并
//模板代码：
#include <bits/stdc++.h>
using namespace std;

void bucketSort(vector<float>& arr) 
{
    int n = arr.size();
    if (n <= 0) return;
    
    // 1. 计算数据范围
    float max_val = *max_element(arr.begin(), arr.end());
    float min_val = *min_element(arr.begin(), arr.end());
    float range = max_val - min_val;
    
    // 2. 创建桶（数量=元素个数）
    int bucket_count = n;
    vector<vector<float>> buckets(bucket_count);
    
    // 3. 分配元素到桶中（关键映射公式）
    for (int i = 0; i < n; i++) 
	{
        // 计算桶索引：标准化值×桶数量
        float normalized = (arr[i] - min_val) / range;
        int bucket_index = min(int(normalized * bucket_count), bucket_count - 1);
        buckets[bucket_index].push_back(arr[i]);
    }
    
    // 4. 对每个桶排序（这里用内置排序，实际可用任意算法）
    for (auto& bucket : buckets) 
	{
        sort(bucket.begin(), bucket.end());
    }
    
    // 5. 合并桶到原数组
    int index = 0;
    for (const auto& bucket : buckets) 
	{
        for (float num : bucket) 
		{
            arr[index++] = num;
        }
    }
}

// 打印数组
void printArray(const vector<float>& arr) 
{
    for (float num : arr) 
        cout << num << " ";
    cout << endl;
}

int main()
 {
    // 测试数据（0-100之间的浮点数）
    vector<float> arr = {0.42, 0.32, 0.75, 0.12, 0.98, 0.63, 0.27, 0.54};
    
    cout << "原始数组: ";
    printArray(arr);
    
    bucketSort(arr);
    
    cout << "排序后数组: ";
    printArray(arr);
    
    return 0;
}
