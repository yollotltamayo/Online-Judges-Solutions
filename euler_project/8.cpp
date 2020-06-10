#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll func(string a , int k){
ll may = 0, ac = 1,ban;
	for(int y = 0; y < a.length();y++){
		ac = 1;ban = 0;
		for(int z = 0; z < k ; z++){
			if(y + k <= a.length()){
				ac *= a[y + z]  - '0';
				ban = 1;
				//cout<<a[y + z]  - '0';
			}
		}//cout<<"\n";
		if(ac > may && ban == 1	) may = ac;
	}
	return may;
}
int main(){
	string a, b;
	int veces, n, k ;
	cin>>veces;
	while(veces--){
		cin>>n>>k;
		cin>>a;
		cout<<func(a, k)<<"\n";
	}
}