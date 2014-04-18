//
//  main.cpp
//  largest palindrome
//
//  Created by ARIJIT CHANDRA on 05/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i<= sqrt(x); i++) {
        if (x%i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[])
{
    
    int i, n1;
    for (i = 1000 ; i > 10 ; i--)
    {
        int n = i ;
        int temp = 0;
        while (n>0)
        {
            n1 = n %10;
            temp =(temp*10)+ n1;
            n = n/10;
        }
        
        if (i == temp)
        {
            if(isPrime(temp))
            {
                cout<<temp;
                break;
            }
        }
        
    }
    
    
    
    return 0;
}

