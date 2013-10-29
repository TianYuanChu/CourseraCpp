//
//  main.cpp
//  typeDef
//
//  Created by Ryan Chu on 10/29/2013.
//  Copyright (c) 2013 Ryan Chu. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "Point.h"
using namespace std;

typedef enum days {MON, TUE, WED, THU, FRI, SAT, SUN} days;
inline days operator+(days day){return static_cast<days>(((static_cast<int>(day)+1)%7));};
std::ostream& operator<< (std::ostream& out, days d);

int main()
{
    days d = MON;
    cout<<"Today is "<<d<<endl;
    d=+d;
    cout<<"Tomorrow is "<<d<<endl;
    
    Point p = Point(3,4);
    Point p2 = Point(1,2);
    cout<< "Point"<<p+p2<<endl;
    //cout<<"Sum is "<< p+p2<<endl;
    return 0;
}

std::ostream& operator<< (std::ostream& out, days d)
{
    switch (d) {
        case MON:
            out<<"MON";
            break;
        case TUE:
            out<<"TUE";
            break;
        case WED:
            out<<"WED";
            break;
        case THU:
            out<<"THU";
            break;
        case FRI:
            out<<"FRI";
            break;
        case SAT:
            out<<"SAT";
            break;
        case SUN:
            out<<"SUN";
            break;
            
        default:
            break;
    }
    return out;
}
