#include<iostream> 
#include<map>
#include<iomanip>
using namespace std;
map<string,int>arbol;
int main(){
	int casos,ban = 1;
	double cta = 0;
	string a;
	cin>>casos;
	cout << setprecision(4) << fixed;
	getline(cin,a);getline(cin,a);
	for(int y = 0;y< casos;y++){
		if(y > 0)
			cout<<"\n";
		while(getline(cin,a) && a != ""){
			arbol[a]++;
			cta++;
		}
			for(auto &a:arbol){
				cout<<a.first<<" "<<(a.second*100)/cta<<"\n";
			}
		cta = 0;
		arbol.clear();
	}	
}