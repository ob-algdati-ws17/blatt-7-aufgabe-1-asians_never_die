//
// Created by Duc on 03.01.2018.
//
#include "AVLBaum.h";
#include <iostream>
#include <string>
#include <tuple>
#include "functional"
#include "vector"

AVLBaum::~AVLBaum () {
    root = nullptr;
}

AVLBaum::element::element(const int value, element *hisRoot) : value(value), previous(hisRoot) {};
AVLBaum::element::element(const int value,AVLBaum::element *left, AVLBaum::element *right, AVLBaum::element *previous) :
        value(value), rightLeaf(right), leftLeaf(left), previousLeaf(previous) {};

bool AVLBaum::element::hasLeaf() const {
    if (rightLeaf!=nullptr || leftLeaf!=nullptr) {
        return right;
    }
    return false;
}

bool AVLBaum::element::isBalanced() const {
    if(balance=0) {
        return true;
    }
    return false;
}

bool AVLBaum::insert(const int value) {
    if(root== nullptr) {
        root = AVLBaum::element::element(value);
        return true;
    }
    //hier fehlen die Abfragen der Leafs
    return false;
}

bool AVLBaum::removeElement(element *elem) {

}

void AVLBaum::removeLeaf(element *elem, bool right) {

}

void AVLBaum::removeLeafs(element *elem) {

}

element AVLBaum::rechtsrotation(element *elem) {

}

element AVLBaum::linksrotation(element *elem) {

}

bool AVLBaum::insert(const int value) {

}

bool AVLBaum::exists(const int value) {

}

bool AVLBaum::remove(const int value) {

}

std::vector<int> AVLBaum::*order() const {

}





