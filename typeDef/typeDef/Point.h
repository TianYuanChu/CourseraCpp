//
//  Point.h
//  typeDef
//
//  Created by Ryan Chu on 10/29/2013.
//  Copyright (c) 2013 Ryan Chu. All rights reserved.
//

#ifndef __typeDef__Point__
#define __typeDef__Point__
class Point;
#include <iostream>
using namespace std;
#endif /* defined(__typeDef__Point__) */

Point operator+ (Point& x, Point& y);
ostream& operator<< (ostream& out, Point p);

class Point
{
public:
    Point(double x,double y){this->x=x;this->y=y;}
    double getX(){return x;}
    double getY(){return y;}
    void setX(double val){this->x=val;}
    //friend Point operator+ (Point& x, Point& y);
    //friend ostream& operator<< (ostream& out, Point p);
private:
    double x,y;
    Point(){}
};