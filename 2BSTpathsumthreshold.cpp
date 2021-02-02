void CheckPathCost(int pathweight, int thresholdweight, node* cnode, node* root){
    pathweight += cnode->val;
    if(!cnode->left && !cnode->right){
        if(pathweight < thresholdweight){
            pathweight -= cnode->val;
            cout<<"Deleted Node"<<cnode->val;
            Delete(root, cnode->val);  //form BSTopn
            CheckPathCost(0, thresholdweight, root, root);  //to check for new tree form after deletion
        }
        else{
            pathweight -= cnode->val; // not necessary just for else formatlity
        }
    }
    if(cnode->left){
        CheckPathCost(pathweight, thresholdweight, cnode->left, root);
    }
    if(cnode->right){
        CheckPathCost(pathweight, thresholdweight, cnode->right, root);
    }
}