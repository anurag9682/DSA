class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
      vector<vector<int>> graph(n);
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> visited(n, false);
        return dfs(graph, visited, source, destination);
    }
    
    bool dfs(vector<vector<int>>& graph, vector<bool>& visited, int node, int destination) {
        if (node == destination)
            return true;
        
        visited[node] = true;
        
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                if (dfs(graph, visited, neighbor, destination))
                    return true;
            }
        }
        
        return false;  
    }
};