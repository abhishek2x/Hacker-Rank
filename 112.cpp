// IMPORTANT
// Is This a Binary Search Tree?
// All cases Satisfied 

/* Hidden stub code will pass a root argument to the function below. Complete the function 
to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/
    bool BstUtil(Node* root, int min, int max) {
        if(root == NULL)
            return true;
        else if( 
                (root->data > min)
                && (root->data < max)
                && checkBST(root->left, min, root->data)
                && checkBST(root->right, root->data, max)
               )
                 return true;
        else 
            return false;
    }
    bool checkBST(Node* root){
        return BstUtil(Node* root, int INT_MIN, int INT_MAX);
    }
    