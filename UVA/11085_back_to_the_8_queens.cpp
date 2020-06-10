#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int a , b;
vector<int> ptos[100];
bool func(int p[8]){
	for(int y = 0; y< 8 ; y ++){
		for(int z = y + 1;z < 8 ;z ++ ){
			if(p[z] == p[y] || (abs(p[z] - p[y] ) == abs(z - y)))
				return false;
		}	
	}
	return true;
}
int main(){
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);

	int veces,cta = 0,ct = 0;
	int p[8] = {0,1,2,3,4,5,6,7};
	int arr[8] = {0};
		do{
			if(func(p)){
				ptos[cta].insert(ptos[cta].begin(),p,p+8);
					cta++;
			}

		}while(next_permutation(p, p + 8));
		int k;
	while(1){
		for(int y = 0 ; y< 8 ;y++){
			cin>>k;arr[y]= k;
		}int min = 1000;
		for(int y = 0; y < 92; y++){
			int ctab = 0;
			for(int z = 0; z < 8; z++){
				if(abs(ptos[y][z] - (arr[z]-1))  != 0 )ctab++;
			}
			if(ctab < min)min = ctab;
		}
		ct++;
		cout<<"Case "<<ct<<": "<<min;
		if(!cin.eof())
			cout<<"\n";
		else
			break;
	}
	return 0;
}