//resuelto
#include<iostream>
#include<cmath>
#include<cstring>
#include<stdio.h>
using namespace std;
int cont[2];
int padre[1001];
int padrote(int nodo){
    if(padre[nodo] == nodo)
        return nodo;
    return padrote(padre[nodo]);
}
void unir(int x,int y){
    x = padrote(x);
    y = padrote(y);
    if(x == y) return;
    if(rand()& 1)
        padre[x] = y;
    else
        padre[y] = x;
}
int main(){
    int casos,n,x,y;
    char op;
    string h = "";
    cin>>casos;
    while(casos--){
        scanf("\n%d\n",&n);
        memset(cont,0,sizeof(cont));
        for(int z = 1;z<=n;z++)
            padre[z] = z;
        while(n){
            if(!getline(cin,h) || h.empty())break;
            sscanf(h.c_str(),"%c %d %d",&op,&x,&y);
            if(op == 'c')
                unir(x,y);
            else
                if((padrote(x) == padrote(y)))cont[0]++;else cont[1]++;
        }
        cout<<cont[0]<<","<<cont[1]<<"\n";
        if(casos  != 0)
            cout<<"\n";
    }
    return 0;
}