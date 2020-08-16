#include <iostream>
#include <stack>

using namespace std;

int main()
{
    struct TreeNode{
        int val;
        struct TreeNode* left;
        struct TreeNode* right;
        TreeNode(int x):
            val(x),left(NULL),right(NULL){}
    };

    class Solution
    {
    public:
        bool HasSubtree(TreeNode* pRoot1,TreeNode* pRoot2)
        {
            stack<TreeNode*> tree1;
            stack<TreeNode*> tree2;

            TreeNode* p1=pRoot1;
            TreeNode* p2=pRoot2;

            


        }
    };
}

