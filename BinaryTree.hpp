class BinaryTree
{
    private:
        int payload;
        BinaryTree* leftchild;
        BinaryTree* rightchild;

    public:
        BinaryTree(int payload);
        void add(int payload);
        void displayInOrder();
        void displayPreOrder();
        void displayPostOrder();
};