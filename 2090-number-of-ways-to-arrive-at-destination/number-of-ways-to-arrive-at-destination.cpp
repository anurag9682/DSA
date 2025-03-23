class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        int mod=1e9+7;
        vector<vector<pair<int,int>>>adj(n);
        for(auto r:roads){
            adj[r[0]].push_back({r[1],r[2]});
            adj[r[1]].push_back({r[0],r[2]});
        }
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<>>pq;
        vector<long long>shortesttime(n,LLONG_MAX);
        vector<int>cnt(n,0);
        shortesttime[0]=0;
        cnt[0]=1;
        pq.push({0,0});
        while(!pq.empty()){
            long long time=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(time>shortesttime[node])continue;
            for(auto [nbr,rtime]:adj[node]){
                if(time+rtime<shortesttime[nbr]){
                    shortesttime[nbr]=time+rtime;
                    cnt[nbr]=cnt[node];
                    pq.push({shortesttime[nbr],nbr});
                }
                else if(time+rtime==shortesttime[nbr]){
                    cnt[nbr]=(cnt[nbr]+cnt[node])%mod;
                }
            }
        }
        return cnt[n-1];
        
    }
};