#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
#define max 1000000
#define ll long long
vector<ll>primos;
bitset<1000000>marcado;
void criba(){
	marcado.set();
	marcado[0]=marcado[1]= 0;
	primos.push_back(2);
	for(ll y = 4;y<max;y+=2)
		marcado[y] = 0;
	for(ll y = 3;y<max;y+=2){
		if(marcado[y]){
			primos.push_back(y);
			for(ll z = y*y; z < max;z += y)
				marcado[z] = 0;
		}
	}
}
int main(){
	
	marcado.set();
		criba();
		int veces,x;
		cin>>veces;
	while(veces--){
		cin>>x;
		cout<<primos[x - 1]<<"\n";
	}
}
