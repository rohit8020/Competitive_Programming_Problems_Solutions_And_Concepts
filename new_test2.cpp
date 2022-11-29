
#include <bits/stdc++.h>
using namespace std;

struct node {
	int key;
	struct node *left, *right;
};


struct node* newNode(int item)
{
	struct node* temp
		= (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}


bool inorder(struct node* root,int y)

{
    if(root==NULL)
     return false;
	
		bool a=inorder(root->left,y);
		
		bool b=inorder(root->right,y);
        if(root->key==y)
             return true;
        return a||b;
        

        
	
}


struct node* insert(struct node* node, int key)
{
	
	if (node == NULL)
		return newNode(key);

	
	if (key < node->key)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);

	
	return node;
}


struct node* minValueNode(struct node* node)
{
	struct node* current = node;

	
	while (current && current->left != NULL)
		current = current->left;

	return current;
}


struct node* deleteNode(struct node* root, int key)
{
	
	if (root == NULL)
		return root;

	
	if (key < root->key)
		root->left = deleteNode(root->left, key);

	
	else if (key > root->key)
		root->right = deleteNode(root->right, key);

	
	else {
		
		if (root->left==NULL and root->right==NULL)
			return NULL;
	
		
		else if (root->left == NULL) {
			struct node* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			struct node* temp = root->left;
			free(root);
			return temp;
		}

		
		struct node* temp = minValueNode(root->right);

		root->key = temp->key;

		root->right = deleteNode(root->right, temp->key);
	}
	return root;
}

int main()
{
	

    int n;
    cin>>n;
    struct node* root = NULL;
    while (n--)
    {
        int a,b;
        cin>>a>>b;

        if(a==1){
            if(inorder(root,b)==true){
                root = deleteNode(root, b);
                cout<<1<<" ";
            }else{
                root = insert(root, b);
                cout<<0<<" ";
            }
        }else{
            root = insert(root, b);
        }
        cout<<endl;
    }
    
	
	
	
	return 0;
}


