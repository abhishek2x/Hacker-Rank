// Tree: Level Order Traversal
#include <bits/stdc++.h>	


using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        queue <Node*> Q;
        Q.push(root);
        while(Q.empty() == false)
        {
            Node* current = Q.front();
            cout << current->data << " ";
            if(current->left != NULL) Q.push(current->left);
            if(current->right != NULL) Q.push(current->right);
            Q.pop();
        }
    }

}; //End of Solution