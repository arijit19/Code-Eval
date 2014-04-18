//
//  main.cpp
//  armstrong number
//
//  Created by ARIJIT CHANDRA on 07/04/14.
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
    int a, count;
    while (getline(ifs, token)) {
        vector<string> v;
        v.push_back(token);
        count=0;
        a = stoi(v[0]);
        int temp = a;
        while (temp!=0) {
            temp = temp/ 10;
            count++;
        }
        temp = a;
        int dig,sum=0,mul;
        if(count==1)
            cout<<"True";
        else
        {
            while (temp!=0) {
                dig = temp%10;
                mul =1;
                for (int i =0 ; i<count; i++) {
                    mul *=dig;
                }
                sum += mul;
                temp = temp /10;
            }
            if (sum==a) {
                cout<<"True";
            }
            else
                cout<<"False";
        }
        cout<<endl;
    }
    return 0;
}

