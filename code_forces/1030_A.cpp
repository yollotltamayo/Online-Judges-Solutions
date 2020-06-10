#include<iostream>
using namespace std;

int main(){
	int v,p,ban = 1;
	cin>>v;
	while(v--){
		cin>>p;
		if(p){
			ban = 0;
			break;
		}
	}
	if(ban)
		cout<<"EASY";
	else
		cout<<"HARD";
}