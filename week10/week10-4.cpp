#include <stdio.h>
#include <vector>
#include <algorithm>
class Record{///C++的物件,用class宣告,裡面有名子 分數 包起來
public:///公開的欄位,可以被別人 main()使用
    char name[30];
    int grade;
};
bool compare(Record a,Record b)
{
    return (a.grade>b.grade);
}
int main()
{
    FILE * fin = fopen("intput.txt","r");
    int N;
    ///scanf("%d",&N);
    fscanf(fin,"%d",&N);
    std::vector<Record> student(N);
    for(int i=0;i<N;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }

    std::sort(student.begin(),student.end(),compare);

    for(int i=0;i<N;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
