#include <stdio.h>
#include <string.h>///為了strlen()字串長度
char line[1000];///放在外面宣告,會初始成0
int main()
{
	int total=0;
	while(scanf("%s",line)==1)
	{
	    int ans=0;
	    int N=strlen(line);
	    ///for(int i=0;i<1000;i++)
	    ///for(int i=0;i<strlen;i++)
	    for(int i=0;i<N;i++)
	    {
	        if(line[i]=='2') ans++;
	    }
	    printf("%d\n",ans);
	    total+=ans;
	}
	printf("Total: %d\n",total);
}
