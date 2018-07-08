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

    FILE *a,*b;
    string line;
    char name[50][100],clas[50][100],gender[50][100],db[50][100],phone[50][100],number[50][100];
    int judge[5];
    int i=0,l=0;
    double pjz[i];
    int p;
    ifstream fin("/Users/s20171105118/Desktop/GYF/studentdata.csv");
    while (getline(fin, line))
        {
            ++l;
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
                    fscanf(a,"%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d",number[i],name[i],gender[i],db[i],clas[i],phone[i],&judge[0],&judge[1],&judge[2],&judge[3],&judge[4]);
                    
                }
                
                int max=judge[0];
                int min=judge[0];
                for(p=0; p<5; p++)
                {
                    if(judge[p]>max)
                    {
                        max=judge[p];
                    }
                    if(judge[p]<min)
                    {
                        min=judge[p];
                    }
                    pjz[i]+=judge[p];
                }
                pjz[i]=(pjz[i]-max-min)/3;
            }
            if(i==l)
                break;
        }
        
        
    }
    fclose(a);
   b=fopen("/Users/s20171105118/Desktop/GYF/studentout.csv","w");
    for(i=0;i<l;i++){
    fprintf(b,"%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d",number[i],name[i],gender[i],db[i],clas[i],phone[i],judge[0],judge[1],judge[2],judge[3],judge[4]);
    }
    fclose(b);
  /*  ofstream oFile("Users/s20171105118/Desktop/GYF/studentdataout.csv");
    oFile << "numbers,name,sex,dateofbirth,class,phoneNO,average\n";
    for(i=0;i<l;++i){
        oFile<< number[i] << ","<< name[i] << ","<< gender[i] << ","<< db[i] << ","<< clas[i] << ","<< phone[i] << ","<< pjz[i]<<endl;

    }
*/

    return 0;
    }
