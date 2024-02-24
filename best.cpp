#include <iostream>

using namespace std;

// Definition of a node in the BST
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BST {
private:
    TreeNode* root;

    // Helper function to insert a value into the BST
    TreeNode* insert(TreeNode* root, int val) {
        if (root == nullptr) {
            return new TreeNode(val);
        }
        if (val < root->val) {
            root->left = insert(root->left, val);
        } else if (val > root->val) {
            root->right = insert(root->right, val);
        }
        return root;
    }

    // Helper function to search for a value in the BST
    bool search(TreeNode* root, int val) {
        if (root == nullptr) {
            return false;
        }
        if (root->val == val) {
            return true;
        } else if (val < root->val) {
            return search(root->left, val);
        } else {
            return search(root->right, val);
        }
    }

public:
    BST() : root(nullptr) {}

    // Public function to insert a value into the BST
    void insert(int val) {
        root = insert(root, val);
    }

    // Public function to search for a value in the BST
    bool search(int val) {
        return search(root, val);
    }
};

int main() {
    BST bst;

    // Inserting values into the BST
    bst.insert(5);
    bst.insert(3);
    bst.insert(8);
    bst.insert(1);
    bst.insert(4);

    // Searching for values in the BST
    cout << "Is 3 in the BST? " << (bst.search(3) ? "Yes" : "No") << endl;
    cout << "Is 6 in the BST? " << (bst.search(6) ? "Yes" : "No") << endl;

    return 0;
}
