#include <stdio.h>
#include <string.h>
class Record{///C++的物件,用class宣告,裡面有名子 分數 包起來
public:///公開的欄位,可以被別人 main()使用
    char name[30];
    int grade;
};
Record student[100];
///char name[100][30],tempName[30];
///int grade[100];
int main()
{
    FILE * fin = fopen("intput.txt","r");
    int N;
    ///scanf("%d",&N);
    fscanf(fin,"%d",&N);
    for(int i=0;i<N;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }
    for(int k=0;k<N-1;k++)
	{
		for(int i=0;i<N-1;i++)
		{
			if(student[i].grade<student[i+1].grade)///不對就宣告
			{
				Record temp=student[i];
				student[i]=student[i+1];
				student[i+1]=temp;
			}

		}
	}
    for(int i=0;i<N;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
