# include<iostream>
# include<vector>
# include<windows.h>
using namespace std;

class Test1{
    /*
    给定 nums = [2, 7, 11, 15], target = 9
    因为 nums[0] + nums[1] = 2 + 7 = 9
    所以返回 [0, 1]
    */
private:
    vector<int> nums;
    int length;
public:
    Test1(){
        length=0;
    }
    int fgets(int num){
        if(num<length){
            return nums.at(num);
        }
        else{
            cout<<"error, stack overflow !"<<endl;
            return 0;
        }
    }
    //此处输入要增加的数
    bool adds(int num){
        nums.push_back(num);
        length++;
        return true;
    }
    void prints(){
        int p=0;
        for(int i=0;i<length;i++){
            if(0==(i%5)){
                cout<<endl;
                cout<<i+1<<'\t'<<":\t";
            }
            cout<<this->fgets(i)<<'\t';
        }
        cout<<endl;
    }
    int flen(){
        return length;
    }
};

bool search(Test1 t,int sum){
    int flag=0;
    vector<int> af;
    vector<int> ad;
    if(t.flen()<=1){
        cout<<"error, can't to add !"<<endl;
        return false;
    }
    else{
        int temp=0;
        for(int i=0;i<t.flen()-1;i++){
            temp=t.fgets(i);
            for(int j=i+1;j<t.flen();j++){
                if(temp+t.fgets(j)==sum){
                    af.push_back(i);
                    ad.push_back(j);
                    break;
                }
            }
        }
    }
    if(0==af.size()){
        cout<<"error, can not found it !"<<endl;
        return false;
    }
    else{
        for(int i=0;i<af.size();i++){
            cout<<"num is "<<af.at(i)+1<<"and "<<ad.at(i)+1<<endl;
        }
        return true;
    }
}

int main(){
    Test1 a;
    a.adds(1);a.adds(2);a.adds(3);a.adds(4);a.adds(5);a.adds(6);a.adds(7);a.adds(8);a.adds(9);a.adds(10);a.adds(11);a.adds(12);a.adds(13);
    cout<<"array is"<<a.flen()<<endl;
    a.prints();
    search(a,12);
    system("Pause");
    return 0;
}