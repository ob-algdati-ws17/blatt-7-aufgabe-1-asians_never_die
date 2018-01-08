//
// Created by Duc adn Raphi on 03.01.2018.
//
#include "AvlTree.h";

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

void AvlTree::UpIn(element *elem) {

}

void AvlTree::UpOut(element *elem) {

}

std::vector<int> *AvlTree::order() const {

}





