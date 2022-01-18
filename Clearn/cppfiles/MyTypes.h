#ifndef _MYTYPES_H_
#define _MYTYPES_H_

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename T>
class Myarray{
private:
    T *array;
    int num;
    T *add(T tname,bool &isnot);
    T *copy(T *source,bool &isnot);
public:
    Myarray(){
        array=nullptr;
        num=0;
    }
    bool push_back(T tname);
    void print();
};

template<typename T>
bool Myarray<T>::push_back(T tname){
    bool isnot=false;
    this->array=add(tname,isnot);
    return isnot;
}

template<typename T>
void Myarray<T>::print(){
    cout<<"==========================================================================================================="<<endl;
    cout<<"this array include "<<endl;
    for(int i=0;i<num;i++){
        cout<<this->array[i]<<"  ";
    }
    cout<<"\n==========================================================================================================="<<endl;
}

template<typename T>
T *Myarray<T>::copy(T *source,bool &isnot){
    T *temp=nullptr;
    //linux :malloc_usable_size(arr)
    if(source!=nullptr){
        int len=_msize(source)/sizeof(T);
        temp=new T[len];
        try{
            /* code */
            for(int i=0;i<len;i++){
                temp[i]=source[i];
            }
            isnot=true;
            return temp;
        }
        catch(const std::exception& e){
            std::cerr << e.what() << '\n';
            isnot=false;
            return nullptr;
        }
    }
    else{
        isnot=false;
        return nullptr;
    }
}

template<typename T>
T *Myarray<T>::add(T tname,bool &isnot){
    T *temp=nullptr;
    bool tempjudge=false;
    if(this->array==nullptr){
        num+=1;
        T *ptemp=new T[num];
        for(int i=0;i<num-1;i++){
            ptemp[i]=temp[i];
        }
        ptemp[num-1]=tname;
        isnot=true;
        return ptemp;
    }
    else{
        temp=this->copy(this->array,tempjudge);
        if(tempjudge==false){
            std::cout<<"E1: error with copy !"<<endl;
            isnot=false;
            return nullptr;
        }
        else{
            try{
                delete this->array;
                this->array=nullptr;
                num+=1;
                T *ptemp=new T[num];
                for(int i=0;i<num-1;i++){
                    ptemp[i]=temp[i];
                }
                ptemp[num-1]=tname;
                isnot=true;
                return ptemp;
            }
            catch(const std::exception& e){
                std::cerr << e.what() << '\n';
                isnot=false;
                return nullptr;
            }
            
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif