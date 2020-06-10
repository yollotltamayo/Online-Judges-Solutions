#include<iostream>

using namespace std;

int main(){
	int n,ban = 0;
	cin>>n;

	while(n--){
		if(ban){
			cout<<"I love";
			ban = 0;
		}else{
			cout<<"I hate";
			ban = 1;
		}
		if(n != 0	)
			cout<<" that ";
	}
	cout<<" it";


}