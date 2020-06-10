#include<iostream>

using namespace std;
#define ll long long
ll op(ll a,ll b){
	return b*((a*(a+1))/2);
}
int main(){
	int veces;
	ll x,y;
	cin>>veces;
	while(veces--){
		cin>>x;
		int a = x/3;
		int b = x/5;
		int c = x/15;
		if(x%3 == 0 && a-1 >= 0)a-=1;
		if(x%5 == 0 && b-1 >=0)b-=1;
		if(x%15 == 0 && c-1 >= 0)c-=1;
		cout<<op(a,3) + op(b,5) - op(c,15)<<"\n";
	}
	return 0;
}