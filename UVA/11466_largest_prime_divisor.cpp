    #include<iostream>
    #include<bitset>
    #include<vector>
    #include<queue>
    #include<cmath>
    #define maxn 10000100
    #define ll long long
    using namespace std;
    bitset<maxn>marc;
    vector<ll>primos;
    void sieve(){
        marc.set();
        primos.push_back(2);
        marc[2] = 1;
        marc[0] = marc[1] = 0;
        for(ll y = 4;y <maxn;y+=2)
            marc[y] = 0;
        for(ll y = 3;y < maxn;y+=2)
            if(marc[y]){
                primos.push_back(y);
                for(ll u = y*y;u <maxn;u += y)
                    marc[u] = 0;
            }
        
    }
    ll numPF(ll N) {
        ll PF_idx = 0, PF = primos[PF_idx], ans = 0,may = 0,factors = 0;
        N = abs(N);
        while (PF * PF <= N){
            bool first = true;
            while (N % PF == 0){
                N /= PF; 
            if (first){
                ans++;
                may = PF;
                first = false;
            }
        }
            PF = primos[++PF_idx];
        }

        if (N != 1){may = N ; ans++;} 
        if (ans < 2)return -1;
        return may;
    }
    int main(){
        ll casos;
        sieve();
        cin>>casos;
        while(casos != 0){
            if(casos == 1 )
                cout<<"-1\n";
            else
                cout<<numPF(casos)<<"\n";
            cin>>casos;
        }
        return 0;
    }