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
public:
        vector<vector<int> > Print(TreeNode* pRoot) {
            vector<vector<int> > ans;
            if(pRoot ==nullptr){
                return ans;
            }
            deque<TreeNode *> que;
            que.push_back(pRoot);
            while(!que.empty()){
                int size=que.size();
                vector<int> temp;
                for(int i =0;i<size;i++){
                    TreeNode* node=que.front();
                    que.pop_front();
                    temp.push_back(node->val);
                    if(node->left!=nullptr){
                        que.push_back(node->left);
                    }
                    if(node->right!=nullptr){
                        que.push_back(node->right);
                    }
                }
                ans.push_back(temp);
            }
            return ans;
        }
    
};
