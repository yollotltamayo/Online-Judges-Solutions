//resuelto
#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int mues[1000];
map<string,int>ref;
map<string,string>b;
string cosa(string str){
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	sort(str.begin(),str.end());
	return str;
}
int main(){
	std::ios::sync_with_stdio(false);
	string a;
	int z;
	cin>>a;
	while(a != "#"){
		ref[cosa(a)]++;
		b[a] = a;
		cin>>a;
	}
	for(auto &c:b){
		if(ref[cosa(c.first)] == 1)
			cout<<c.first<<"\n";
	}
}