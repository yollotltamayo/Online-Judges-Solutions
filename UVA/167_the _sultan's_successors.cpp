	#include<iostream>
	#include<algorithm>
	#include<vector>
	#include<cstring>
	using namespace std;

	vector<int> m[100];
	int  ptos[10][10];
	int  pto[10][10];

	bool place(int p[8]){
		
		for(int y = 0; y < 8; y++){
			for(int z = y + 1;z < 8; z++){
				if(p[z] == p[y] || (abs(p[z]-p[y]) == abs(z - y)))
				return false;
			}
		}
		return true;
	}
	int main(){
		ios_base :: sync_with_stdio(false); 
		cin.tie(NULL); cout.tie(NULL);
		int cta = 0,veces;
		int p[8] = {0,1,2,3,4,5,6,7};
		do{
			if(place(p)){
				m[cta].insert(m[cta].begin(),p, p + 8);
				cta++;
			}
		}while(next_permutation(p,p + 8));
		cin>>veces;
		int k;
		while(veces--){
			memset(ptos,0,sizeof(ptos));
			
			for(int y= 0;  y< 8 ; y++){
				for(int z = 0; z < 8 ; z++){
					cin>> k ;ptos[y][z] = k;
				}
			}
			int ctab = 0;int max = 0;
			for(int y = 0;  y <92; y++){
				ctab = 0;
				for(int z = 0;z < 8; z++){
					ctab += ptos[m[y][z]][z];
				}	
				if(max < ctab) max = ctab;
			}
			printf("%5d\n",max);
			//if(veces != 0)
			
		}
		return 0;
	}