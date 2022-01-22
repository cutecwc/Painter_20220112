#ifndef _LRN0_H_
#define _LRN0_H_
#include<iostream>
/*
数组地址测试
*/
class T2{
public:
    void arrloc();
    void test1();
};

void T2::arrloc(){
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i]=i;
    }
    int* temp=arr;
    bool c=true;
    int p=0;
    while(c){
        std::cout<<temp<<std::endl;
        temp=temp+1;
        p++;
        if(p>20){
            c=false;
        }
    }
    char carr[100];
    for(int i=0;i<100;i++){
        carr[i]=i;
    }
    c=true;
    p=0;
    char *temps=carr;
    while(c){
        std::cout<<temps<<std::endl;
        temps=temps+1;
        p++;
        if(p>20){
            c=false;
        }
    }

    return;
}

#endif