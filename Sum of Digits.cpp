//
//  main.cpp
//  sum of digits
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
    while (getline(ifs, token)) {
        vector<string>v;
        int a;
        v.push_back(token);
        a = stoi(v[0]);
//        cout<<a<<" ";
        int dig,temp=0;
        while (a > 0) {
            dig= a%10;
            temp = temp+ dig;
            a= a/10;
        }
        cout<<temp<<endl;
    }
    return 0;
}

