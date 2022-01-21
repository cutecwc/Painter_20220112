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
protected:
    T *add(T tname,bool &isnot);
    T *del(T tname,bool &isnot);
    T *copy(T *source,bool &isnot);
public:
    Myarray(){
        array=nullptr;
        num=0;
    }
    bool push_back(T tname);
    bool pop_back();
    bool at(int &loc);
    int length();

    friend ostream &operator<<(ostream &output,const Myarray<T> &M){
        output<<"array is:"<<'\t';
        if(M.array==nullptr){
            output<<" null !";
        }
        else{
            for(int i=0;i<M.num;i++){
                output<<M.array[i]<<"  ";
            }  
        }
        return output;
    }
};

template<typename T>
int Myarray<T>::length(){
    return num;
}

template<typename T>
bool Myarray<T>::at(int &loc){
    try{
        /* code */
        if(loc>0&&loc<=num){
            this->array[loc-1];
            return true;
        }
        else{
            return false;
        }
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
        return false;
    }
}

template<typename T>
bool Myarray<T>::push_back(T tname){
    //使得一个元素进入数组中
    bool isnot=false;
    this->array=add(tname,isnot);
    return isnot;
}

template<typename T>
bool Myarray<T>::pop_back(){
    if(this->array==nullptr){
        return true;
    }
    else{
        cout<<"Will pop an element!:yes/no[dafulte:Y]"<<endl;
        string yesornot="";
        cin>>yesornot;
        if(yesornot=="N"||yesornot=="no"){
            return true; 
        }
        else{
            bool istrue=false;
            this->array=this->del(num,istrue);
            return istrue;
        }
    }
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
                delete[] this->array;
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

template<typename T>
T *Myarray<T>::del(T tname,bool &isnot){
    //tname 是一个正指向位置
    if(this->array==nullptr){
        isnot=false;
        return nullptr;
    }
    else{
        try{
            if(num==1){
                if(tname==1){
                    delete[] this->array;
                    this->array=nullptr;
                    num=0;
                    isnot=true;
                    return nullptr;
                }
                else{
                    isnot=false;
                    return this->array;
                }
            }
            else{
                if(tname>0&&tname<=this->num){
                    T *ptemp=new T[num-1];
                    for(int i=0;i<num;i++){
                        if(i<tname-1){
                            ptemp[i]=this->array[i];
                        }
                        else if(i==tname-1){
                            continue;
                        }
                        else{
                            ptemp[i-1]=this->array[i];
                        }
                    }
                    delete[] this->array;
                    this->array=nullptr;
                    num--;
                    isnot=true;
                    return ptemp;
                }
                else{
                    isnot=false;
                    return this->array;
                }
            }
        }
        catch(const std::exception& e){
            std::cerr << e.what() << '\n';
            isnot=false;
            return nullptr;
        }
    }
}

/*
print函数
// void print();

template<typename T>
void Myarray<T>::print(){
    cout<<"==========================================================================================================="<<endl;
    cout<<"this array include "<<endl;
    for(int i=0;i<num;i++){
        cout<<this->array[i]<<"  ";
    }
    cout<<"\n==========================================================================================================="<<endl;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif