// IMPORTANT
// Is This a Binary Search Tree?
// 1 Test case not passed


/* Hidden stub code will pass a root argument to the function below. Complete the function 
to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/

    bool checkLeftSubtreeLesser(struct Node* root, int data){
        if(root == NULL) return true;

        if(
            (root->data <= data )
            && checkLeftSubtreeLesser(root->left, data) == true 
            && checkLeftSubtreeLesser(root->right, data) == true
            )
            return true;
        else return false;
    }

    bool checkRightSubtreeGreater(Node* root, int data){
        if(root == NULL) return true;

        if(
            (root->data > data) 
            && checkRightSubtreeGreater(root->left, data)  == true
            && checkRightSubtreeGreater(root->right, data) == true
            )
            return true;
        else return false;
    }

    bool checkBST(Node* root,) {
        if(root == NULL)
            return true;
        else if( 
                checkLeftSubtreeLesser(root->left, root->data) == true
                && checkRightSubtreeGreater(root->right, root->data)  == true
                && checkBST(root->left)  == true
                && checkBST(root->right)  == true
               )
                 return true;
        else 
            return false;
    }
    