//resuelto 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool chec(string a){
	string h = "";
	for_each(a.begin(),a.end(),[](char &c){c = tolower(c);});
	for(int y = 0;y<a.size();y++)
	{	if(a[y] >= 'a' && a[y] <= 'z') h += a[y];}
	for(int y = 0,u = h.size() -1;y<h.size();y++,u--){
		if(h[y] != h[u]){
			return false;
		}
	}
	return true ;
}
int main(){
	string a;
	getline(cin,a,'\n');	
	while( a != "DONE"){
		if(chec(a))
			cout<<"You won't be eaten!\n";
		else
			cout<<"Uh oh..\n";
		getline(cin,a,'\n');
	}
}
