#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>p;
int main(){
	int caso,x,y,cta = 0, n= 0;
	cin>>caso;
	while(caso != 0){
		priority_queue<int,vector<int>,greater<int>>q;
		for(int y = 0;y<caso;y++){
			cin>>x;q.push(x);
		}
			
		while(q.size() > 1){
			n = q.top();q.pop();
			n += q.top();q.pop();
			cta += n;
			q.push(n);
		}
		cout<<cta<<"\n";
		cin>>caso;
		cta = 0;
	}
} 