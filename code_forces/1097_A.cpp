#include<iostream>
#include<string>
using namespace std;
string com(string a,string b){
	for(int y = 0;y <15;y+=3){
		if(b[y] == a[0])return "YES";
		if(b[y + 1] == a[1])return "YES";
	}
	return "NO";
}
int main(){
	string a,b;
	getline(cin,a,'\n');
	getline(cin,b);
	cout<<com(a,b);
}