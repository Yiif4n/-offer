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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree ==nullptr){
            return nullptr;
        }
        TreeNode* last=cvt(pRootOfTree,nullptr);
        while(last->left!=nullptr){
            last=last->left;
        }
        return last;
    }
    TreeNode* cvt(TreeNode* root,TreeNode* lastnode){
        if (root->left!=nullptr){
            lastnode=cvt(root->left,lastnode);
        }
        if(lastnode!=nullptr){
            lastnode->right=root;
            root->left=lastnode;
        }
        lastnode=root;
        if (root->right!=nullptr){
            lastnode=cvt(root->right,lastnode);
        }
        return lastnode;
    }
};
