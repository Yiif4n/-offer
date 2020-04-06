/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
    unsigned int count = 0;
public:
    TreeNode* KthNode(TreeNode* root, int K)
    {
        if(root == NULL)
        {
            return NULL;
        }
        TreeNode *ret = NULL;


        if((ret = KthNode(root->left, K)) != NULL)
        {
            return ret;
        }
        ++count;
        if(count == K)
        {
            return root;
        }
        
        if((ret = KthNode(root->right, K)) != NULL)
        {
            return ret;
        }
        return NULL;
    }

    
};
