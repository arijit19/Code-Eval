//
//  main.cpp
//  sum of primes
//
//  Created by ARIJIT CHANDRA on 06/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x)
{
    for (int i =2; i <=sqrt(x); i++) {
        if (x% i==0) {
            return false;
        }
        
    }
    return true;
}
int main(int argc, const char * argv[])
{
    int sum =0;
    int num =2;
    int count=0;
    do{
            if (isPrime(num)) {
                sum=sum+num;
                ++count;
            }
        ++num;
    }while(count<1000);
    cout<<sum;
    
    return 0;
}

