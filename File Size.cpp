//
//  main.cpp
//  file size
//
//  Created by ARIJIT CHANDRA on 10/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{
    ifstream ifs(argv[1]);
    ifs.seekg(0,ios::end);
    long size = ifs.tellg();
    cout<<size;
    ifs.close();
    return 0;
}

