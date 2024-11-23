#pragma once 
#include <iostream>
 template <typename T>
 void iter(T* array ,int length, void (*fonc)( T&)){
    for(int i = 0 ;i < length;i++)
        fonc(array[i]);
 }

 template <typename T>
 void print(T& p){
    std::cout << p << std::endl;
 }
