//
//  main.cpp
//  lower case
//
//  Created by ARIJIT CHANDRA on 06/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <istream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main(int argc,  char * argv[])
{
    ifstream ifs(argv[1]);
    if (!ifs.is_open()) {
        cout<<"Error";
    }
    
    string token;
    while (getline(ifs, token)) {
        
        stringstream ss(token);
        string line;
        while(getline(ss, line, ' '))
        {
            vector<string> v;
            v.push_back(line);
            string file;
            for (int i = 0 ; i<v.size(); i++) {
                transform(v[i].begin(), v[i].end(), back_inserter(file),::tolower);
                cout<<file<<" ";
            }
            
            }
        cout<<endl;
    }

    return 0;
}

