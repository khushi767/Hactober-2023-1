#include <iostream>
#include <queue>
using namespace std;

// Define the structure for a node in the binary tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(NULL), right(NULL) {}
};

// Function to print the binary tree using level order traversal
void printTree(TreeNode* root) {
    if (root == NULL)
        return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        while (size--) {
            TreeNode* node = q.front();
            q.pop();

            if (node != NULL) {
                cout << node->data << " ";
                q.push(node->left);
                q.push(node->right);
            } else {
                cout << "null ";
            }
        }

        cout << endl;
    }
}

int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Printing the binary tree
    cout << "Binary Tree:" << endl;
    printTree(root);

    // Freeing allocated memory (not shown in this simplified example)
    return 0;
}
