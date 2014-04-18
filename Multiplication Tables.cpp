//
//  main.cpp
//  multiplication table
//
//  Created by ARIJIT CHANDRA on 06/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    int mul = 0;
    for (int i =1 ; i <=12; i++) {
        for (int j = 1; j<= 12; j++) {
            mul = i * j;
            int temp = mul,dig,count=0;
            while (temp!=0) {
                dig= temp % 10;
                temp= temp /10;
                count++;
            }
            if(j==1)
            {
                if(count == 1)
                cout<<" "<<mul;
                else
                    cout<<mul;
            }
            else{
                if (count==1) {
                    cout<<"   "<<mul;
                }
                else if (count==2)
                    cout<<"  "<<mul;
                else
                    cout<<" "<<mul;
        }

    }
    
        cout<<endl;
    }
    
    return 0;
}

