#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main(){
	int veces;
	ll cta = 0;
	string a;
	cin>>veces;
	while(veces--){
		cin>>a;
		if(a[0] == 'T')
			cta += 4;
		if(a[0] == 'C')
			cta += 6;
		if(a[0] == 'O')
			cta += 8;
		if(a[0] == 'D')
			cta += 12;
		if(a[0] == 'I')
			cta += 20;
	}
	cout<<cta;
}