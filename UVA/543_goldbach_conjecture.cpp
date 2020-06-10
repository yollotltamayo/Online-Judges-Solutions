//resuelto--accepted
#include<iostream>
#include<bitset>
#include<vector>
#include<cmath>
#define max 1000000
#define ll long long
using namespace std;
bitset<max>marcado;
vector<ll>primos;
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
	int caso,cta = 0,prim;
	criba();
	cin>>caso;
	while(caso != 0){
		while(cta + 1){
			prim = caso - primos[cta];
			if(marcado[prim]) break;
			cta++;
		}
		if(prim < primos[cta])
			cout<<caso<<" = "<<prim<<" + "<<primos[cta]<<"\n";
		else
			cout<<caso<<" = "<<primos[cta]<<" + "<<prim<<"\n";
		cta = 0;
		cin>>caso;
	}
}	