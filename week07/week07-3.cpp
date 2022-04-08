#include <stdio.h>
#include <stdlib.h>///qsort
#include <string.h>///strcmp()
char line[1000][50];
int compare(const void *p1, const void *p2)
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d",&N);

	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);
	}

	qsort(line,N,50,compare);

	for(int i=0;i<N;i++)
	{
		printf("%s\n",line[i]);
	}
}
