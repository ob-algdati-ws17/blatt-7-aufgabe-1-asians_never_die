//
// Created by Duc on 03.01.2018.
//

#ifndef BLATT7_AVLBAUM_H
#define BLATT7_AVLBAUM_H

class AVLBaum;

class AVLBaum {

private:
    struct element {

        const int value;
        element *leftLeaf = nullptr;
        element *rightLeaf = nullptr;
        element *previousLeaf = nullptr;
        int balance = 0;

        bool hasLeaf() const;

        bool isBalanced() const;

    };

public:

};



#endif //BLATT7_AVLBAUM_H
