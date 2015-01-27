#include "drink.h"

BubbleTea:: BubbleTea (string name, int dsize, bool temp, int bsize) {
    customer_name = name;
    drink_size = dsize;
    hot = temp;
    bubble_size = bsize;
} 

BubbleTea::BubbleTea (const BubbleTea &rhs) {  //check scope resolution
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
    cout << "Still working on it\n";
}
