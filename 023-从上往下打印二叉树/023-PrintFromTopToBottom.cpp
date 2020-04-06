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
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr){
            return ans;
        }
        deque<TreeNode*> q;
        q.push_back(root);
        while (!q.empty()){
            TreeNode* node=q[0];
            ans.push_back(node->val);
            q.pop_front();
            if (node->left !=nullptr){
                q.push_back(node->left);
            }
            if (node->right!=nullptr){
                q.push_back(node->right);
            }
        }
        return ans;
    }
};
