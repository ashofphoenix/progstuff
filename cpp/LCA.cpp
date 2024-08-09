Node* LCA( Node* root, int n1, int n2) {
    // Base Case
    if (root == NULL)
        return NULL;

    //either of value matches with root
    if (root->data == n1 || root->data == n2)
        return root;

    //look for keys in right and left subtree
    Node* left_lca = LCA(root->left, n1, n2);
    Node* right_lca = LCA(root->right, n1, n2);

    // Both are not null
    if (left_lca && right_lca) return root;

    // either one is null
    return (left_lca != NULL) ? left_lca: right_lca;

}