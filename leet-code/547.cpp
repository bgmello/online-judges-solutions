void bfs(int node, vector<bool>& visited, vector<vector<int>> isConnected){
    if(visited[node])return;

    visited[node] = true;

    for(int i=0;i<isConnected.size();i++){
        if(isConnected[node][i]==1)bfs(i, visited, isConnected);
    }
}

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
       int numProvinces = 0;
       vector<bool> visited(isConnected.size(), false);

       for(int i=0;i<isConnected.size();i++){
        if(!visited[i])bfs(i, visited, isConnected), numProvinces++;
       }

       return numProvinces; 
    }
};
