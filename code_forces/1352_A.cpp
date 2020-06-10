#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
	int veces,x,cta = 0;
int p[7] = {1,10,100,1000,10000,100000,1000000};

	cin>>veces;
	while(veces--){
		cin>>x;
		vector<int>a;
		int n = x;
		for(int y = 0; y< floor(log10(n)) + 1;y++)	{
			//cout<<(x%10) * p[y];
			if((x%10) * p[y] != 0){a.push_back((x%10) * p[y]) ;cta++;}
			x /= 10;
		}
		cout<<cta<<"\n";
		for(auto x:a)cout<<x<<" ";
		cout<<"\n";
	cta = 0;
	}
	return 0;
	
}