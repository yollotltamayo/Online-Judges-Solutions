#include<iostream>

using namespace std;

int main(){
	int veces,ban = 0;
	int a[] = {4,7,47,74,477,447,444,777,774,744};
	cin>>veces;
	for(int y = 0;veces >= a[y];y++){
		if(veces%a[y] == 0)
		{
			ban = 1;
			break;
		}
	}
	if(ban)	
		cout<<"YES";
	else
		cout<<"NO";
}