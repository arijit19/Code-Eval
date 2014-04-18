//
//  main.cpp
//  fibo
//
//  Created by ARIJIT CHANDRA on 10/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    string token;
    list<string> ls;
    while (getline(ifs, token)) {
        ls.push_back(token);
        int n = stoi(ls.back());
        cout<<fib(n)<<endl;
    }
    return 0;
}

