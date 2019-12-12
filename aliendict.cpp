void top_sort_util(int u, vector<int> adj[], bool vis[], stack<int> &st)
{
    vis[u] = 1;
    for (auto &i : adj[u])
        if (!vis[i])
            top_sort_util(i, adj, vis, st);
    st.push(u);
}

string top_sort(int n, vector<int> adj[])
{
    string a;
    bool vis[n];
    stack<int> st;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++)
        if (!vis[i])
            top_sort_util(i, adj, vis, st);

    //i = 0;
    while (!st.empty())
    {
        a += 'a' + st.top();
        st.pop();
        //i++;
    }
    return a;
}

string printOrder(string w[], int n, int k)
{
    vector<int> v[k];
    //int *a;
    for (int i = 0; i < n - 1; i++)
    {
       string word1= w[i]; string word2= w[i+1];
        for (int j = 0; j < min(word1.length(), word2.length()); j++)
        {
            if (word1[j] != word2[j])
            {
                v[word1[j] - 'a'].push_back(word2[j] - 'a');
                break;
            }
        }
    }
    return top_sort(k, v);
}