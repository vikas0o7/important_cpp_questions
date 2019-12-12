#include <iostream>
#include <stdio.h>
#include <malloc.h>
using namespace std;
struct trie
{
struct trie * child[26];
int priority;
bool endMark;
}* root;
void newNode(struct trie * temp,char str[],int value){
	for(int i=0;str[i]!='\0';i++){
		if(temp->child[str[i]-'a']==NULL){
			temp->child[str[i]-'a'] = (struct trie *)malloc(sizeof(struct trie));
				for(int j=0;j<26;j++){
					(temp->child[str[i]-'a'])->child[j]=NULL;
				}
				(temp->child[str[i]-'a'])->priority=value;
				(temp->child[str[i]-'a'])->endMark = false;
			}
		else{
			if(value>(temp->child[str[i]-'a'])->priority){
				(temp->child[str[i]-'a'])->priority = value;
			}
		}
	temp = temp->child[str[i]-'a'];
	}
temp->endMark=true;
}


int searchSuggestion(struct trie * temp,char str[]){
	bool flag =true;
	for(int i=0;str[i]!='\0';i++){
		if(temp->child[str[i]-'a']==NULL){
			flag = false;
			break;
		}
	temp = temp->child[str[i]-'a'];
	}
	if(flag == false){
		return -1;
	}
	else{
	return temp->priority;
	}
}
int main()
{
int n,q;
char strin[1000001]={'\0'};
int value;
while(scanf("%d %d",&n,&q)==2)
{
root=(struct trie *) malloc(sizeof(struct trie));
for(int k=0;k<26;k++)
{
root->child[k] = NULL;
}
root->endMark = false;
for(int i=0;i<n;i++)
{
cin>>strin>>value;
newNode(root,strin,value);
}
for(int i=0;i<q;i++)
{
cin>>strin;

if(searchSuggestion(root,strin)==-1)
{
cout<<-1<<endl;
}
else
{
cout<<searchSuggestion(root,strin)<<endl;
}
}
}
return 0;
}