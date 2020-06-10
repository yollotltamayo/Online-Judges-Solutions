#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int v,k,x,p1,i2,p2,i1;
	p1 = p2 = i1 = i2  =0;
	cin>>v>>k;
	for(int y = 0; y <v;y++){
		cin>>x;
		if(x & 1)p1++;
		else i1++;
	}
	for(int y = 0; y <k;y++){
		cin>>x;
		if(x & 1)p2++;
		else i2++;
	}
	cout<<min(p1,i2) + min(i1,p2);
}