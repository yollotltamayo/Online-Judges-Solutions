#include<iostream>
#include<vector>
#include<cstring>
#include<bitset>
using namespace std;
int dir[50007];
bitset<50007>marc;
vector<int>pto[50007];
int dfs(int nodo){
		marc[nodo] = 1;
		dir[nodo] = 0;
		if(!marc[pto[nodo][0]])
			dir[nodo] += dfs(pto[nodo][0])+ 1;
		marc[nodo] = 0;		
	return dir[nodo];
}
int main(){
	int casos,n,x,y,cta = 1;
	cin>>casos;
	while(casos--){
		cin>>n;
		marc.reset();
		memset(dir,-1,sizeof(dir));
		for(int z = 1;z <= n;z++){
			cin>>x>>y;
			pto[x].push_back(y);
		}
		int ans = -1,pos = 1 ,max = -1;
		for(int z = 1;z<= n;z++){
			ans = (dir[z] == -1)?dfs(z):dir[z];
			if(ans > max){
				max = ans;
				pos = z;
			}
		}
		cout<<"Case "<<cta<<": "<<pos<<"\n";
		for(int y = 1;y <= n;y++)pto[y].clear();
		cta++;
	}
	return 0;
}