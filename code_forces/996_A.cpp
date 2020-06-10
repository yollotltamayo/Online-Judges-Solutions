#include<iostream>

using namespace std;

int main(){
	int n,cta = 0,pos = 0;
	int val[5] = {100,20,10,5,1};
	cin>>n;
	while(n >0)	{
		while(val[pos] <= n){
			n-= val[pos];
			cta++;
		}
		pos++;
	}
	cout<<cta;
}
