#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
vector<string>n1;
vector<string>n2;

int main(){
	int t1,t2,g,h,k;
	string a,b,word;
	cin>>t1>>t2;
	cin.ignore();
	getline(cin,a,'\n');
	getline(cin,b,'\n');	
	stringstream x(a);
	stringstream y(b);
	while(x >> word)
		n1.push_back(word);
	while(y >> word)
		n2.push_back(word);	
	int veces;
	cin>>veces;
	while(veces--){
		cin>>k;
		k-=1;
		g = k%t1;
		h = k%t2;
		cout<<n1[g]+n2[h]<<"\n";
	}
}