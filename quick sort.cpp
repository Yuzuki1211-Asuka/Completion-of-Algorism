//4.快速排序
//核心步骤：（1）选择一个基准值，这里选a[mid]
//          （2）将数组划分为[元素<=mid]+[mid]+[元素>=mid]
//          （3） 递归排序子数组
//          （4）基线条件：low>high时stop！
//标准代码：
inline void qsort(int l,int r)
{
    int mid=a[(l+r)/2];
    int i=l,j=r;
    do
    {
        while(a[i]<mid) ++i;//确认左侧有没有比“基准”大的 
        while(a[j]>mid) --j;//确认右侧有没有比“基准”小的 
        if(i<=j)//if真有 
        {
            swap(a[i],a[j]);//交换 
            ++i,--j;//继续确认 
        }
    }while(i<=j);//确认完成 
    if(l<j) qsort(l,j);//对左侧进行一样的排序 
    if(i<r) qsort(i,r);//对右侧也是有一点排序 
} 
