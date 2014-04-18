//
//  main.cpp
//  coins
//
//  Created by ARIJIT CHANDRA on 09/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <list>

using namespace std;

void check(int x)
{
    int count=0;
    while (x>0) {
        if (x-5>=0) {
            x=x-5;
            count++;
        }
        else
            if (x-3 >=0) {
                x=x-3;
                count++;
            }
        else
            if (x-1 >=0) {
                x=x-1;
                count++;
            }
    }
    cout<<count<<endl;
}

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    string token;
    list<string> ls;
    while (getline(ifs, token)) {
        ls.push_front(token);
        int n = stoi(ls.front());
        check(n);
    }
    
    return 0;
}

