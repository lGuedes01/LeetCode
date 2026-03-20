/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    bool b = true;

    if(p == NULL && q == NULL)
        return true;
    else if(p == NULL && q != NULL || p != NULL && q == NULL)
        return false;

    if(b){
        b = isSameTree(p->left, q->left);
    }
    if(b){
        b = isSameTree(p->right, q->right);
    }

    if(p->val != q->val)
        b = false;
    return b;
}
