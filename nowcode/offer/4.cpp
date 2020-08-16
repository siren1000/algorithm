#include <iostream>
#include <vector>
using namespace std;

int main()
{
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x)://构造函数
        val(x),left(NULL),right(NULL){}
};

class Solution
{
public:
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in){

        int len=in.size();
        if(len==0)
            return NULL;

        vector<int> left_pre,right_pre,left_in,right_in;

        TreeNode* head=new TreeNode(pre[0]);
        int gen=0;
        for(int i=0;i<len;i++)
        {
            if(in[i]==pre[0])
            {
                gen=i;
                break;
            }
        }

        for(int i=0;i<gen;i++)
        {
            left_in.push_back(in[i]);
            left_pre.push_back(pre[i+1]);
        }
        for(int i=gen+1;i<len;i++)
        {
            right_in.push_back(in[i]);
            right_pre.push_back(pre[i]);
        }

        head->left=reConstructBinaryTree(left_pre,left_in);
        head->right=reConstructBinaryTree(right_pre,right_in);

        return head;
    }
};

}

