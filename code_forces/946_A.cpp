#include<iostream>

using namespace std;

int main(){
	int veces,k,ctap = 0,ctan = 0;
	cin>>veces;
	for(int y = 0;y < veces; y ++){
		cin>>k;
		if(k >= 0 )ctap += k; 
		else ctan += k;
	}
	cout<<ctap - ctan;
}