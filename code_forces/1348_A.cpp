#include<iostream>

using namespace std;

int main(){
	int veces,a,b,c,n;
	cin>>veces;
	while(veces--){
		cin>>n;
		a = b = 0;
		b +=  (1<<n);
		for(int y =1; y< n/2 ; y ++)
			b +=(1<<y);
		for(int y = n/2;y <n; y++)
			a += (1<<y);

		cout<<abs(a - b)<<"\n";
	}	
	return 0;	
}