#include<iostream>
using namespace std;

int main(){
	int c;
	int a, b;
	do
	{
		system("cls");
		cout<<"Сѧ��������ϰϵͳ"<<endl;
		cout<<"1.�ӷ�"<<endl;
		cout<<"2.����"<<endl;
		cout<<"3.�˷�"<<endl;
		cout<<"4.����"<<endl;
		cout<<"5.�˳�"<<endl;
		cout<<"��ѡ��1-5����";
		cin>>c;
		if( c!= 5)
		{
			cout<<"���������������Կո���";
			cin>>a>>b;
			switch( c )
			{
				case 1: cout<<a<<"+"<<b<<"="<<a+b<<endl;break;
				case 2: cout<<a<<"-"<<b<<"="<<a-b<<endl;break;
				case 3: cout<<a<<"*"<<b<<"="<<a*b<<endl;break;
				case 4:if( b != 0 )
							cout<<a<<"/"<<b<<"="<<a/b<<endl;
						else
							cout<<"��������Ϊ0��";
						break;
				default:cout<<"��������룬������ѡ��"<<endl;
			}
			system("pause");
		}
		else
		{
			cout<<"��ϰ������"<<endl;
		}
	}while(1);
	system("pause");
	return 0;
}