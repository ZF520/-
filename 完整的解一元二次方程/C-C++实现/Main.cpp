#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,disc,x1,x2,p,q;
	cin>>a>>b>>c;
	if(fabs(a)<=1e-6)
		cout<<"����һԪ���η��̣�����"<<endl;
	else{
		disc=b*b-4*a*c;
		if(fabs(disc)<=1e-6){
			p=(-b)/2*a;
			q=sqrt(disc)/(2*a);
			x1=p+q;
			x2=p-q;
			if(x1==x2)
				cout<<"���̵�ʵ��Ϊx1=x2="<<x1<<endl;
		}
		else if(fabs(disc)>1e-6){
			p=(-b)/2*a;
			q=sqrt(disc)/(2*a);
			x1=p+q;
			x2=p-q;
			cout<<"���̵�ʵ��x1="<<x1<<endl;
			cout<<"���̵�ʵ��x2="<<x2<<endl;
		}
		else
			cout<<"��ʵ��"<<endl;
	}
	system("pause");
	return 0;
}