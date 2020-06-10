#include<iostream>

using namespace std;
#define ull unsigned long long
int main(){
	int veces;
	ull num;
	cin>>veces;
	while(veces--){
		cin>>num;
		if(num & 1)
			cout<<(int)num/2<<"\n";
		else
			cout<<(int)num/2  -1<<"\n"	;
	}
}