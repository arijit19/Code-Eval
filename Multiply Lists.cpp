//
//  main.cpp
//  multiply lists
//
//  Created by ARIJIT CHANDRA on 10/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    string token;
    while (getline(ifs, token)) {
        stringstream ss(token);
        string token1;
        vector<string> v;
        while (getline(ss, token1, '|')) {
            stringstream ss1(token1);
            
            while (getline(ss1, token1, ' ')) {
                if(token1!="")
                    v.push_back(token1);
            }
        }
            long size = v.size()/2;
        for (long i = 0, j = size; i<=size, j<v.size(); i++,j++) {
            cout<<stoi(v[i])*stoi(v[j])<<" ";
        }
        cout<<endl;
    }
    return 0;
}

