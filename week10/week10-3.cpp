#include <stdio.h>
#include <string.h>
class Record{///C++������,��class�ŧi,�̭����W�l ���� �]�_��
public:///���}�����,�i�H�Q�O�H main()�ϥ�
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
			if(student[i].grade<student[i+1].grade)///����N�ŧi
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
