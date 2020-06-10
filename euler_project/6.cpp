#include<iostream>
    #include<cmath>

    using namespace std;
    #define ll unsigned long long 
    int main(){
        int veces;
    ll n;
        cin>>veces;
        while(veces--){
            cin>>n;
            ll sq = (n*(n + 1)*(2*n + 1))/6;
            ll all = (n*(n + 1))/2;
            //cout<<sq<<" "<<all<<" \n";
            ll tot = all*all - sq;
            cout<<tot<<"\n";
        }
    }	