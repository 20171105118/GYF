//
//  main.cpp
//  GYF
//
//  Created by gyf on 18/6/21.
//  Copyright © 2018年 gyf. All rights reserved.
//

#include <fstream>
#include <string>
#include <iostream>
#include <streambuf>
#include <cstdio>
#include <cstdlib>
using namespace std;
    // insert code here...

int main()
{
    FILE *a;
    string line;
    char name[50],clas[50],gender[50],db[50],phone[50],number[50];
    int judge[100];
    int i=0,l=0;
    ifstream fin("/Users/s20171105118/Desktop/GYF/studentdata.csv");
    while (getline(fin, line))   //判断有多少组数据
        {
            ++l;
        }
    if((a=fopen("/Users/s20171105118/Desktop/GYF/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    
    else{
        
        while(fscanf(a,"%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d",number,name,gender,db,clas,phone,judge[0],judge[1],judge[2],judge[3],judge[4]))
        {
            for(;i<l;++i){
                if(i==0){}
            else
            printf("%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d\n",number,name,gender,db,clas,phone,judge[0],judge[1],judge[2],judge[3],judge[4]);
            }
        }
    }
    return 0;
}
