	#include<iostream>

	using namespace std;
	#define ll long long 
	int gcd(int a, int b){
		if( b == 0)
			return a;
		return gcd(b,a%b);
	}
	int main(){
		int veces,tam;
		int a[50];
		cin>>veces;
		while(veces--){
			cin>>tam;
			ll mcm = 1 *(int)(2/gcd(1,2)) ;
			for(int y = 1 ; y <= tam ; y++){
				 mcm = y *(int)(mcm/gcd(y,mcm)) ;
			}
			if(tam != 1)
				cout<<mcm<<"\n";
			else
				cout<<1<<"\n";
		}
	}