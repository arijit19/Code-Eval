
//
//  main.cpp
//  nth prime
//
//  Created by ARIJIT CHANDRA on 08/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void Primes(int x)
{
    int num=2;
    int count =0;
//    bool flag=false;
    vector<string>v;
    do{
        
    count =0;
    for (int i =1; i <=x; i++) {
        if (num % i==0) {
            count++;
        }
    
    }

    if (count<=2) {
//        cout<<num;
        v.push_back(to_string(num));
        v.push_back(",");
//        flag=true;
    }
        
        num++;
    }while (num<x);
    for (auto i = v.begin(); i!=v.end()-1; i++) {
        cout<<*i;
    }
        cout<<endl;
}

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    string token;
    int n;
    while (getline(ifs, token)) {
        vector<string> v;
        v.push_back(token);
        n= stoi(v[0]);
        Primes(n);
        
    }
    
    return 0;
}

