#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long
int main(){
	ll veces,n,cta,ctab;
	cin>>veces;
	while(veces--){
		cin>>n;
		if((n/2)%2 == 0){
		cta = 2,ctab = 0;
		vector<ll>p;
		cout<<"YES \n";
			for(ll y = 0; y < n/2 ;y++){
				cout<<cta<<" ";
				if( y ==  n/2 -1){
					p.push_back(cta + ctab);
				}else{
					p.push_back(cta -1);
					ctab++;
				}
				cta+=2;
			}
			for(auto x:p)cout<<x<<" ";
			cout<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	}
}