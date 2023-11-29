int findFloor(node *root, int input)
{

    int floor = -1;
    
    while (root)
    {
        // If the input is already available in BST, return that.
        if (root->data == input)
            return input;

        // If the input is greater than root, we mark floor to be root and move to 
        // right subtree where it may be further closer to the input value
        else if (root->data < input)
        {
            floor = root->data;
            root = root->right;
        }

        // Otherwise, the floor value must be in the left subtree.
        else
        {
            root = root->left;
        }
    }

    //Return computed floor value.
    return floor;
}
