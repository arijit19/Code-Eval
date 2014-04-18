//
//  main.cpp
//  q1
//
//  Created by ARIJIT CHANDRA on 05/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char * argv[])
{
    string token;
    ifstream ifs(argv[1]);
    
    if(!ifs.is_open())
    {
        cout<<"error";
    }
    
    
    
    while (getline(ifs, token)) {
        int a=0 ,b=0 ,n=0 ;
        vector<string> v;
        stringstream ss(token);
        string token1;
        while (getline(ss, token1, ' ')) {
            v.push_back(token1);
        }
        a = stoi(v[0]);
        b = stoi(v[1]);
        n = stoi(v[2]);
        
    int i;
    
    for (i =1 ; i<= n; i++) {
        if (i%a==0) {
            if (i%b==0) {
                cout<<"FB ";
            }
            else
                cout<<"F ";
        }
        else if (i%b==0)
            cout<<"B ";
        else
            cout<<i<<" ";
    }
        cout<<endl;
    }
    
    ifs.close();
    
    return 0;
}

