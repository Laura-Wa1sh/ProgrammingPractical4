//
//  Shape.hpp
//  TestRevisionP4
//
//  Created by Laura Walsh on 26/04/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

class Shape{
public:
    virtual void compute_area() = 0;
    virtual void compute_perimeter() =0;
    virtual void read_shape_data() =0;
    virtual void print_result(){
        cout << "The area is " << area << endl;
        cout << "The perimeter is " << perim << endl;
    }
protected:
    double area, perim;
    
};

// derived class Rectangle
class Rectangle : public Shape {
public:
    void compute_area() { area = width * height; }
    void compute_perimeter() { perim = 2 * width + 2 * height; }
    void read_shape_data() {
        cout << "Enter width of the rectangle: ";
        cin >> width;
        cout << "Enter height of the rectangle: ";
        cin >> height;
    }
    
private:
    int width, height;
};

// derived class Circle
class Circle : public Shape {
public:
    void compute_area() { area = 3.1415926 * radius * radius; }
    void compute_perimeter() { perim = 2 * 3.1415926 * radius; }
    void read_shape_data() {
        cout << "Enter radius of the circle: " << endl;
        cin >> radius;
    }
    
private:
    int radius;
};

// derived class Right Triangle
class Rt_Triangle : public Shape {
    void compute_area() { area = base * height * 0.5; }
    void compute_perimeter() { perim = base + height + sqrt(base * base + height * height); }
    void read_shape_data() {
        cout << "Enter base of the right triangle: ";
        cin >> base;
        cout << "Enter height of the right triangle: ";
        cin >> height;
    }
    
private:
    int base, height;
};



#endif /* Shape_hpp */
