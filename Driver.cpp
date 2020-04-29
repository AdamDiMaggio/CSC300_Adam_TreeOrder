#include "iostream"
#include "BinaryTree.hpp"

using namespace std;

int main()
{
    //int payload = 5;
    // int payload = 7;
    // BinaryTree* Tree = new BinaryTree(payload);
    // Tree->add(3);
    // Tree->add(5);
    // Tree->add(10);
    // Tree->add(12);
    // Tree->add(11);
    // Tree->add(22);
    // Tree->add(5);
    // Tree->add(4);
    // Tree->add(9);

    int payload = 5;
    BinaryTree* Tree = new BinaryTree(payload);
    Tree->add(3);
    Tree->add(3);
    Tree->add(2);
    Tree->add(5);
    Tree->add(7);
    Tree->add(13);
    Tree->add(90);
    Tree->add(17);
    Tree->add(111);

    //Tree->displayInOrder();
    //Tree->displayPreOrder();
    Tree->displayPostOrder();

    //cout<<Tree<<"\n";


    
} 