//resuelto--acc
#include<iostream>
#include<bitset>
#include<vector>
#include<string>
#define ll long long
#define max 50000
using namespace std;
bitset<max>marcado;
vector<ll>primos;
string a;
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
void factores(ll n){
	ll cta = 0,prim = 2;
	while( prim * prim  <= n){
		while(n%prim == 0){
			a+=" "+to_string(prim)+ " x";
			n/= prim;
		}
		prim = primos[++cta];
	}	
	if(n != 1)
		a+=" "+to_string(n)+ " x";
}
int main(){
	ll caso; criba();
	cin>>caso;
	a = "";
	while(caso != 0){
		a += to_string(caso) + " =";
		if(caso < 0)
			a += " -1 x";
		factores(abs(caso));
		a.pop_back();
		a.pop_back();
		cout<<a<<"\n";
		a = "";
		cin>>caso;
	}
	
}