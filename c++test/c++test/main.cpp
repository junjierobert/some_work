//
//  main.cpp
//  c++test
//
//  Created by fujiyong on 11/05/2018.
//  Copyright © 2018 fujiyong. All rights reserved.
//

#include <iostream>
#include<unordered_map>
#include<vector>
#include <time.h>
#include <stdio.h>
//#include <stdafx.h>
#include <stdlib.h>
#include <array>
#define random(x) (rand()%x)
using namespace std;
struct all{
    int first;
    float second;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int cnt = 10;
    srand(time(NULL));
    while(cnt--){
        cout << random(100000) + 1<<endl;
    }
    
    int num = 16;
    vector<int> a(num,0);
    cout<< a[0]<< a.size()<<endl;
    
    int b = std::min(3,5);
    
    auto s1 = argv[1];
    cout<< s1<< endl;
    cout<< atoi(s1) -20<<endl;
    
    return 0;
}
