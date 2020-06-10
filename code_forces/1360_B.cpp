#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	int veces, n , k;
	cin>>veces;
	while(veces--){
		vector<int> p;
		cin>>n;
		for(int y = 0; y < n ; y++){
			cin>>k;
			p.push_back(k);
		}
		sort(p.begin(),p.end());
		int min = 1e5;
		for(int y = 1; y < n ; y++){
			int a = abs(p[y] - p[y-1]);
			if(a < min) min = a;
		}
		cout<<min<<"\n";
	}
	return 0;
}