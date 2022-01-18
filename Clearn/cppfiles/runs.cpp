# include<iostream>
# include<windows.h>

# include"MyTypes.h"

int main(void){
    using namespace std;
    //在这里放入测试函数的名称
    Myarray<int> c;
    c.push_back(1);
    c.push_back(2);
    c.print();
    system("Pause");
    return 0;
}
