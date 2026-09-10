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
    int total(TreeNode*temp,unordered_map<TreeNode*,int>&sum){
        int leftsum=0;
        int rightsum=0;
        if(temp->left!=NULL){
            leftsum=total(temp->left,sum);
        }
        if(temp->right!=NULL){
            rightsum=total(temp->right,sum);
        }

        int totalsum=leftsum+rightsum+temp->val;
        sum[temp]=totalsum;
        return totalsum;
    }
    int count(TreeNode*temp,unordered_map<TreeNode*,int>&cnt){
        int leftcnt=0;
        int rightcnt=0;
        if(temp->left!=NULL){
            leftcnt=count(temp->left,cnt);
        }
        if(temp->right!=NULL){
            rightcnt=count(temp->right,cnt);
        }

        int totalcnt=leftcnt+rightcnt+1;
        cnt[temp]=totalcnt;
        return totalcnt;
    }
    int avg(TreeNode*temp,unordered_map<TreeNode*,int>&sum,unordered_map<TreeNode*,int>&cnt){
        int leftcnt=0;
        int rightcnt=0;

        if(temp->left!=NULL){
            leftcnt=avg(temp->left,sum,cnt);
        }
        if(temp->right!=NULL){
            rightcnt=avg(temp->right,sum,cnt);
        }

        int mean=sum[temp]/cnt[temp];
        int ans=leftcnt+rightcnt;

        if(mean==temp->val){
            ans++;
        }

        return ans;
    }
    int averageOfSubtree(TreeNode* root) {
        unordered_map<TreeNode*,int> sum;
        unordered_map<TreeNode*,int>cnt;
        int sums=total(root,sum);
        int cnts=count(root,cnt);

        return avg(root,sum,cnt);

    }
};