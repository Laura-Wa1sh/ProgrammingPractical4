//
//  main.cpp
//  TestRevisionP4
//
//  Created by Laura Walsh on 26/04/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
#include "Stack.hpp"
#include "Shape.hpp"
using namespace std;



void f(Stack &a){
    Stack b =a;
}



int main(){
    

    Person p1("Laura", "Walsh", "101", 1999);
   Person p2("Sarah Rose", "Ferris", "300", 1998);
    
    
    
    bool greater = p1>=(p2);
    bool less = p1<=(p2);

    cout<< "Is p1 greater than p2: " << greater << endl;

    cout << "Is p1 less than p2: " <<less << endl;
    
    
    cout << endl << endl << "Test Stack: " << endl;
    
    Stack s(2);
    s.push(4);
    s.push(13);
    f(s);
    cout << s.pop() << endl;
    
    cout<<endl<<endl<< "test for shape: " << endl;
    
    Shape *shape_ptr = NULL;
    
   
    // take user's choice
    cout << "Enter R for rectangle\nEnter C for circle\nEnter T for right triangle\n";
    char fig_type;
    cin >> fig_type;
    
    // allocate a derived object of the selected shape
    switch (fig_type) {
            // rectangle
        case 'R':
            shape_ptr = new Rectangle;
            break;
            // circle
        case 'C':
            shape_ptr = new Circle;
            break;
            // right triangle
        case 'T':
            shape_ptr = new Rt_Triangle;
            break;
        default:
            cout << "unknown shape selected" << endl;
    }
    
    if(shape_ptr !=NULL){
    shape_ptr->read_shape_data();
    shape_ptr->compute_area();
    shape_ptr->compute_perimeter();
    shape_ptr->print_result();
    
    }
    return 0;
}
