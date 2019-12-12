
/*  Function to find the number of strongly connected components
*   using Kosaraju's algorithm
*   V: number of vertices
*   adj[]: array of vectors to represent graph
*/
void fillorder(int v,bool vis[],stack<int>&s,vector<int>adj[]){
    vis[v]=true;
    for(auto i:adj[v])
        if(!vis[i])
            fillorder(i,vis,s,adj);
    s.push(v);
}
void dfs(int v,bool vis[],vector<int>tadj[]){
    vis[v]=true;
    for(auto i:tadj[v])
        if(!vis[i])
            dfs(i,vis,tadj);
}
int kosaraju(int V, vector<int> adj[])
{
   stack<int>stack;
   bool vis[V]; 
   memset(vis,false,sizeof(vis));
   
   for(int i=0;i<V;i++)
    if(!vis[i])
        fillorder(i,vis,stack,adj);
    
   vector<int>tadj[V]; //transpose of adjacency list;
   for(int i=0;i<V;i++)
    for(auto j:adj[i])
      tadj[j].push_back(i);

   memset(vis,false,sizeof(vis));  
   int count=0;
   while(!stack.empty()){
       int v=stack.top();
       stack.pop();
       if(!vis[v]){
           count++;
           dfs(v,vis,tadj);
       }
   }
   return count;
   
}