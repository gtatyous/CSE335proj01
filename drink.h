#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

#ifndef DRINK_H
#define DRINK_H


class Drink {
    protected:
        int drink_size;
        string customer_name;
    public: 
        virtual void confirmOrder() const = 0;
        //string size (int) const;
};



class BubbleTea : public Drink {
    protected:
        bool hot;
        int bubble_size;                   
    public:
        BubbleTea(string="Anonymous", int=1, bool=true, int=1);
        BubbleTea (const BubbleTea &);
        BubbleTea & operator= (const BubbleTea &);
        virtual void confirmOrder() const; 
};



class OrangeJuice : public Drink {
    protected:
        bool pulp;               
    public:
        OrangeJuice(string="Anonymous", int=1, bool=false);
        OrangeJuice(const OrangeJuice &);
        OrangeJuice & operator= (const OrangeJuice &);
        virtual void confirmOrder () const;
};
#endif
