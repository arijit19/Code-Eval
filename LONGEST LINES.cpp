//
//  main.cpp
//  longest line
//
//  Created by ARIJIT CHANDRA on 06/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

class functor
{
public:
    bool operator()(string s1 , string s2)
    {
        return s1.size()> s2.size();
    }
};

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    string token;
    vector<string> v;
    while (getline(ifs, token)) {
        v.push_back(token);
    }
    int a = stoi(v[0]);
    sort(v.begin(), v.end(), functor());

    for (int i =0 ; i <a; ++i) {
        cout<<v[i]<<endl;
    }
    
    return 0;
}

