#include <iostream>
#include <string>

using namespace std;

class Price
{
public:
    Price(double amount = 0.00) : m_amount(amount) {}

    void print() {
        cout << "My price: " << m_amount << endl;
    }

private:
    double m_amount;
};


class PriceExplicit
{
public:
    explicit PriceExplicit(double amount = 0.00) : m_amount(amount) {}

    void print() {
        cout << "My price: " << m_amount << endl;
    }

private:
    double m_amount;
};


int main()
{
    cout << "!!! Keyword explicit !!!\n" << endl;


    // No need to typecast
    Price pr = 8.00;
    pr.print();


    // Typecast must needed here or else it ill throw compilation err as below
    // "error: conversion from ‘double’ to non-scalar type ‘PriceExplicit’ requested"
    // Uncomment below line and expect same error stated above
    //    PriceExplicit prExp = 8.00;
    PriceExplicit prExp = (PriceExplicit)8.00;
    prExp.print();

    return 0;
}
