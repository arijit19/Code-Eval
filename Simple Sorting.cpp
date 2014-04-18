//
//  main.cpp
//  simple sort
//
//  Created by ARIJIT CHANDRA on 10/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <list>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[])
{
    cout.precision(3);
    ifstream ifs(argv[1]);
    string token;
    while (getline(ifs, token)) {
        stringstream ss(token);
        list<double> ls;
        while (getline(ss, token, ' ')) {
            ls.push_back(stod(token));
        }
        ls.sort();
        for(auto i: ls)
            cout<<fixed<<i<<" ";
        cout<<endl;
    }
    return 0;
}

