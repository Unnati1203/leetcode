/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            return{};
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>res;
        bool lefttoright=false;
        while(!q.empty()){
             int lvlsize=q.size();
             vector<int>temp(lvlsize);
             
             int left=0;
             int right=lvlsize-1;
             while(lvlsize--){
                TreeNode* p =q.front();
                q.pop();
                if(lefttoright==false){
                    temp[left++]= p->val;
                }
                if(lefttoright==true){
                    temp[right--]=p->val;
                }
                if(p->left){
                    q.push(p->left);
                }
                if(p->right){
                    q.push(p->right);
                }
             }
             lefttoright=1-lefttoright;
             res.push_back(temp);
             

        }
        return res;
    }
};