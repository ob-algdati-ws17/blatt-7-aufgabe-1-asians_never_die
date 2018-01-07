//
// Created by Duc on 03.01.2018.
//

#ifndef BLATT7_AVLBAUM_H
#define BLATT7_AVLBAUM_H

class AVLBaum;

class AVLBaum {

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

    };

    element *root = nullptr;

    bool insert(const int value);

    void removeLeafs(element *elem);
    void removeLeaf(element *elem, bool right);
    bool removeElement(element *elem);

    element *rechtsrotation(element *elem);
    element *linksrotation(element *elem);


public:
    ~AVLBaum();
    bool insert(const int value);
    bool exists(const int value);
    bool remove(const int value);

    std::vector<int> *order() const;

};



#endif //BLATT7_AVLBAUM_H
