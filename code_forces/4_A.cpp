#include<iostream>

using namespace std;

int main(){
    int a, ban = 1;
    cin>>a;
    for(int x = 2 ; x <= a/2 ; x += 2){
         if( ((a - x) % 2) ==  0 )  ban = 0;
    }
    if(ban == 0) cout<<"YES";
    else cout<<"NO";
}
