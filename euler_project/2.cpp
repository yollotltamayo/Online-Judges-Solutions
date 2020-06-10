#include<iostream>
#include<cstring>
using namespace std;
#define ull unsigned long long 
#define maxn 4*1e16
int main(){
	int veces;
	ull fib[100] ;

	ull a, b ;
	 cin>>veces;
	 while(veces--)	{
	 	memset(fib,0, sizeof(fib));
	 	ull n = 0,sum = 0;
	 	cin>>a;
	 	fib[0] = fib[1] = 1;
	 	for(int y = 2; sum<= a ; y++){
	 		fib[y] = fib[y - 1] + fib[y - 2];
	 		if(fib[y]%2 == 0) {
	 			sum += fib[y];
	 		if(fib[y] < a)
	 			n += fib[y];
	 		}
	 	}
	 	cout<<n<<"\n";
	 }
}