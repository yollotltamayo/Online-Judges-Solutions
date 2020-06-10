#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
map<string,int>ida;
map<int,string>vuelta;
vector<int>lista[101];
vector<int>topological;
vector<int>necesito(101,0);
void toposort( int n)
{
    priority_queue<int,vector<int>, greater<int>>pq;

    for( int i = 0; i < n; ++i )
        if( necesito[ i ] == 0 )
            pq.push( i );

    while( !pq.empty() )
    {
        int u = pq.top(); pq.pop();
        topological.push_back( u );
        for( int  i = 0; i < lista[u].size(); ++i )
        {
            int v = lista[ u ][ i ];
            necesito[ v ]--;
            if( necesito[ v ] == 0 )
                pq.push( v );
        }
    }
}
int main(){
    int casos,ver,cta = 1;
    string a,b;
    while(scanf("%d",&ver) == 1){
        for(int y = 0;y< ver;y++){
            cin>>a;
            ida[a] = y;
            vuelta[y] = a;
        }     
        cin>>casos;   
        
        for(int y = 0;y< casos;y++){
            cin>>a>>b;
            lista[ida[a]].push_back(ida[b]);
            necesito[ida[b]]++;
        }
        toposort(ver);
        cout<<"Case #"<<cta<<": Dilbert should drink beverages in this order: ";
        for(int y = 0;y<topological.size();y++){
            cout<<vuelta[topological[y]];
            if(y  != topological.size()-1)
                cout<<" ";
        }
        vuelta.clear();ida.clear();topological.clear();necesito.clear();
        for(int y = 0;y< ver;y++)lista[y].clear();
        cout<<".\n\n";
        cta++;
    }
    return 0;    
}

