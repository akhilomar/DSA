Q: Print all node at distance from targe


void printkdistancenodeDown(Node* root, int k) // It only check and prints downward element from passed root
{
    if(!root || k < 0)
        return;
    
    if(k == 0){
        cout<<root->val<<endl;
        return;
    }
    printkdistancenodeDown(root->left,  k - 1);
    printkdistancenodeDown(root->right, k - 1);
}

int printKdistancenode(Node* root, Node* target, int k){
    if(!root)
        return -1;
    if(root == target){
        printkdistancenodeDown(root, k);
        return 0;
    }

    int dl = printKdistancenode(root->left, target, k); //dl is the distance of left target from the root
    if(dl != -1) // this conditions for upward k distance nodes from target
    {
        if(dl+1 == k)   //means root is at k distance from left target
        {
            cout<<root->val<<endl;
        }
        else  // means we need to check in left side k distance node from target since it crosses root, k - dl - 2 as right node is 2 distance away 
        {
            printkdistancenodeDown(root->right, k - dl - 2);
        }
        return dl+1;
    }

    int dr = printKdistancenode(root->right, target, k);
    if(dr != -1){
        if(dr+1 == k)
            cout<<root->val<<endl;
        else    
            printkdistancenodeDown(root->left, k - dr - 2)

        return dr+1;
    }

    return -1;

}

Time complexity: O(n)

