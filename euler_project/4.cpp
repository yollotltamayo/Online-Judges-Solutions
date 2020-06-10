#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
bool pal(ll a){
 string k = to_string(a);
for(int y = 0; y < k.length(); y++)
if(k[y] != k[k.length() - 1- y])
return false;
return true;
}
int main(){
 	int veces;
	ll a , b ,c;
	vector<ll>nums;
	for(int y = 100; y <= 999; y++)
		for(int z = y ; z <= 999;z++)
			if(pal(y * z )){
	  			nums.push_back(y * z);			
			}
	cin>>veces;
	int cta = 0;
	sort(nums.begin(), nums.end());
	cout<<nums[nums.size()- 1];
	for(int y = 0; y < veces;  y++){
		cin>>a;
		cta = 0;
		while(nums[cta] < a)
			cta++;
		//cout<<nums[cta - 1]<<"\n";
	}
}