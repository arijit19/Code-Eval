//
//  main.cpp
//  print odd numbers
//
//  Created by ARIJIT CHANDRA on 06/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
using namespace std;
bool isOdd(int x)
{
    if (x % 2 == 0) {
        return false;
    }
    return true;
}

int main(int argc, const char * argv[])
{
    for (int i = 0 ; i<100; i++) {
        if (isOdd(i)) {
            cout<<i<<endl;
        }
    }
    
    return 0;
}

