truct Node
    {
        int count;
        Node *ch[26];
        Node()
        {
            count = 0;
            for(int i=0;i<26;i++)
            ch[i] = NULL;
        }
    };

void insert(Node *trie, string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(!trie->ch[s[i] - 'a'])
        trie->ch[s[i]-'a'] = new  Node();
       trie = trie->ch[s[i] - 'a'];
       (trie->count)++;
    }
}

int answer(Node *trie, string s)
{
    for(int i=0;i<s.size();i++)
    {
        trie = trie->ch[s[i]-'a'];
        if(trie->count == 1)
        return i;
    }
    return s.size();
}
vector<string> Solution::prefix(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int  i;
    Node *trie = new Node();
    for(i=0; i<A.size(); i++)
    insert(trie, A[i]);
    vector<string> ans;
    ans.clear();
    for(i=0;i<A.size();i++)
    {
        int j = answer(trie, A[i]);
        //cout<<j<<":";
        ans.push_back(A[i].substr(0, j+1));
    }
   return ans;
}
