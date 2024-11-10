#ifndef VIDENT_H
#define VIDENT_H

class Vident
{
private:
    const unsigned int min;
    const unsigned int max;
public:
    Vident(const unsigned int &min, 
           const unsigned int &max): min(min), max(max) {};
    ~Vident();
    unsigned int getVidentNumber() const; 
};

#endif