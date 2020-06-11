#include<iostream>

using namespace std;
#define ll long long 
ll  cyc(ll a ){
    ll cta = 0;
    while ( a != 1){
        if( a &  1 )
            a = a*3 + 1;
        else   
            a /= 2;
        cta++; 
    }
return cta;
}
int main(){
   int a , b; 
    while(cin>>a>>b){ 
        int max = 0;
        int aux = 0;
        int x = a, y = b;
        if ( a > b ){
            aux = a;
            a = b;
            b = aux;
        }

        for(int y = a ;  y <= b ;y++){
            ll  actual = cyc(y);
            if( actual > max)
                max =actual;
        }
        printf("%d %d %d",x,y,max + 1);
        cout<<"\n";

    }
}

