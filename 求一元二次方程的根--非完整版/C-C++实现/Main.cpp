#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double a,b,c,disc,p,q,x1,x2;
	cout<<"������һԪ���η��̵�a,b,c��";
	cin>>a>>b>>c;
	disc=b*b-4*a*c;
	p=(-b)/(2*a);
	q=sqrt(disc)/(2*a);
	x1=p+q;
	x2=p-q;
	cout<<"x1��ֵΪ"<<x1<<endl;
	cout<<"x2��ֵΪ"<<x2<<endl;
	system("pause");
	return 0;
}