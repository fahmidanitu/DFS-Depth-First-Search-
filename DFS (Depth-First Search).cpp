#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>adj[], bool visit[], int src, int target) {
 if (!visit[src]) {
 visit[src] = 1;
 for (int i=0;i<adj[src].size();i++) {
 dfs(adj, visit, adj[src][i], target);
 }
 }
 return;
}
int main()
{
 int node, edge;
 cout<<"Enter number of nodes = ";
 cin>>node;
 cout<<"Enter number of edges = ";
 cin>>edge;
 bool visit[node+1];
 int sn = sizeof(visit)/sizeof(visit[0]);
 for (int i=0;i<sn;i++) visit[i] = 0;
 vector<int>adj[node+1];
 cout<<"Enter the edges = " << endl;
 for(int i=0; i<edge; i++)
 {
 int a,b;
 cin>>a>>b;
 adj[a].push_back(b);
 adj[b].push_back(a);
 }
 int src, target;
 cout<<"Enter the source and target nodes = " << endl;
 cin >> src >> target;
 dfs(adj, visit, src, target);
 if (visit[target] == 1) cout << "Target found";
 else cout << "Target not found";
}

