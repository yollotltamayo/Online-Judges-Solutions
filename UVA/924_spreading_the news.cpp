#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
vector<int>pto[2507];
int dir[2507];
int cont[2507];
void bfs(int nodo){
	int cta = 0;
	queue<int>vis;
	dir[nodo] = 0;
	vis.push(nodo);
	while(!vis.empty()){
		int actual = vis.front();vis.pop();
		for(auto &c:pto[actual]){
			if(dir[c] == -1){				
				dir[c] = dir[actual] + 1;
				vis.push(c);
				cont[dir[c]]++;
			}
		}
	}
}
int main(){
	int e,casos,a,p;
	cin>>e;
	for(int y = 0;y<e;y++){
		cin>>p;
		while(p--){
			cin>>a;
			pto[y].push_back(a);
		}
	}
	cin>>casos;
	for(int j = 0;j< casos;j++){
		cin>>a;
		memset(dir,-1,sizeof(dir));
		memset(cont,0,sizeof(cont));
		bfs(a);
		int may = 0,pos = 0;
		for(int y = 0;y<e;y++){
			if(may < cont[y]){
				may = cont[y];
				pos = y;
			}
		}		
		if(may)	
			cout<<may<<" "<<pos<<"\n";
		else
			cout<<"0"<<"\n";
	}
	return 0;
}