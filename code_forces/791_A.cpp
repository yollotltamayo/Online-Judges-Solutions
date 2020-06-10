#include<iostream>

using namespace std;

int main(){
	int a,b,cta = 0;
	cin>>a>>b;
	while( a <= b){
		a*=3;
		b*=2;
		cta++;
	}
	cout<<cta;
}