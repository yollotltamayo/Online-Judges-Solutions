#include<iostream>
#include<cmath>
using namespace std;
#define ull long long 
#define maxn 1e9
int pop[30000];
int main(){
	ios_base :: sync_with_stdio(false);
	 cin.tie(NULL); cout.tie(NULL);
	int veces,cta = 1;
	ull o = 0;
	for(int y = 1;;y++){
			o = (3*(y *(y + 1)))/2 - y;
			if(o <= maxn){
				pop[cta] = o;
				cta++;
			}else{break;}
	}
	cin>>veces;
	while(veces--){
		ull n,b,ctab = 0;
		cin>>n;	
		for(int y = cta-1;y >=1;y--){
			while(pop[y] <= n){
				n -= pop[y];
				ctab++;
			}
		}
		cout<<ctab<<"\n"	;
	}
		
	return 0;
}  	