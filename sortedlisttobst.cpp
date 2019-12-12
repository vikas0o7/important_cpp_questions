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

TreeNode *cal(vector<int> &v,int start,int end)
{
    if(start>end)
        return NULL;
    if(start == end)
        return newNode(v[start]);
    int mid = (start+end)/2;
    TreeNode *head = newNode(v[mid]);
    head->left = cal(v,start,mid-1);
    head->right = cal(v,mid+1,end);
    return head;
}
 
TreeNode* Solution::sortedListToBST(ListNode* A) {
    vector<int> v;
    ListNode *temp = A;
    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }
    int size = v.size();
    TreeNode *head;
    head = cal(v,0,size-1);
    return head;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}