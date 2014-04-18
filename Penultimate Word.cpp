//
//  main.cpp
//  PENULTIMATE WORD
//
//  Created by ARIJIT CHANDRA on 07/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[])
{

    ifstream ifs(argv[1]);
    string token;
    while (getline(ifs, token)) {
        string line;
        stringstream ss(token);
        vector<string> v;
        while (getline(ss, line, ' ')) {
            v.push_back(line);
        }
        long a = v.size()-2;
        cout<<v[a];
        cout<<endl;
    }
    return 0;
}

