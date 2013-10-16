//
//  main.cpp
//  asst1_convert
//
//  Created by Ryan Chu on 2013-10-16.
//  Copyright (c) 2013 Ryan Chu. All rights reserved.
//

//
//  main.cpp
//  HelloWorld
//
//  Created by Ryan Chu on 2013-10-15.
//  Copyright (c) 2013 Ryan Chu. All rights reserved.
//
/**
 Convert this program to C++
 *   change to C++ io
 *   change to one line comments
 *   change defines of constants to const
 *   change array to vector<>
 *   inline any short function
 
 #include <stdio.h>
 #define N 40
 void sum(int*p, int n, int d[])
 {
 int i;
 *p = 0;
 for(i = 0; i < n; ++i)
 *p = *p + d[i];
 }
 int main()
 {
 int i;
 int accum = 0;
 int data[N];
 for(i = 0; i < N; ++i)
 
 data[i] = i;
 
 sum(&accum, N, data);
 printf("sum is %d\n", accum);
 return 0;
 }
 */
#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>
using namespace std;

const int N = 40;

inline int sum(vector<int>& data){return accumulate(data.begin(),data.end(),0);}
int main()
{
    vector<int> data;
    for (int i =0;i<N;i++)
        data.push_back(i);
    
    cout<<"Sum is " << sum(data) <<endl;
    return 0;
}

