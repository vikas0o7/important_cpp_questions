#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;

struct trie{
	bool isendofword;
	int value;
	struct trie *children[26];
};
struct trie* x(void){
	struct trie *node = new trie;
	node->isendofword=false;
	node->value=0;
	for(int i=0;i<26;i++){
		node->children[i]=NULL;
	}
	return node;
}

void insert(trie* root,  string key, int num){
	struct trie *temp= root;
	for(int i=0;i<key.length();i++){
		//cout<<key[i];
		int index=key[i]-'a';
		if(!temp->children[index]){
			temp->children[index]= x();
			temp->children[index]->value= num;
			temp->children[index]->isendofword=false;
		}
		else {temp->children[index]->value=max(num, temp->children[index]->value);
		}
		temp=temp->children[index];
	}
	temp->isendofword=true;
	//cout<<endl;
}

int search(struct trie* temp , string key){
	bool flag=true;
	for(int i=0;i<key.length();i++){
		int index= key[i]-'a';
		if(!temp->children[index]){
			flag=false; break;
		}
		temp=temp->children[index];
		//temp->value=max(ans,temp->value);
	}
	//cout<<temp->value<<endl;
	if(flag==false) return -1;
	else return temp->value;
}


int main()
{
	io;
	//trie *root= nullptr;
	int n,q,p; string s,t;
	cin>>n>>q;
	trie *root= x();
	for(int i=1;i<=n;i++){
		cin>>s>>p;
		insert(root,s,p);
	}
	while(q--){
		cin>>t;
		cout<<search(root,t)<<endl;
		}
	return 0;
}	