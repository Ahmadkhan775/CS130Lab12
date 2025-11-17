#include <iostream>
#include <vector>
#include <queue>

using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val): data(val), left(nullptr), right(nullptr) {}
};
int treeHeight(Node *root){
    if( root == nullptr) return -1;
    if ( root->left == nullptr && root->right == nullptr) return 0;
    return 1 + max(treeHeight(root->left), treeHeight(root->right));
}
void printlevel(Node* root, int level, vector<int> &saved) 
{
      if ( root == nullptr) return;
      if ( level == 0) cout << root->data <<" " ; saved.push_back(root->data);}
      else{
          printlevel(root->left, level-1);
          printlevel(root->right, level-1);  
}
void printLeverOrder(Node *root, vector<int> &saved){
    int h = getHeight(root);
    for (int i = 0 ;i <=h; i++)
        printlevel(root, i, saved); cout << endl;
}
Node *constructCBT(vector<int> &tree_values){
    Node *root = new Node(tree_values[0]);
    queue<Node *> q;
    q.push(root);
    int i = 0;
    while( !q.empty() && i < q.size()){
        Node *current = q.front();
        q.pop();
        if ( i < tree_values.size()){
            current->left = new Node(tree_values[i]);
            q.push(current->left);
            i++;
        }
        
        current->right = new Node(tree_values[i]);
            q.push(current->left);
            i++;
    }
    return root;
}
Node *constructCBT(Node *root, int value){
    if(root == nullptr) root = new Node(value);
    if (value < root->data)
        root->left = constructCBT(root->left, value);
    else
        root->right = constructCBT(root->right, value);
    return root;
}
int main() 
{
    vector<int> tree_values = (10, 15, 20, 3, 5, 30, 17);
    Node *root = constructCBT(tree_values);
    if (root == nullptr) cout << "null ";
    printlevel(root, 2); cout << endl;
    printlevel(root, 1); cout << endl;
    printlevel(root, 0); cout << endl;
    
    vector<int> tree_values2 =(4, 2, 1, 3, 6, 7, 8);
    root = nullptr;
    for(auto element: tree_values2);
        root = constructCBT(Node *root, element);
    printlevel(root, 2); cout << endl;
    printlevel(root, 1); cout << endl;
    printlevel(root, 0); cout << endl;
    

}