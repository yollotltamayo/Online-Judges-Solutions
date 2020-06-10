#include<iostream>
#include<utility>
#include<map>
using namespace std;
#define ii pair<int,int>
#define f first
#define s second

ii may(int a[70], int n){
	int  may = 0,pos = 0;
	for(int y = 0; y < n;y++){
		if( may < a[y] ){
			may = a[y];
			pos = y;
		}
	}
	 return {may,pos};
}
ii min(int a[70], int n){
	int  min = 1000,pos = 0;
	for(int y = 0; y < n;y++){
		if( min > a[y] ){
			min = a[y];
			pos = y;
		}
	}
	 return {min,pos};
}

int main(){
int n , k, a, b, veces,aux;
	cin>>veces;
	while(veces--){
		cin>>n>>k;
		int uno[70];
		int dos[70];
		map<int,int>lo;
		for(int y = 0; y < n ; y++){
			cin>>a;
			uno[y] = a;
		}
		for(int y = 0; y < n ; y++){
			cin>>a;
			dos[y] = a;
		}
		int cta = 0;
		while(k){
			 ii y = may(dos,n);
			int may = 0,pos = 0;
			for(int w = 0; w < n ; w++){
				if(may < uno[w] && lo[w] != 1){
					pos = w;
					may = uno[w];					
				}
			}
			ii z = min(uno,n);
			if(z.f < y.f ){
				aux = uno[z.s];
				//lo[z.s] = 1;
				uno[z.s] = dos[y.s];
				dos[y.s] = aux;
				k--;
			}else{
				k = 0;
			}
		}
		int sum = 0;
			for(int y = 0 ; y < n ; y++){
				sum += uno[y];
			}
			cout<<sum<<"\n";
	}
}