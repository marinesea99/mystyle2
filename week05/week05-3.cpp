#include <stdio.h>
#include <stdlib.h>///qsort()
int comp(const void *p1,const void *p2)
{
    int a=*(int*)p1, b=*(int*)p2;
    if( a>b ) return 1;///三種狀況
    if( a<b ) return -1;
    if( a==b ) return 0;
}
int main()
{
    int a[100];///內附亂碼
    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");///先看看內容

    qsort(a,100,sizeof(int),comp);

    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");///排完之後,先檢查一下
    return 0;
}
