#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> ptos[200];
int color[200];
int cont[2];
bool b_check(int nodo){
    queue<int>chec;
    color[nodo] = 0;
    chec.push(nodo);
    while(!chec.empty()){
        int actual = chec.front();chec.pop();
        for(auto &x:ptos[actual]){
            if(color[x] == -1){
                color[x] = 1 - color[actual];
                chec.push(x);
                cont[color[x]]++;
            }else{
                if(color[x] == color[actual]){
                    return false;
                }
            }    
        }  
    }
    return true;
}
int main(){
    int test,e,v,a,b;
    bool ban = true;
    cin>>test;
    while(test--){
        cin>>v>>e;
        memset(color,-1,sizeof(color));
        memset(cont,0,sizeof(cont));
        for(int y = 0;y<e;y++){
            cin>>a>>b;
            ptos[a].push_back(b);
            ptos[b].push_back(a);
        }
        for(int j = 0;j< v;j++){
            if(color[j] == -1){
                if(b_checK(j)){
                    ban = false;
                    break;
                }    
            }  
        }        
        if(con)
    } 
}
