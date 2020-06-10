#include<iostream>
#include<string>
using namespace std;

int main(){
	int c = 0,u = 0,v,cta = 0;
	string letras;
	cin>>v;
	cin>>letras;
	for(auto a:letras){
		if(letras[cta] == 'z')c++;
		if(letras[cta] == 'n')u++;
		cta++;
	}
	for(int y = 0; y< u;y++)cout<<"1 ";
	for(int y = 0; y< c;y++)cout<<"0 ";
}