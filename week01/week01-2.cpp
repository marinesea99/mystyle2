#include <stdio.h>
int main()
{
    printf("現在要練習讀入字元,字串: ");

    char c;///字元,字母
    scanf("%c",&c);///讀入
    printf("讀到字元:%c\n",c);

    char line[1000];
    scanf("%s",line);///讀入
    printf("讀到字串:%s\n",line);

    return 0;
}
