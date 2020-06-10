#include<algorithm>
#include<iostream>

using namespace std;
int a , b;
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
	int veces;
	cin>>veces;
	int p[8] = {0,1,2,3,4,5,6,7};
	while(veces--){
		cin.ignore();
		cin>>a>>b;a--;b--;
		int cta = 0;

		printf("SOLN       COLUMN\n");
 		printf(" #      1 2 3 4 5 6 7 8\n");
 		cout<<"\n";
		do{
			if(p[b] == a){
				if(func(p)){
					cta++;
 					printf("%2d      %d",cta,p[0] + 1);
					for(int y = 1; y <8  ; y++)cout<<" "<<p[y] + 1;
					cout<<"\n";
				}
			}	
			
		}while(next_permutation(p, p + 8));
		if(veces != 0)	
			cout<<"\n";
	}
	return 0;
}