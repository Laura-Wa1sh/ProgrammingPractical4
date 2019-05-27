//
//  Stack.cpp
//  TestRevisionP4
//
//  Created by Laura Walsh on 26/04/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>
using namespace std;

Stack::Stack(int size)
{
    stck_size = size;
    stck = new int[stck_size];
    tos = 0;
}

Stack::~Stack()
{
    delete[]stck;
}

Stack::Stack(const Stack& st){
    stck = new int[st.stck_size];
    stck_size = st.stck_size;
    tos = st.tos;
    for(int i=0; i< stck_size; i++){
        stck[i] = st.stck[i];
    }
}

void Stack::push(int item)
{
    if (tos == stck_size) {
        cout << "Stack overflow" << endl;
        return;
    }
    stck[tos++] = item;
}

int Stack::pop()
{
    if (tos == 0) {
        cout << "Stack underlow" << endl;
        return 0;
    }
    return stck[--tos];
}
