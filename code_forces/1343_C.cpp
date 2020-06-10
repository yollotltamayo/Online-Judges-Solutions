#include<iostream>
#include<vector>
using namespace std;
#define min -1e9-7
#define ll long long
 
int main(){
	ll veces,n,k;
	cin>>veces;
	while(veces--){
		cin>>n;
		vector<ll>p;
		p.resize(n);
		for(int y = 0; y< n ; y++){
			cin>>k;
			p[y]  = k;
		}
		ll may = p[0];
		ll cta = 0;
		for(ll y = 1; y <n ; y++){
			if(p[y]*p[y -1] < 0){
					cta += may;
					may = min;
				}
			if( may < p[y]){
				may = p[y];
			}
		}
		cta += may;
		cout<<cta<<"\n";
	}
	return 0;
}
