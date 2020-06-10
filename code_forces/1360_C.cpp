#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int marc[100];
int main(){
	int veces;
	cin>>veces;
	while(veces--){
		int n , k;
		cin>>n;
		vector<int>p;
		for(int y = 0; y < n ; y++){
			cin>>k;
			p.push_back(k);
		}
		sort(p.begin(), p.end());
		int pa = 0, i = 0;	
		if(p[0] & 1 ) i++; else pa++;
		
			for(int y = 1; y <n ; y++){
				if(p[y] & 1)
					i++;
				else
					pa++;
			}
		if(pa%2 != 0 && i%2 != 0){
			for(int y = 1; y < n ;y++){
				if(p[y] - p[y -1 ] == 1){
					i--;
					pa--;
					break;
				}
			}
		}
		//cout<<i<<" "<<pa<<"\n";
		if(pa%2 == 0 && i%2 == 0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}		