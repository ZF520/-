#include<iostream>
using namespace std;
int main(){
	int grade;
	cin>>grade;
	switch(grade){
		case 5:
			cout<<"����"<<endl;break;
		case 4:
			cout<<"��"<<endl;break;
		case 3:
			cout<<"����"<<endl;break;
		case 2:
			cout<<"������"<<endl;break;
		default:cout<<"̫����ˣ�"<<endl;
	}
	system("pause");
	return 0;
}