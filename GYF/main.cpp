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
    int pjz[i];
    int p;
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
                for(p=0;p<0; p++)

                int max=judge[0];
                int min=judge[0];
                for(p=0; p<o; p++)
                {
                    if(judge[p]>max)
                    {
                        max=judge[p];
                    }
                    if(judge[p]<min)
                    {
                        min=judge[p];
                    }
                    pjz[i]+=a[p];
                }
                pjz=1.0*(sum-max-min)/(n-2);

            printf("%s,%s,%s,%s,%s,%s,",number[i],name[i],gender[i],db[i],clas[i],phone[i]);
                for(int m=0;m<o;++m)
                    printf("%d,",judge[m]);
            }
            if(i==l)
                break;
        }
    }
    //定义文件输出流
    ofstream oFile;
    //打开要输出的文件
    oFile.open("Users/s20171105118/Desktop/GYF_work/studentdata.csv", ios::out | ios::trunc);// 这样就很容易的输出一个需要的excel文件
    oFile << "student number" << "," << "name" << "," << "gender" << "," << "date of birth" << "," << "class" << "," << "telephone" << "judge1" << "," << "judge2" << "," << "judge3" << "," << "judge4" << "," << "judge5" << "," <<endl;
    oFile << "20171105110" << "," << "Zhangsan" << "," << "man" << "," << "1998.02.03" << "," << "17Network programming" << "," << "1234751923" << "77" << "," << "79" << "," << "85" << "," << "83" << "," << "80" << "," <<endl;
    oFile << "20171105111" << "," << "Lisi" << "," << "man" << "," << "1998.05.23" << "," << "17Network programming" << "," << "1987041923" << "71" << "," << "76" << "," << "89" << "," << "83" << "," << "83" << "," <<endl;
    oFile.close();
    
    
    //打开要输出的文件
    ifstream iFile("scoresheet.csv");
    string   readStr((std::istreambuf_iterator<char>(iFile)),  std::istreambuf_iterator<char>());
    cout <<  readStr.c_str();
    
    
    
    }
