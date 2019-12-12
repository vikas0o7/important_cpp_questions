void dijkstra(vector<vector<int>> g, int src, int V)
{
  //std::set<int> final; 
  std :: priority_queue < int ,std :: vector <int  > , std :: greater < int> > pq;
  pq.push(src);
  int dis[V];
  dis[src]=0;
  for(int i=0;i<V;i++){
      if(i!=src)dis[i]=100000;
  }
  while(!pq.empty()){
      auto top=pq.top();
      pq.pop();
      //final.insert(top);
      //vector<int>::iterator itr;
    for(int j=0;j<V;j++){
      if(dist[j]>dist[top]+adj[top][j]){
        dist[j]=dist[top]+adj[top][j];
        pq.push(top);
      }
    }
  }
  for(int i=0;i<V;i++)cout<<dis[i]<<" ";
  
}