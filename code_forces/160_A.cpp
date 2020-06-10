#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>p;
int main(){
	int v,x,cta = 0,c = 0,a ,k= 0;
	cin>>v;
	while(v--){
		cin>>x;
		p.push_back(x);
		cta += x;
	}
	sort(p.begin(),p.end());
	a = p.size()-1;
	while(cta >= c){
		c += p[a];
		cta -= p[a];
		a--;
		k++;
	}
	cout<<k;
}