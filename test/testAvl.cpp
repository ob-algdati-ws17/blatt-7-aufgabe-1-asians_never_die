//
// Created by Reawelq on 03.01.2018.
//

#include "testAvl.h"
#include <memory>
#include "AvlTree"

using namespace std;

TEST(AVLTest, insertINTOemptyTREE_Test) {
    AvlTree tree;
    tree.insert(4);
    EXPECT_FALSE(tree.isEmpty());
}

TEST(AVLTest, Remove_Test) {
    AvlTree tree;
    tree.insert(4);
    tree.remove(4);
    EXPECT_TRUE(tree.isEmpty());
}