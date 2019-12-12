struct trie{
    bool isend;
    struct trie* child[26];
};
struct trie* newnode(void){
    struct trie* node= new trie(); //bracket addedlater
    node->isend=false;
    for(int i=0;i<26;i++){
        node->child[i]=NULL;
    }
    return node;
}

void insert(trie *root, string s){
    struct trie* temp=root;
    for(int i=0;i<s.length();i++){
        int index= s[i]-'a';
        if(!temp->child[index]){
            temp->child[index]= newnode();
        }
        temp=temp->child[index];
    }
    temp->isend=true;
}
void convert(string &str){
    //Convert _ to spaces
    for(int i=0; i<str.size(); i++)    if(str[i]=='_')    str[i]=' ';
    return;
}
// int search(struct trie *root, string s){
//     trie* temp=root;
//     for(int i=0;i<s.length();i++){
//         int index= s[i]-'a';
//         if(!temp->child[index]) return 0;
//     }
//     if(temp->isend) return 1;
// }
bool search(trie* root, const string& str) 
{ 
    /*return false if Trie is empty*/
    if (root == nullptr) 
        return false; 

    trie* temp = root; 
    for (int i = 0; i < str.length(); i++) { 

        /* go to next node*/
        temp = temp->child[str[i]-'a']; 

        if (temp == nullptr) 
            return false; 
    } 

    return (temp && temp->isend); 
} 


bool comp(pair<int,int> a, pair<int,int> b){
    return a.first> b.first;
    return a.second<b.second;
    return false;
}

vector<int> Solution::solve(string A, vector<string> &B) {
    vector<pair<int,int> > v; vector<int> ans;
    struct trie* root=newnode();
    for(int i=0;i<A.length();i++){
        string s;
        while(A[i]!='_' && i<A.length()){
            s+=A[i];
            i++;
        }
       
        insert(root,s);
    }
    for(int i=0;i<B.size();i++){
        string t=B[i]; int cnt=0;
        for(int j=0;j<t.length();j++){
            string str;
            while(t[j]!='_' && j<t.length()){
                str+=t[j];
                j++;
            }
           if(search(root,str))++cnt;;
           //cout<<str<<endl;
        }
       // cout<<cnt<<endl;
         v.push_back({cnt,i});
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
        ans.push_back(v[i].second);
    }
    return ans;
}
