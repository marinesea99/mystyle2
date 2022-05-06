///#include <stdio.h>
#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
using namespace std;
int main()
{
	int N;
	///scanf("%d",&N);
	cin >> N;
	for(int i=0;i<N;i++){
		cin>>name[i]>>grade[i];
	}
	for(int i=0;i<N;i++){
		cout<<name[i]<<endl;
	}
}
