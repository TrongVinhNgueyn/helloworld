#include <iostream>

using namespace std;
int ucln(int a,int b){
	int r;
	while(b)
	{
		r=a%b;a=b;b=r;
	}
	return a;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<ucln(a,b);
	cout<<"Hello world"<<endl;
	cout<<"xin chao";
	cout<<"Hello";
	cout<<"vinh";
	return 0;
}
