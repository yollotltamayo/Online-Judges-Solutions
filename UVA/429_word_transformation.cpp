#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<sstream>
using namespace std;
vector<string>pal;
int main(){
	int casos,cta = 0;
	char c;
	string a,b,l;
	cin>>casos;
	cin.ignore();
	while(casos--){

		while(a != "*"){
			cin>>a;
			pal.push_back(a);
		}
		cin.ignore();
		while(getline(cin,l) && l != ""){
			stringstream ss(l);
			ss >>a>>b;
			queue<string>vis;
			map<string,int>dir;
			dir[a] = 0;
			vis.push(a);
			while(!vis.empty() && dir.count(b) == 0) {

				string actual = vis.front();vis.pop();

				for(int y = 0;y< pal.size();y++){
					string j = pal[y];
					if(! dir.count(j) && (j.length() ==  actual.length())){
						for(int u = 0;u <j.length();u++){
							if(actual[u] != j[u])
								cta++;
						}
						if( cta == 1){
							dir[pal[y]] = dir[actual] +1;
							vis.push(pal[y]);
						}
						cta = 0;
					}
				}
			}
			cout<<a<<" "<<b<<" "<<dir[b]<<"\n";			
		}
		if(casos)
		cout<<"\n";
	}	
}w