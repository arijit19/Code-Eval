//
//  main.cpp
//  sum of numbers from file
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

int main(int argc, char * argv[])
{
    
    ifstream ifs(argv[1]);
    if (!ifs.is_open()) {
        cout<<"error";
    }
    
    string token;
    int sum=0;
    while (getline(ifs, token)) {
        vector<string>v;
        v.push_back(token);
    
        int a = stoi(v[0]);
            sum += a;
        
    }
    cout<<sum;
    return 0;
}

