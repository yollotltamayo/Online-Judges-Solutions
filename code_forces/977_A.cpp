#include<iostream>
using namespace std;
int main(){
	int c,k;
	cin>>c>>k;
	while(k--){
		if(c %10 == 0)
			c/=10;
		else
			c--;
	}
	cout<<c;
}