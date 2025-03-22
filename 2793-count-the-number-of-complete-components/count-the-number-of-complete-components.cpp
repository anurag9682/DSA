class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<uint64_t> g(n);
        for (int v{}; v < n; ++v)
            g[v] = 1ull << v;

        for (const auto& e : edges)
            g[e[0]] |= 1ull << e[1],
            g[e[1]] |= 1ull << e[0];

        map<uint64_t, int> c;
        for (auto gv : g)
            ++c[gv];

        int ans{};
        for (const auto& [k, v] : c)
            ans += popcount(k) == v;
        return ans;
        
    }
};