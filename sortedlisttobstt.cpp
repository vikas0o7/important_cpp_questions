TreeNode *newNode(int data)
{
    TreeNode *temp;
    //cout<<"pass"<<endl;
    temp = (TreeNode *)malloc(sizeof(TreeNode));
    //cout<<"pass1"<<endl;
    temp->val = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}



TreeNode* fn(vector<int> &v, int start, int end){
    if(start>end) return NULL;
    if(start==end) return newNode(v[start]);
    int mid= (start+end)/2;
    TreeNode* root= newNode(v[mid]);
    root->left= fn(v, start, mid-1);
    root->right=fn(v,mid+1, end);
    return root;
} 
 
TreeNode* Solution::sortedListToBST(ListNode* A) {
    vector<int> v;
    ListNode* temp=A;
    while(temp!=NULL){
        v.push_back(temp->val);
        temp=temp->next;
    }
    int n= v.size();
    TreeNode* root;
    root=fn(v, 0, n-1);
    return root;
}