# include<iostream>

    /*
    2����дһ��C++������Ҫ���û�����һ����longΪ��λ�ľ��룬 Ȼ����ת��Ϊ�루һlong����220�룩��
    --ASCII���Ӧ�����ֺ���ĸ��ֵҪ��Ϥ��
    --��Ӧ���ַ�ת���ֵķ�����ASCII-48���ɡ�
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
   cout<<"����һ����longΪ��λ�ľ��룺����1000long��"<<endl;
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
       cout<<"ת���������Ϊ��"<<trans<<"��"<<endl;
       return;
   }
   else{
       cout<<"error, can not match !"<<endl;
       return;
   }
}

void Timus::p1_pr1(){
    /*
    1����дһ��C++��������ʾ���������͵�ַ��
    */
   using namespace std;
   string name="ǧ����";
   string location="����Ժ";
   cout<<name<<"\t"<<location<<endl;
   return;
}

void Timus::solve3(){
    /*
    2����дһ��C++������Ҫ���û�����һ����longΪ��λ�ľ��룬 Ȼ����ת��Ϊ�루һlong����220�룩��
    --ASCII���Ӧ�����ֺ���ĸ��ֵҪ��Ϥ��
    --��Ӧ���ַ�ת���ֵķ�����ASCII-48���ɡ�
    */
}