#include <iostream>
#include "red_black_tree.h"

int main(int, char**) {
    RedBlackTree bst;
    bst.insert(55);
    bst.insert(40);
    bst.insert(65);
    bst.insert(60);
    bst.insert(75);
    bst.insert(57);
  
    bst.printTree();
    cout << endl
       << "After deleting" << endl;
    bst.deleteNode(40);
    bst.printTree();
}
