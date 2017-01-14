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
	cout<<"Hello world"<<endl;
	return 0;
}
