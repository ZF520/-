#include<iostream>
using namespace std;
int main(){
	int num=21;			// �����
	int man;			// ���̹�
	while(num>=0){
		cout<<"���ڵĻ����: "<<num<<endl;
		cout<<"���̹�ȡ�Ļ����:";
		cin>>man;
		
		if(man>4 || man<1){
			cout<<"Υ��������Ч��ȡ��"<<endl;
			continue;
		}else{
			cout<<"������ȡ�Ļ����:"<<5-man<<endl;
			cout<<"ʣ��Ļ������"<<num-5<<endl;
			
		}
		num-=5;
	}
	cout<<"�����ˣ���"<<endl;
	system("pause");
	return 0;
}