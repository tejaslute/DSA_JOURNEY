#include <iostream>
#include <vector>

using namespace std;

void dfsRecursive(vector<vector<int>>& adjList, int vertex, vector<bool>& visited) {
    cout << vertex << " ";
    visited[vertex] = true;

    for (int neighbor : adjList[vertex]) {
        if (!visited[neighbor]) {
            dfsRecursive(adjList, neighbor, visited);
        }
    }
}

void dfs(vector<vector<int>>& adjList, int start, vector<bool>& visited) {
    dfsRecursive(adjList, start, visited);
}

int main() {
    cout << "Enter the number of nodes: ";
    int n;
    cin >> n;

    cout << "Enter the number of edges: ";
    int m;
    cin >> m;

    vector<vector<int>> adjList(n + 1);

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);  // Assuming an undirected graph
    }

    vector<bool> visited(n + 1, false);

    cout << "DFS Traversal starting from node 1: ";
    dfs(adjList, 1, visited);

    return 0;
}





class Solution {
  private:
    void dfs(int node, vector<int> adj[], vector<bool>&visited, vector<int>&ans){
        visited[node] = true;
        ans.push_back(node);
        
        for(int child:adj[node]){
            if(!visited[child]) dfs(child, adj, visited, ans);
        }
    }
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int node = 0;
        vector<int>ans;
        vector<bool>visited(V,false);
        
        dfs(node, adj, visited, ans);
        
        return ans;
    }
};
