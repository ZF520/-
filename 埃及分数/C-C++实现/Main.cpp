#include<iostream>
using namespace std;

int main(){
	long int a, b, c;
	cin>>a>>b;				// ������� a �ͷ�ĸ b
	while(1){
		if(b % a != 0)		// �����Ӳ���������ĸ
			c = b/a + 1;	// ��ֽ��һ����ĸΪ b/a+1 �İ�������
		else				// ������������������������������
		{
			c=b/a;
			a=1;
		}

		if(a == 1)			// �������Ѿ�Ϊ 1 ��
		{	
			cout<<"1/"<<c;
			break;			// �����
		}
		else
			cout<<"1/"<<c<<"+";

		a = a * c - b;		// ��������ķ���
		b *= c;				// ��������ķ�ĸ

		if(a == 3){			// ������Ϊ 3��������������������
			cout<<"1/"<<b/2<<"+"<<"1/"<<b;
			break;
		} 
	}

	system("pause");
	return 0;

}