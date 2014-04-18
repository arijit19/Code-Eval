//
//  main.cpp
//  even numbera
//
//  Created by ARIJIT CHANDRA on 06/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

bool isEven(int x)
{
    if (x%2==0) {
        return true;
    }
    return false;
}

int main(int argc, char * argv[])
{
    
    ifstream ifs(argv[1]);
    if (!ifs.is_open()) {
        cout<<"error";
    }
    
    string token;
    while (getline(ifs, token)) {
        vector<string>v;
        v.push_back(token);
        
        int a = stoi(v[0]);
        if (isEven(a)) {
            cout<<1<<endl;
        }
        else
            cout<<0<<endl;
        
    }
    return 0;
}
