//
//  main.cpp
//  n mod m
//
//  Created by ARIJIT CHANDRA on 09/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void mod(int x , int y)
{
    int dig = 0;
    for (int i =1; i<x; i++) {
//        bool flag = false;
        while (dig<x) {
            dig= y*i;
//            flag =true;
            break;
        }
//        if (!flag) {
//            break;
//        }
        
    }
    cout<<x-(dig-y)<<endl;
}

int main(int argc, const char * argv[])
{

    ifstream ifs(argv[1]);
    string token;
    int n ,m;
    while (getline(ifs, token)) {
        stringstream ss(token);
        string word;
        vector<string> v;
        while (getline(ss, word, ',')) {
            v.push_back(word);
        }
//        int size = v.size();
//        for(auto i :v)
//            cout<<i;
        n = stoi(v[0]);
        m = stoi(v[1]);
        mod(n,m);
    }
    return 0;
}

