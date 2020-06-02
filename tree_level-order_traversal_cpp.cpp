#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode 
{
    int val;
    TreeNode* left;
    TreeNode* right;
    // data members .

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    // struct constructors . 
};

    TreeNode* invertTree(TreeNode* root) {

    }

    TreeNode* tree_traversal_inorder(TreeNode* root)
    {
        if (root)
        {
            tree_traversal_inorder(root->left);
            cout <<root ->val + " ";
            tree_traversal_inorder(root->right);
        }
        return root;
    }


    TreeNode* tree_traversal_preorder(TreeNode* root)
    {
        if (root)
        {
            cout << root->val + " ";
            tree_traversal_inorder(root->left);
            tree_traversal_inorder(root->right);
        }
        return root;
    }

    TreeNode* tree_traversal_postorder(TreeNode* root)
    {
        if (root)
        {
            tree_traversal_inorder(root->left);
            tree_traversal_inorder(root->right);
            cout << root->val + " ";
        }
        return root;
    }

    TreeNode* tree_traversal_levelorder(TreeNode* root)
    {
        if (root)
        {
            queue <TreeNode *> levelorder ;
            // initialize a queue to store the referances 

            levelorder.push(root);
            // push the root referance to the queue.

            while (!(levelorder.empty()))
            {
                // while there is atleast one node referance left in the queue , continue 

                TreeNode *current_tree_node = levelorder.front();
                // set the front referance element to current node 


                if (current_tree_node->left)
                {
                    // add the left child of the current tree-node
                    levelorder.push(current_tree_node->left);
                }

                if (current_tree_node->right)
                {
                    // add the left child of the current tree-node
                    levelorder.push(current_tree_node->right);
                }

                cout << current_tree_node->val + " ";
                // print the current node value 

                levelorder.pop();
                // remove the front element referance 
            }



        }
        return root;
    }


    TreeNode* build_tree(vector<int> level_order_collection, int start_index, int end_index)
    {
        struct TreeNode* root = NULL ;
        // define a null pointer 

        if (start_index <= end_index)
        {
            *root = TreeNode(level_order_collection[start_index]);
            // create a node and refer it by root 

            root ->left = build_tree(level_order_collection, (2 * start_index) + 1, end_index);
            root ->right = build_tree(level_order_collection, (2 * start_index) + 2, end_index);
            // recursively call the same method to create the left sub-tree and the right sub tree 
        }
        return root;
    }

    int main()
    {
        vector<int> level_order{ 7, 4, 12, 3, 6, 8, 1, 5, 10 };
        int choice;

        struct TreeNode*root  ;
        // create a referance to point to the root node of the tree 

         root = build_tree(level_order, 0, level_order.size() - 1 );
        // call the node sequence to build the tree  from the level order 

        // memu driven programming for  binary tree.
        cout << "Enter the preferred mode of traversal : ";
        cout << "1-->Inorder    traversal";
        cout << "2-->Preorder   traversal";
        cout << "3-->Postorder  traversal";
        cout << "4-->Levelorder traversal";
        cout << "enter the choice in form of an integer :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // inorder traversal
            cout << " tree node elements in the  In-order traversal are : ";
            tree_traversal_inorder(root);
            break;

        case 2:
            // preorder traversal 
            cout << " tree node elements in the  pre-order traversal are : ";
            tree_traversal_preorder(root);
            break;

        case 3:
            // postorder traversal 
            cout << " tree node elements in the  post-order traversal are : ";
            tree_traversal_postorder(root);
            break;
        case 4:
            // level order traversal 
            cout << " tree node elements in the  level-order traversal are : ";
            tree_traversal_levelorder(root);
            break;
        default:

            // wrong choice , ask for the rerun :
            cout << " wrong choice of the menu : ";
            break;

        }

        return 0;
    }




    

        