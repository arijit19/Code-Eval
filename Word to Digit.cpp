//
//  main.cpp
//  word to number
//
//  Created by ARIJIT CHANDRA on 07/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    
    string token;
    while (getline(ifs, token)) {
        stringstream ss(token);
        string word;
        while (getline(ss, word, ';')) {
            if(word=="zero" )
                cout<<0;
            else
                if (word == "one") {
                    cout<<1;
                }
            else
                if (word=="two") {
                    cout<<2;
                }
            else
                if (word == "three") {
                    cout<<3;
                }
            else
                if (word == "four") {
                    cout<<4;
                }
            else
                if (word=="five") {
                    cout<<5;
                }
            else
                if (word == "six") {
                    cout<<6;
                }
            else
                if (word == "seven") {
                    cout<<7;
                }
            else
                if (word=="eight") {
                    cout<<8;
                }
            else
                if (word == "nine") {
                    cout<<9;
                }
            
           
            
        }
         cout<<endl;
    }
    return 0;
}

