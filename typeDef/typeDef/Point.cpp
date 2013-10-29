//
//  Point.cpp
//  typeDef
//
//  Created by Ryan Chu on 10/29/2013.
//  Copyright (c) 2013 Ryan Chu. All rights reserved.
//

#include "Point.h"
using namespace std;
Point operator+ (Point& p1, Point& p2)
{
    return Point(p1.getX()+p2.getX(), p1.getY()+p2.getY());
}
ostream& operator<< (ostream& out, Point p)
{
    return out<<"("<<p.getX()<<", "<<p.getY()<<")"<<endl;
}