#include "LinkedBT.cpp"
#include "ArrayBST.cpp"
int main()
{
    //Array implementation
    ArrayBST a;
    a.add(10);
    a.add(5);
    a.add(6);
    a.add(8);
    a.add(4);
    a.add(3);

    std::cout << "Array Implementation:" << std::endl;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        std::cout << a.element[i] << "\t";
    }
    a.deleteData(8);
    std::cout << a.search(9) << "\t" << a.search(8) << std::endl;
    std::cout << "Minimum Data is:"
              << " " << a.min() << std::endl;
    std::cout << "Maximum Data is:"
              << " " << a.max() << std::endl;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        std::cout << a.element[i] << "\t";
    }

    std::cout << "*************************************" << std::endl;

    //Linked BST implementation
    std::cout << "Linked List Implementation:" << std::endl;
    LinkedBST tree;
    tree.add(tree.root, 35);
    tree.add(45);
    Node *newNode = new Node();
    newNode->data = 50;
    tree.add(tree.root, newNode);
    tree.preorderTraversal(tree.root);
    tree.deleteBST(tree.root, 45);
    std::cout << std::endl
              << tree.search(tree.root, 50) << std::endl;
    std::cout << tree.min() << std::endl;
    std::cout << tree.max() << std::endl;
    tree.preorderTraversal(tree.root);
}
