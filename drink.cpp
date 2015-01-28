//Name, section, project01, code description
// questions: do we need virtual destructors?

#include "drink.h"

///////////////////////////////////

string size(int s) const {
    if (s==1) {
        return "small";
    } else if (s==2) {
        return "medium";
    } else {
        return "large";    
    }
}

//////////////////////////////////

BubbleTea:: BubbleTea (string name, int dsize, bool temp, int bsize) {
    customer_name = name;
    drink_size = dsize;
    hot = temp;
    bubble_size = bsize;
} 

BubbleTea::BubbleTea (const BubbleTea &rhs) {
    BubbleTea (rhs.customer_name, rhs.drink_size, rhs.hot, 
                   rhs.bubble_size); 
}

BubbleTea & BubbleTea::operator= (const BubbleTea &rhs) {
    if (this != &rhs) {
        customer_name = rhs.customer_name;
        drink_size = rhs.drink_size;
        hot = rhs.hot;
        bubble_size = rhs.bubble_size;
    }
    return *this;
}

void BubbleTea::confirmOrder() const {
    cout << customer_name << " ordered a " << size(drink_size) << 
    " drink of bubble tea with " << size(bubble_size) << " bubble" <<endl;
    // no need for endl; it's already included in main.cpp
}

/////////////////////////////////////

OrangeJuice:: OrangeJuice (string name, int dsize, bool p) {
    customer_name = name;
    drink_size = dsize;
    pulp = p;
} 

OrangeJuice:: OrangeJuice (const OrangeJuice &rhs) {
    OrangeJuice (rhs.customer_name, rhs.drink_size, rhs.pulp);
}

OrangeJuice & OrangeJuice::operator= (const OrangeJuice &rhs) {
    if (this != &rhs) {
        customer_name = rhs.customer_name;
        drink_size = rhs.drink_size;
        pulp = rhs.pulp;    
    } 
    return *this;
}

void OrangeJuice::confirmOrder() const {
    cout << customer_name << " ordered a " << size(drink_size) <<
    " drink of Orange Juice with " <<
    ( (pulp)? "pulp" : "no pulp" ) <<endl; // no need for endl
}

/////////////////////////////////////
