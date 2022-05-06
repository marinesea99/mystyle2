#include <iostream>
#include <vector>
using namespace std;
class Student{
public:
	char name[30];
	int grade;
};
int main()
{
	int N;
	cin >> N;
	vector<Student> stu(N);///start vector's variable stu
	///unit is Student     stu this variable can hold N student
	for(int i=0;i<N;i++){
		cin>>stu[i].name>>stu[i].grade;
		///cin>>name[i]>>grade[i];
	}
	for(int i=0;i<N;i++){
		cout<<stu[i].name<<" "<<stu[i].grade<<endl;
		///cout<<name[i]<<endl;
	}
}
