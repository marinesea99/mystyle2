#include <stdio.h>
#include <string.h>///���Fstrlen()�r�����
char line[1000];///��b�~���ŧi,�|��l��0
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
