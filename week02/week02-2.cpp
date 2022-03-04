#include <stdio.h>
#include <string.h>
char line[1000];
int palindrome()
{   ///如何解決判斷頭尾相同
    int N=strlen(line);
    for(int i=0;i<N;i++)///0...N-1
    {
        if(line[i]!=line[N-1-i]) return 0;///bad=1
    }
    return 1;///沒有壞,good
}
int main()
{
	while(scanf("%s",line)==1)
	{
	    int p = palindrome();///使用函式來判斷
		if(p==1) printf("%s -- is a regular palindrome.\n\n",line);
        if(p==0) printf("%s -- is not a palindrome.\n\n",line);
	}
}
