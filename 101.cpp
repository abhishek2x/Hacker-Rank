// Poisonous Plants
// Not Accepted
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Delete(int n)
{
    struct Node* temp1 = head;
    if(n == 1)
    {
        head = temp1->next; // head points to second node
        free(temp1);
        return;
    }
    for (int i = 0; i < n-2; i++)
        temp1 = temp1->next;
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}
void Print(int* head)
{
    Node* temp = head;
    printf("The List is : ");
    while(temp != NULL){    //traversing
        printf("%d", temp->data);
        temp = temp->next;
    }
} 

int main(){

    int n;  cin >> n;

    int* a = new int[n];
    for (int in = 0; in < n; in++){
        cin >> a[in];
    }

    Node *head = NULL;

    for (int in = 0; in < n; in++){
        head->data = a[in];
        head = head->next;
    }

    Print(head);
    
}