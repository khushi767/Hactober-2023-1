#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

// Define the structure of a node in the binary tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to print spaces
void printSpaces(int n) {
    for (int i = 0; i < n; i++)
        cout << " ";
}

// Function to print tree
void printTree(TreeNode* root, int level, int indent) {
    if (root == NULL)
        return;
    
    // Print right child first
    printTree(root->right, level + 1, indent);
    
    // Print current node
    if (level != 0) {
        printSpaces(indent);
        cout << "  ";
        printSpaces(indent);
    }
    cout << root->val << endl;
    
    // Print left child
    printTree(root->left, level + 1, indent);
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Define indentation for visual representation
    int indent = 4;

    // Print the tree
    printTree(root, 0, indent);

    // Clean up memory (assuming dynamic allocation)
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root;

    return 0;
}
