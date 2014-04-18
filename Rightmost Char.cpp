//
//  main.cpp
//  RIGHTMOST CHAR
//
//  Created by ARIJIT CHANDRA on 09/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    string token;
    while (getline(ifs, token)) {
        stringstream ss(token);
        string word;
        vector<string> v;
        while (getline(ss, word, ',')) {
            v.push_back(word);
        }
        if (v.empty()) {
            continue;
        }
        
        string str = v[0];
        string str1 = v[1];
        size_t found = str.find_last_of(str1);
        if (found != string::npos) {
            cout<<found<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}

