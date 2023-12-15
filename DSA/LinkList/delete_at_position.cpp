#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_link_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n";
}

void insert_at_position(Node *head, int pos, int v){
    Node* newNode = new Node(v);

    Node* tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout << "Invalid Index\n";
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head(Node *&head, int v){
    Node* newNode = new Node(v); 
    newNode->next = head;
    head = newNode;
}

void delete_from_position(Node *head, int pos){
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout << "Invalid Index\n";
            return;
        }
    }
    if(tmp->next == NULL){
        cout << "Invalid Index\n";
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    delete deleteNode;
}

void delete_from_head(Node *&head){
    if(head == NULL){
        cout << "Head is missing\n";
        return;
    }
    Node *deleteNode = head;
    head = head->next;

    delete deleteNode;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int op;
        cin >> op;

        if(op == 1){
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }else if(op == 2){
            int pos, v;
            cin >> pos >> v;

            if(pos==0) insert_at_head(head, v);
            else insert_at_position(head, pos, v);
            
        }else if(op == 3){
            int pos; cin >> pos;

            if(pos == 0) delete_from_head(head);
            else delete_from_position(head, pos);
        }else if(op == 4){
            break;
        }
        print_link_list(head);
    }

    return 0;
}