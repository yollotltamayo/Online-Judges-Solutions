#include<iostream>
#include<map>
#include<queue>
#include<utility>
using namespace std;
typedef struct p{
	int x,y;
	char orien;
}pto;
map<char,int>ori;
map<char,pair<int,int>>hac;
char ptos[105][105];
int orienta(int cta){
	if(cta > 3)
		return 0;
	if(cta < 0)
		return 3;
	return cta;
}
int chec(char p,int cta){
	if(p == 'D')
		return cta = orienta(cta +1);
	if(p == 'E')
		return cta = orienta(cta -1);
}
int main(){
	int n,m,c,x1,y1;
	char k,t;
	pto actual;
	char lo[]={'N','L','S','O'};
	ori['N'] = 0;hac['N'] = {-1,0};
	ori['L'] = 1;hac['L'] = {0,1};
	ori['S'] = 2;hac['S'] = {1,0};
	ori['O'] = 3;hac['O'] = {0,-1};
	cin>>n>>m>>c;
	while( n != 0 && m != 0 && c != 0){
		for(int x = 0; x< n;x++){
			for(int y = 0;y < m;y++){
				cin>>k;
				ptos[x][y] = k;
				if(k>= 'A' && k <= 'Z'){actual.orien = k;actual.x = x;actual.y = y;}
			}
		}
		queue<char>vis;
		for(int y = 0;y <c;y++){
			cin>>k;
			vis.push(k);
		}
		int cta =0,num = 0;
		while(!vis.empty()){
			char accion = vis.front();vis.pop();
			if(accion == 'F'){
				x1 = actual.x + hac[actual.orien].first;
				y1 = actual.y + hac[actual.orien].second;
					if(x1 >= 0 && y1 >= 0 && x1 < n && y1 <  m && ptos[x1][y1] != '#'){
						actual.x = x1;
						actual.y = y1;
						if(ptos[x1][y1] == '*'){
							ptos[x1][y1] ='.';
							cta++;
						}
					}
			}else{
				num = chec(accion,ori[actual.orien]);
				actual.orien = lo[num];
			}
		}
		cout<<cta<<"\n";
		cin>>n>>m>>c;
	}
	return 0;	
}