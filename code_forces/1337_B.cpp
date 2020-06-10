#include<iostream>
#include<cmath>
using namespace std;

int main(){
		
		int veces, b ,c ,a;
	

		cin>>veces;
		while(veces--){
			cin>>a>>b>>c;
			
			while( b > 0  && a >0 && a/2 + 10 < a){
				a =  (a/2) + 10		;b--;
			}			
			
			if(c * 10 >= a)cout<<"YES\n";
			else
				cout<<"NO\n";
		}
}