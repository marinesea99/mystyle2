#include <stdio.h>
char line[1000];///放在外面宣告,會初始成0
int main()
{
    scanf("%s",line);

    int ans=0;
    for(int i=0;i<1000;i++)
    {
        if(line[i]=='2') ans++;
    }
    printf("%d\n",ans);
}
