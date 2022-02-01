#pragma once
#ifndef _TIMUS1_H_
#define _TIMUS1_H_
#include<iostream>
#include<vector>
#include <unordered_map>

#include"slts.h"
using namespace std;

/*
* 第一题
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
你可以按任意顺序返回答案。
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    }
    vector<int> v1(vector<int>& nums, int target) {
        int i = 0, j = 0, flag = -1;
        size_t len = nums.size();
        vector<int> ret;
        for (i = 0; i < len; i++) {
            for (j = i + 1; j < len; j++) {
                if (nums[i] + nums[j] == target) {
                    flag = 1;
                    ret.push_back(i);
                    ret.push_back(j);
                    break;
                }
            }
        }
        if (flag < 0) {
            ret.push_back(0);
            ret.push_back(0);
        }
        return ret;
    }
    vector<int> v2(vector<int>& nums, int target) {
        int i = 0, j = 0;
        size_t len = nums.size();
        vector<int> ret;
        for (i = 0; i < len; i++) {
            for (j = i + 1; j < len; j++) {
                if (nums[i] + nums[j] == target) {
                    return { i,j };
                }
            }
        }
        return { 0,0 };
    }
    vector<int> v3(vector<int>& nums, int target) {
        /*采用哈希表实现*/
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return { it->second, i };
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
    vector<int> v4(vector<int>& nums, int target) {
        unordered_map<int, int> hsr;
        
    }
};
void try1() {
    Solcpp help;
    Solution cc;
    vector<int> arr = { 2,7,11,15 };
    int target = 0;
    vector<int> prs = cc.v2(arr, 26);
    help.vctprt1(arr);
    help.vctprt1(prs);
}
#endif // !_TIMUS1_H_
