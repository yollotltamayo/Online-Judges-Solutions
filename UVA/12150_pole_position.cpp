#include<iostream>
//resuelto
#include<bitset>
#include<cstring>
using namespace std;
int carro[1005];
bitset<1005>marc;
int main(){
	int caso,car,pos,ban = 1;
	cin>>caso;	
	while(caso != 0){
		marc.reset();
		for(int y = 1 ;y<= caso;y++){
			cin>>car>>pos;
			if((pos + y <= 0) || (pos + y > caso) || marc[pos + y] == 1){
				ban = 0;
			}else{
				marc[pos + y] = 1;
				carro[pos + y] = car;
			}
		}
		if(ban){
			for(int y = 1;y<= caso;y++){
				cout<<carro[y];
				if(y != caso)cout<<" ";
			}
		}else{cout<<"-1";}	
		memset(carro,0,sizeof(carro));
		cout<<"\n";
		cin>>caso;
		ban = 1;
	}
}