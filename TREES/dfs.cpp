#include <iostream>
#include <stack>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void iterativeDFS(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::stack<TreeNode*> stack;
    stack.push(root);

    while (!stack.empty()) {
        TreeNode* current = stack.top();
        stack.pop();

        // Process the current node
        std::cout << current->data << " ";

        // Push right child first (to be processed later)
        if (current->right != nullptr) {
            stack.push(current->right);
        }

        // Push left child (to be processed next)
        if (current->left != nullptr) {
            stack.push(current->left);
        }
    }
}

int main() {
    // Build a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    std::cout << "Iterative DFS: ";
    iterativeDFS(root);
    std::cout << std::endl;

    // Clean up the memory (assuming no smart pointers are used)
    // This step is important to avoid memory leaks.
    // In real-world scenarios, consider using smart pointers.
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
