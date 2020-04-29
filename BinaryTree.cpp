#include "BinaryTree.hpp"
#include "iostream"

BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftchild = 0;
    this->rightchild = 0;
}

void BinaryTree::add(int payload)   //add new binary tree object to the tree
{
    if(payload <= this->payload)
    {
        //go to the left
        if(!this->leftchild)
        {
            this->leftchild = new BinaryTree(payload);
        }
        else
        {
            this->leftchild->add(payload);
        }
    }
    else
    {
        //go to the right
        if(!this->rightchild)
        {
            this->rightchild = new BinaryTree(payload);
        }
        else
        {
            this->rightchild->add(payload);
        }
    }
    
}

void BinaryTree::displayInOrder()
{
    if(this->leftchild)
    {
        this->leftchild->displayInOrder();
        std::cout << this->payload << "\n";
        if(this->rightchild)
        {
            this->rightchild->displayInOrder();
        }
    }
    else
    {
        std::cout << this->payload << "\n";
        if(this->rightchild)
        {
            this->rightchild->displayInOrder();
        }
    }
    
}

void BinaryTree::displayPreOrder()
{
    std::cout << this->payload << "\n";
    if(this->leftchild)
    {
        this->leftchild->displayPreOrder();
    }
    if(this->rightchild)
    {
        this->rightchild->displayPreOrder();
    }
}

void BinaryTree::displayPostOrder()
{
    if(this->leftchild)
    {
        this->leftchild->displayPostOrder();
    }
    if(this->rightchild)
    {
        this->rightchild->displayPostOrder();
    }
    std::cout << this->payload << "\n";
}
