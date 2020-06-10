#include<iostream>

using namespace std;

#define ll long long
#define maxn 2*1e9
int pos(ll n, ll base	){
	int b = (int) n/base;
	 return n - b ;
}
int bin (ll a, ll b,ll base,ll n){
	int sum = (int)((a + b) / 2);
	//cout<<pos(sum,n)<<"\n";
	/*if(pos(sum,base) != 4){
		cout<<pos(sum,base)<<"\n";
	}*/
	if(pos(sum,base) == n){
		if(sum%base == 0)
			sum -=1;
		return sum;

	}
	if( pos(sum, base ) > n){
		return bin(a,sum,base,n);
	}
	if( pos(sum, base ) < n){
		return bin(sum,b,base,n);
	}
}
int main(){
	int veces;
	ll a,base, n,c;
		cin>>veces;
	while(veces--){
		cin>>base>>n;
		cout<<bin(0, maxn,base,n)<<"\n";
	}
return 0;

}