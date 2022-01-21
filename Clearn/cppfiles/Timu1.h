# include<iostream>

    /*
    2．编写一个C++程序，它要求用户输入一个以long为单位的距离， 然后将它转换为码（一long等于220码）。
    --ASCII码对应于数字和字母的值要熟悉。
    --对应的字符转数字的方法即ASCII-48即可。
    */
class Timus{
public:
    void p1_pr1();
    void p1_pr2();
    void solve3();
};

void Timus::p1_pr2(){
   using namespace std;
   string str="";
   cout<<"输入一个以long为单位的距离：例如1000long；"<<endl;
   cin>>str;
   int len=str.length();
   if(str[len-4]=='l' && str[len-3]=='o' && str[len-2]=='n' && str[len-1]=='g'){
       int numlen=len-4;
       int j=1;
       int sum=0;
       for(int i=numlen-1;i>=0;i--){
           sum+=(int(str[i])-48)*j;
           j*=10;
       }
       cout<<"we've got num is "<<sum<<endl;
       int trans=sum*220;
       cout<<"转化后的数字为："<<trans<<"码"<<endl;
       return;
   }
   else{
       cout<<"error, can not match !"<<endl;
       return;
   }
}

void Timus::p1_pr1(){
    /*
    1．编写一个C++程序，它显示您的姓名和地址。
    */
   using namespace std;
   string name="千离月";
   string location="大工软院";
   cout<<name<<"\t"<<location<<endl;
   return;
}

void Timus::solve3(){
    /*
    2．编写一个C++程序，它要求用户输入一个以long为单位的距离， 然后将它转换为码（一long等于220码）。
    --ASCII码对应于数字和字母的值要熟悉。
    --对应的字符转数字的方法即ASCII-48即可。
    */
}