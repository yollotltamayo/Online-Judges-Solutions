#include<iostream>

using namespace std;
#define ll long long
int main(){
	int m,veces;
	ll n ,x;
	cin>>veces;
	while(veces--){
		cin>>n>>m;
		if(n == 1)
			cout<<0<<"\n";
		else{
		if( n == 2 )
			cout<<m<<"\n";
		else
			cout<<2*m<<"\n";	
	}
	}
	return 0;
}