#include<iostream>
using namespace std;
int main(){
	float x;
	char grade;
	cout<<"���������ֵ��";
	cin>>x;
	grade=x>=90?'A':(x>=80)?'B':(x>=70)?'C':(x>=60)?'D':'E';
	cout<<grade<<endl;
	system("pause");
	return 0;
}