#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<utility>
#include<cstring>
using namespace std;
 
typedef struct p{
	int x;
	int y;
	int dist;
}pto;
char s[2][100005];
string bfs(int tam,int salto){
	pto nodo,a;
	nodo.x =0;nodo.y = 0;
	nodo.dist = 0;
	s[nodo.x][nodo.y] ='X';
	queue<pto>vis; 
	vis.push(nodo);
	while(!vis.empty()) {
		pto actual = vis.front();vis.pop();
		if(actual.y > tam) return "YES";
		for(int k = 0;k<3;k++){
			a.dist = actual.dist +1;
			if(k == 0){
				a.y = actual.y + 1;
				a.x = actual.x;
			}
			if(k == 1){
				a.y = actual.y - 1;
				a.x = actual.x;
			}
			if(k == 2){
				a.y = actual.y + salto;
				a.x = 1 - actual.x;
			}
			if(a.y >= tam)return "YES";
			if(a.x >= 0 && a.y>= 0 &&  a.x <= 1 && s[a.x][a.y] != 'X' &&  a.dist <= a.y){
				s[a.x][a.y] ='X';
				vis.push(a);
			}
		}
	}
	return "NO";
}
 
int main(){
	char a;
	int salto,ban = 0,tam,cta = 0;
	cin>>tam>>salto;
	memset(s,0,sizeof(s));
	for(int x = 0;x< 2;x++){
		for(int y = 0;y<tam;y++){
			cin>>a;
			s[x][y] =a;
		}
	}
cout<<bfs(tam,salto)<<"\n";
return 0;
 
}
