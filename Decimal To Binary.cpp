//
//  main.cpp
//  decimal to binary
//
//  Created by ARIJIT CHANDRA on 06/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
    ifstream ifs(argv[1]);
    string token;
    while (getline(ifs, token)) {
        vector<string> v;
        v.push_back(token);
        int x;
        x = stoi(v[0]);
        string str;
      do{
            str.append(to_string(x%2));
            x=x/2;
      }  while (x!=0) ;
        cout<<string(str.rbegin(),str.rend());
        cout<<endl;
    }
    ifs.close();
    return 0;
}

