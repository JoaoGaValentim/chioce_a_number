#include "../include/vident.hh"
#include <random>

Vident::~Vident()
{
}

unsigned int Vident::getVidentNumber() const
{
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<> distribution(min, max);
    unsigned int vident_number = distribution(generator);
    return vident_number;
}