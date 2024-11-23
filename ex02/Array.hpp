#pragma once 
#include <iostream>
#include <cstdlib>
#include <exception>
#pragma once 
#include <iostream>
#include <cstdlib>
#include <exception>

#pragma once 
#include <iostream>
#include <cstdlib>
#include <exception>

template <typename T>
class Array {
private:
    T *elements;
    unsigned int length;

public:
    Array() : elements(NULL), length(0) {}
    Array(unsigned int n) : elements(new T[n]), length(n) {}
    Array(const Array &array) : elements(new T[array.length]), length(array.length) {
        for (unsigned int i = 0; i < length; i++)
            elements[i] = array.elements[i];
    }
    ~Array(){  
        delete[] elements;
    }

    Array& operator=(const Array &array) {
        if (this != &array) {
            delete[] elements;
            length = array.length;
            elements = new T[length];
            for (unsigned int i = 0; i < length; i++)
                elements[i] = array.elements[i];
        }
        return *this;
    }

    T& operator[](unsigned int index) {
        if (index >= length)
            throw std::out_of_range("Index out of bounds");
        return elements[index];
    }

    unsigned int size() const {
        return length;
    }
};