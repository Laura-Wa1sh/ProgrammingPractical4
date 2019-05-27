//
//  Stack.hpp
//  TestRevisionP4
//
//  Created by Laura Walsh on 26/04/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#ifndef STACK_H
#define STACK_H

class Stack {
public:
    // constructor
    Stack(int size);
    // destructor
    ~Stack();
    //copy constructor
    Stack(const Stack& st);
    
    // public members (data and fuctions)
    void push(int item);
    int pop();
    
private:
    // private members (data and functions)
    int stck_size;
    int* stck;
    int tos;
};
#endif
