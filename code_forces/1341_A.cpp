#include<iostream>
using namespace std;
int main(){
	int veces,a,b,c,d,n;
	cin>>veces;
	while(veces--){
		cin>>n>>a>>b>>c>>d;
		int k = n*(a-b);
		int w = n*(a+b);
		if( w < (c - d) || k > (c + d))
			cout<<"NO"<<"\n";
		else
			cout<<"YES"<<"\n";
	}
	return 0;
}