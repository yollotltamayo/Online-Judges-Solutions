#include<iostream>
#include<vector>

using namespace std;
vector<int>num;
int main(){
	int casos,n,x;
	string a;
	cin>>casos;
	while(casos--){
		cin>>n;
		while(n--){
			cin>>x;
			num.push_back(x);
		}
		num.clear();
	}
}