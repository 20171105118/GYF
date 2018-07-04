//
//  main.cpp
//  GYF
//
//  Created by gyf on 18/6/21.
//  Copyright © 2018年 gyf. All rights reserved.
//

#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <streambuf>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{

    FILE *a;
    string line;
    char name[50][100],clas[50][100],gender[50][100],db[50][100],phone[50][100],number[50][100];
    int judge[100];
    int i=0,l=0;
    int o=0;
    ifstream fin("/Users/s20171105118/Desktop/GYF/studentdata.csv");
    while (getline(fin, line))
        {
            ++l;
            istringstream sin(line);
            vector<string> fields;
            string field;
            while (getline(sin, field, ','))
            {
                fields.push_back(field);
                ++o;
            }
            o=(o-6)/l;
        }
    if((a=fopen("/Users/s20171105118/Desktop/GYF/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else{
        while(1)
        {
            for(;i<l;++i){
                if(i==0){}
                else{
                    fscanf(a,"%s,%s,%s,%s,%s,%s",number[i],name[i],gender[i],db[i],clas[i],phone[i]);
                    for(int m=0;m<o;m++){
                        fscanf(a,"%d,",&judge[m]);
                    }
                }
                
            printf("%s,%s,%s,%s,%s,%s,",number[i],name[i],gender[i],db[i],clas[i],phone[i]);
                for(int m=0;m<o;++m)
                    printf("%d,",judge[m]);
            }
            if(i==l)
                break;
        }
    }
    
    
    
    }
