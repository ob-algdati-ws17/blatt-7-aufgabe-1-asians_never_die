//
// Created by Duc adn Raphi on 03.01.2018.
//
#include "AvlTree.h"

AvlTree::~AvlTree () {
    root = nullptr;
}

AvlTree::element::element(const int value, element *hisRoot) : value(value), previousLeaf(hisRoot) {};
AvlTree::element::element(const int value,AvlTree::element *left, AvlTree::element *right, AvlTree::element *previous) :
        value(value), rightLeaf(right), leftLeaf(left), previousLeaf(previous) {};

bool AvlTree::element::hasLeaf() const {
    if (rightLeaf!=nullptr || leftLeaf!=nullptr) {
        return true;
    }
    return false;
}

bool AvlTree::element::isBalanced() const {
    if(balance==0) {
        return true;
    }
    return false;
}

bool AvlTree::search(const int value, element *toFind) {
    if(toFind == nullptr) {
        return false;
    }
    if(value < toFind->value) {
        if(toFind->leftLeaf->value == value) {
            return true;
        } else {
            if(search(value, toFind->leftLeaf)) {
                return true;
            } else {
                return false;
            }
        }
    } else if(value > toFind->value) {
        if(toFind->rightLeaf->value == value) {
            return true;
        } else {
            if(search(value, toFind->rightLeaf)) {
                return true;
            } else {
                return false;
            }
        }
    }
}


void AvlTree::insert(const int value, element *toInsert) {
    element *current = toInsert;
    if(~(current->hasLeaf())) {
        if (value < current->value) {
            current->leftLeaf = new element(value,current->previousLeaf);
            current->balance -= 1;
        } else {
            current->rightLeaf = new element(value,current->previousLeaf);
            current->balance += 1;
        }
    } else if(value < current->value) {
        if(current->leftLeaf = nullptr) {
            current->leftLeaf = new element(value,current->previousLeaf);
            current->balance -= 1;
        } else {
            insert(value, current->leftLeaf);
        }
    } else if(value > current->value) {
        if(current->rightLeaf = nullptr) {
            current->rightLeaf = new element(value,current->previousLeaf);
            current->balance += 1;
        } else {
            insert(value, current->rightLeaf);
        }
    }
}

void AvlTree::removeElement(const int value, element *toRemove) {
    if(!(toRemove->hasLeaf())) {
        return;
    }
    //damit noch arbeiten
    auto balance = toRemove->balance;
    if(toRemove->leftLeaf->value == value && ~toRemove->leftLeaf->hasLeaf()) {
        toRemove->leftLeaf = nullptr;
        toRemove->balance += 1;
        return;
    } else if (toRemove->rightLeaf->value == value && ~toRemove->rightLeaf->hasLeaf()){
        toRemove->rightLeaf = nullptr;
        toRemove->balance -= 1;
        return;
    } else if (toRemove->leftLeaf->value < value) {
        removeElement(value, toRemove->leftLeaf);
    } else if (toRemove->leftLeaf->value > value) {
        removeElement(value, toRemove->rightLeaf);
    }
}

void AvlTree::removeLeafs(element *elem) {
    elem->rightLeaf = nullptr;
    elem->leftLeaf = nullptr;
    return;
}

AvlTree::element *AvlTree::rechtsrotation(element *elem) {
    auto previous = elem->previousLeaf;
    auto head = elem->leftLeaf;
    auto extra = elem->rightLeaf;

    if(previous==nullptr) {
        root = head;
        head->previousLeaf=nullptr;
    } else {
        head->previousLeaf = elem->previousLeaf->previousLeaf;
        head->rightLeaf = previous;
        previous->leftLeaf = extra;
    }

    //nochmal nachgucken
    head->balance += 1;
    head->rightLeaf->balance += 1;
    return head;
}

AvlTree::element *AvlTree::linksrotation(element *elem) {
    auto previous = elem->previousLeaf;
    auto head = elem->rightLeaf;
    auto extra = elem->leftLeaf;

    if(previous==nullptr) {
        root = head;
        head->previousLeaf = nullptr;
    } else {
        head->previousLeaf = elem->previousLeaf->previousLeaf;
        head->leftLeaf = previous;
        previous->rightLeaf = extra;
    }
    head->balance -= 1;
    head->leftLeaf->balance -= 1;
    return head;
}

bool AvlTree::isEmpty() {
    return root == nullptr;
}

void AvlTree::insert(const int value) {
    if(root== nullptr) {
        root = new element(value, nullptr);
        return;
    }
    insert(value, root);
}

bool AvlTree::exists(const int value) {
    if(root == nullptr) {
        return false;
    }else if(root->value == value) {
        return true;
    }

    if(search(value,root)) {
        return true;
    } else {
        return false;
    }
}

void AvlTree::remove(const int value) {
    if(root->value == value) {
        root = nullptr;
        return;
    }
    removeElement(value, root);
}


std::vector<int> *AvlTree::preorder() const {
    if (root == nullptr)
        return nullptr;
    return root->preorder();
}

std::vector<int> *AvlTree::element::preorder() const {
    auto vec = new std::vector<int>();
    // Wurzel in vec
    vec->push_back(value);
    // linken Nachfolger in vec
    if (leftLeaf != nullptr) {
        auto left_vec = leftLeaf->preorder();
        vec->insert(vec->end(), left_vec->begin(), left_vec->end());
    }
    // rechten Nachfolger in vec
    if (rightLeaf != nullptr) {
        auto right_vec = rightLeaf->preorder();
        vec->insert(vec->end(), right_vec->begin(), right_vec->end());
    }
    return vec;
}

std::vector<int> *AvlTree::inorder() const {
    if (root == nullptr)
        return nullptr;
    return root->inorder();
}

std::vector<int> *AvlTree::element::inorder() const {
    auto vec = new std::vector<int>();
    // linken Nachfolger in vec
    if (leftLeaf != nullptr) {
        auto left_vec = leftLeaf->inorder();
        vec->insert(vec->end(), left_vec->begin(), left_vec->end());
    }
    // Wurzel in vec
    vec->push_back(value);
    // rechten Nachfolger in vec
    if (rightLeaf != nullptr) {
        auto right_vec = rightLeaf->inorder();
        vec->insert(vec->end(), right_vec->begin(), right_vec->end());
    }
    return vec;
}

std::vector<int> *AvlTree::postorder() const {
    if (root == nullptr)
        return nullptr;
    return root->postorder();
}

std::vector<int> *AvlTree::element::postorder() const {
    auto vec = new std::vector<int>();
    // linken Nachfolger in vec
    if (leftLeaf != nullptr) {
        auto left_vec = leftLeaf->postorder();
        vec->insert(vec->end(), left_vec->begin(), left_vec->end());
    }
    // rechten Nachfolger in vec
    if (rightLeaf != nullptr) {
        auto right_vec = rightLeaf->postorder();
        vec->insert(vec->end(), right_vec->begin(), right_vec->end());
    }
    // Wurzel in vec
    vec->push_back(value);
    return vec;
}






