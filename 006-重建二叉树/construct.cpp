/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(vin.size()==0){
            return NULL;
        }
        int val=pre[0];
        TreeNode * T= new TreeNode(val);
        int idx=0;
        for(int i =0;i<vin.size();i++){
            if(val==vin[i]){
                idx=i;
            }
        }
        vector<int> leftpre(idx),leftvin(idx);
        vector<int> rightpre(vin.size()-idx-1),rightvin(vin.size()-idx-1);
        for(int i =0;i<idx;i++){
            leftvin[i]=vin[i];
            leftpre[i] = pre[i + 1];
        }
        for(int i =idx+1;i<vin.size();i++){
            rightvin[i - idx - 1]=vin[i];
            rightpre[i - idx - 1] = pre[i];
        }
        T->left=reConstructBinaryTree(leftpre,leftvin);
        T->right=reConstructBinaryTree(rightpre,rightvin);
        return T;
    }
};
