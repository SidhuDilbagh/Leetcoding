#define inf 3001
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *node=NULL;
        if(inorder.size()){
        int val=inf,n=preorder.size();
        for(int i=0;i<n;i++){
            if(preorder[i]<inf){
                val=preorder[i];
                preorder[i]=inf;
                break;
            }
        }
        // cout<<endl<<val<<" ";
        if(val<inf){
            int i=0;
            while(inorder[i]==inf) i++;
            vector<int> l;
            while(i<n && inorder[i]!=val){
                l.push_back(inorder[i]);
                inorder[i]=inf;
                i++;
            }
            inorder[i]=inf;
            i++;
            // cout<<"l";for(auto x:l) cout<<x<<" ";
            vector<int> r;
            n=inorder.size();
            while(i<n && inorder[i]!=inf){
                r.push_back(inorder[i]);
                inorder[i]=inf;
                i++;
            }
            // cout<<"r";for(auto x:r) cout<<x<<" ";
            node=new TreeNode(val,buildTree(preorder,l),buildTree(preorder,r));
        }}
        return node;
    }
};
