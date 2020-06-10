#include<iostream>

using namespace std;

int main(){
	int veces,x,r,a,cta = 0;
	cin>>veces;
	while(veces--){
		cin>>x;
		if(x&1){cta++;}
		if(x == 2) cta = 2;
		cout<<cta<<"\n";	
		cta = 0;
	}
}									