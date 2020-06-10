#include<iostream>
#include<vector>
#include<utility>
#include<bitset>
#include<stack>
#include<iterator>
using namespace std;
vector<int> ptos[105];
vector<int>ts;
bitset<105>dfs_num;
void dfs2(int u) { 
	dfs_num[u] = true;
	for (int j = 0; j < ptos[u].size(); j++) {
		int v = ptos[u][j];
		if (dfs_num[v] == false)
			dfs2(v);
		}
	ts.push_back(u);
}

int main(){
	int veces,v,x,y;
	cin>>v>>veces;
	while(veces != 0 && v != 0){
		dfs_num.reset();
		while(veces--){
			cin>>x>>y;
			ptos[x].push_back(y);
		}
		for(int y= 1;y <=v;y++){
			if(!dfs_num[y])
				dfs2(y);
		}
		  for(int y = ts.size()-1 ;y >= 0;y--){
		  	cout<<ts[y];if(y != 0)cout<<" ";
		  }
		  	
		cout<<"\n";
		ts.clear();
		for(int y= 1;y <=v;y++){ptos[y].clear();}
		cin>>v>>veces;
	}
	return 0;
}	