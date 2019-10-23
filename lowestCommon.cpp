#include <iostream>
#include <stdio.h>

using namespace std;

struct Treenode
{
  int val;
  Treenode *left;
  Treenode *right;
  Treenode(int x) : val(x), left(NULL), right(NULL) {}
};

class solution
{
public:
  Treenode *insertBST(Treenode *root, int val)
  {
    Treenode *temp;
    temp = new Treenode(val);

    if (root == NULL)
    {
      return (root);
    }
    if (val < root->val)
    {
      if (root->left == NULL)
      {
        root->left = temp;
      }
      else
      {
        {
          insertBST(root->left, val);
        }
      }
    }
    else
    {
      if (root->right == NULL)
      {
        root->right = temp;
      }
      else
      {
        insertBST(root->right, val);
      }
    }
    return (root);
  }

  Treenode *lowestCommonAncestor(Treenode *root, Treenode *p, Treenode *q)
  {
    if (root->left == p && root->right == q)
    {
      return (root);
    }

    if (!root)
      return (NULL);

    Treenode *temp;
    temp = lowestCommonAncestor(root->left, p, q);
    if (temp == NULL)
    {
      temp = lowestCommonAncestor(root->right, p, q);
    }
  }
};

int main()
{
}
