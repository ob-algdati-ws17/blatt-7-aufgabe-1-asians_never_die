//
// Created by Duc and Raphi on 03.01.2018.
//

#ifndef BLATT7_AVLBAUM_H
#define BLATT7_AVLBAUM_H

#include <iostream>
#include <string>
#include <tuple>
#include "functional"
#include "vector"

class AvlTree;

class AvlTree {

private:
    struct element {

        element(const int value, element *hisRoot);
        element(const int value, element *right, element *left, element *previous);

        const int value;
        element *leftLeaf = nullptr;
        element *rightLeaf = nullptr;
        element *previousLeaf = nullptr;
        int balance = 0;

        bool hasLeaf() const;

        bool isBalanced() const;

        std::vector<int> *inorder() const;

        std::vector<int> *preorder() const;

        std::vector<int> *postorder() const;

    };


    void removeLeafs(element *elem);
    void removeElement(const int value, element *toRemove);
    bool search(const int value, element *toFind);

    element *rechtsrotation(element *elem);
    element *linksrotation(element *elem);

public:

    element *root = nullptr;
    ~AvlTree();
    bool isEmpty();
    void insert(const int value);
    void insert(const int value, element *toInsert);
    bool exists(const int value);
    void remove(const int value);

    std::vector<int> *inorder() const;

    std::vector<int> *preorder() const;

    std::vector<int> *postorder() const;

};



#endif //BLATT7_AVLBAUM_H
