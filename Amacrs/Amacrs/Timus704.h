#ifndef _TIMUS704_H_
#define _TIMUS704_H_

/*
����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��
��Դ�����ۣ�LeetCode��
*/
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int temp = 0;
        return temp;
    }
    int v1(vector<int>& nums, int target) {
        /*
        ִ����ʱ��24 ms, ������ C++ �ύ�л�����93.24%���û�

        �ڴ����ģ�26.8 MB, ������ C++ �ύ�л�����87.14%���û�

        ͨ������������47 / 47
        */
        int flag = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums.at(i)) {
                flag = i;
                break;
            }
            else {
                continue;
            }
        }
        return flag;
    }
    int v2(vector<int>& nums, int target) {
        int flag = -1;
        int sizet = nums.capacity();
        size_t i = 0, size = nums.size() - 1, jdg = size_t(size + 1 / 2);
        while (true) {
            if (nums[i] == target) {
                flag = i;
                break;
            }
            if (nums[size] == target) {
                flag = size;
                break;
            }
            if (i > jdg) {
                break;
            }
            size--;
            i++;
        }
        return flag;
    }
    void v3(vector<int>& nums, int target) {
        /*
        ����at()������ֱ�ӷ���[]������
        */
        try{
            cout << "test now is at()" << nums[target] << endl;
            //cout << "test now is []" << nums.at(target) << endl;
        }
        catch (const std::exception &e){
            cerr << e.what() << endl;
        }

        //cout << "then size of it is " << int(nums.size()) << endl;
        return;
    }
    int v4(vector<int>& nums, int target) {
        int  mid = 0;
        size_t tp = nums.size() - 1, i = 0;
        while (i <= tp && i>=0 &&tp>=0) {
            mid = nums[i + (tp - i) / 2];
            if (mid > target) {
                tp = i + (tp - i) / 2 - 1;
                cout << "1";
            }
            else if(mid < target){
                i = i + (tp - i) / 2 + 1;
                cout << "2";
            }
            else {
                return int(i + (tp - i) / 2);
            }
        }
        return -1;
    }
};

void test() {
    /*
    [-1,0,3,5,9,12]
    vector<int> cc = { -1,0,3,5,9,12 };
    vector<int> cc = { 1,2,5,6,7,8,9,12,14,17,19,26,29,31 };
    */
    vector<int> cc = { 5 };
    int co = 0;
    Solution tt;
    co = tt.v4(cc, -5);
    cout << "ans is " << co << endl;
}

#endif // !1
