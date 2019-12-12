/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool fn(TreeNode *root, int &maxh, int &minh){
     if(root==NULL){
         maxh=0;minh=0;
         return true;
     }
     int lmxh,rmxh,lmnh,rmnh;
     if (fn(root->left, lmxh,lmnh)==false) return false;
     if(fn(root->right,rmxh,lmxh)==false) return false;
     maxh=max(lmxh,rmxh)+1;
     minh=min(lmnh,rmnh)+1;
     if(maxh-minh<=1) return true;
     else return false;
 }
 
int Solution::isBalanced(TreeNode* A) {
    int maxh=0,minh=0;
    return fn(A, maxh,minh);
}
