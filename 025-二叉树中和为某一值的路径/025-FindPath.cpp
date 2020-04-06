/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(root == nullptr)
        {
            return ans;
        }
        vector<int> path;
        find(root, expectNumber, path, 0);

        return ans;
    }
    void find(TreeNode* root,int expectNumber,vector<int> path,int cur){
        cur+=root->val;
        path.push_back(root->val);
        if (cur==expectNumber && root->left==nullptr && root->right==nullptr){
            ans.push_back(path);
            return ;
        }
        if(root->left != nullptr)
        {
            find(root->left, expectNumber, path, cur);
        }
        if(root->right != nullptr)
        {
            find(root->right, expectNumber, path, cur);
        }
    }
};
