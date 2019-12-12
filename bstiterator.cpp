class BSTIterator {
    stack<TreeNode *> myStack;
public:
    BSTIterator(TreeNode *root) {
        pushAll(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !myStack.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode *tmpNode = myStack.top();
        myStack.pop();
        pushAll(tmpNode->right);
        return tmpNode->val;
    }

private:
    void pushAll(TreeNode *node) {
        for (; node != NULL; myStack.push(node), node = node->left);
    }
};





/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void find_left(TreeNode* root){
    TreeNode* p= root;
    while(p!=NULL){
        st.push(p);
        p=p->left;
    }
}

BSTIterator::BSTIterator(TreeNode *root) {
     stack<TreeNode*> st;
     find_left(root);
   }

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
 return (!st.empty());
}

/** @return the next smallest number */
int BSTIterator::next() {
     TreeNode* temp=st.top();st.pop();
     if(temp->right!=NULL){
         find_left(temp->right);
     }
     return temp->val;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
