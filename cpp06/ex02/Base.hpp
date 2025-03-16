#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>

// Base class with a virtual destructor
class Base {
public:
    virtual ~Base() {}  // Virtual destructor
};

// Classes A, B, and C inheriting from Base
class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
