#include<iostream>
using namespace std;

int main(){
	int i;
	cout<<"��������һ����1����������";
	cin>>i;
	while(i > 1){
		if(i/2)
			i/=2;
		else
			i=i*3+1;
		cout<<i<<endl;
	}
}