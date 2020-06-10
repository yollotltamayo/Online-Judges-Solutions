//resuelto
#include<iostream>
#include<map>
using namespace std;
map<int,int>pto;
int main(){
	int x,y,a,cta = 0;
	cin>>x>>y;
	while(x != 0 && y != 0){
		while(x--){
			cin>>a;
			pto[a] = 1;
		}
		while(y--){
			cin>>a;
			if(pto[a])
				cta++;
		}
		cout<<cta<<"\n";
		cin>>x>>y;
		cta = 0;
		pto.clear();
	}
}