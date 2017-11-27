/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: inoue
 *
 * Created on 2017/11/27, 15:55
 */

#include <iostream>
#include <vector>
using namespace std;

struct X {
    vector<double> vec;
    X() = default;
    X(const X& x) : vec(x.vec) {}
};

X f() {
    X x;
    x.vec.resize(1000000);
    return x;
}

/*
 * 
 */
int main(int argc, char** argv) {
    for (int i = 0; i < 1000; ++i) X x(f());
    
    return 0;
}

