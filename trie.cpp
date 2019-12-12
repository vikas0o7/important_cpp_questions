#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;

class Trie{
public:
	bool isendofword;
	unordered_map<char,Trie*> map;
};
Trie* newTrie(){
	Trie* temp= new Trie;
	temp->isendofword=false;
	return temp;
}
void insert(Trie* &root, string s){
	if(root==NULL) root=newTrie();
	Trie* temp=root;
	for(int i=0;i<s.length();i++){
		if(temp->map.find(s[i])==(temp->map).end()){
			temp->map[s[i]]= newTrie();
			temp= temp->map[s[i]]; //map[s[i]] will be trie*; see the struct;
		}
	}
	temp->isendofword=true; // temp will be at last letter of string s;
}
bool search(Trie* &root, string s){
	if(root==NULL) return false;
	Trie* temp=root;
	for(int i=0;i<s.length();i++){
		if(temp->map.find(s[i])== temp->map.end()) return false;
		temp= temp->map[s[i]];
	}
	return true;
}
int main() 
{ 
	Trie* root = nullptr; 

	insert(root, "geeks"); 
	cout << search(root, "geeks") << " "; 

	insert(root, "for"); 
	cout << search(root, "for") << " "; 

	cout << search(root, "geekk") << " "; 

	insert(root, "gee"); 
	cout << search(root, "gee") << " "; 

	insert(root, "science"); 
	cout << search(root, "sciences") << endl; 

	return 0; 
} 
