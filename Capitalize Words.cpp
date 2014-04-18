//
//  main.cpp
//  cap first letter
//
//  Created by ARIJIT CHANDRA on 10/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    string token;
    while (getline(ifs, token)) {
        stringstream ss(token);
        string token1;
        while (getline(ss, token1, ' ')) {
            char ch =toupper(token1[0]);
            cout<<ch;
            for (int i =1; i<token1.size(); i++) {
                cout<<token1[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

