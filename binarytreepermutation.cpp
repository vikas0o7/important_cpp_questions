 vector<TreeNode*> genTrees(int start,int end)
    {
        vector<TreeNode*> res;
        if(start>end)
        {
            res.push_back(NULL);
            return res;
        }
        else if(start==end)
        {
            res.push_back(new TreeNode(start));
            return res;
        }
        vector<TreeNode*>left,right;
        for(int i=start;i<=end;i++)
        {
            left = genTrees(start,i-1);
            right = genTrees(i+1,end);
            for (auto lnode : left)
            {
                for(auto rnode : right)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = lnode;
                    root->right = rnode;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};