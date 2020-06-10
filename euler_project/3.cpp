#include<iostream>

using namespace std;
#define ll long long 
int main(){
	int veces;
	cin>>veces;
	while(veces--){
		ll o,p, a ;
		cin>>o;
		a = o;
		p = 2;
		while(p*p <= o ){
			while(o%p == 0){
				 o /= (int)p;
			}
			//cout<<p<<" "<<o <<"\n";
			if( p != 2)
				p += 2;
			else
				p+=1;
		}
		if( p - 2 > o)
			cout<<p-2<<"\n";
		else
			cout<<o<<"\n";
	}
	return 0;
}