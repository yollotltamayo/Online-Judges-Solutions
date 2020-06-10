	#include<iostream>
	#include<vector>
	#include<map>
	#include<utility>
	#include<algorithm>

	using namespace std;
#define ll long long
	int main(){
		int veces,n,k;
		cin>>veces;
		while(veces--){
			cin>>n>>k;
			int div = n/k;
			int mod = n%k;
			if(((div + mod)%2 == 0 &&  div%2 == 0) || ((div + mod)%2 != 0 &&  div%2 != 0)){
				if(div != 0){
					cout<<"YES\n";
					for(int y = 0; y < k -1; y++)cout<<div<<" ";
					cout<<div + mod<<"\n";
				}else{cout<<"NO\n";}
			}else{
				if(div -1 <= 0){
						cout<<"NO"<<"\n";
				}else{ 
				if(((((div +mod )+ (k-1))%2 == 0) &&  (div -1)%2 == 0) || ((((div +mod )+ (k-1))%2 != 0) &&  (div -1)%2 != 0)) {
					if((div -1 )*( k -1) + div + mod + (k-1) > n){
						cout<<"NO\n";
					}else{
						cout<<"YES\n";
						for(int y = 0; y < k -1; y++)cout<<div - 1<<" ";
						cout<<div + mod + (k-1)<<"\n";		
					}
				}
				else{
						cout<<"NO\n";
					}
				}
			}
		}			
		return 0;
	}