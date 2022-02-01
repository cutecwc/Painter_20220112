#ifndef _TIMUS35_H_
#define _TIMUS35_H_

#include<iostream>
#include<vector>

#include"slts.h"
/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

输入: nums = [1,3,5,6], target = 5
输出: 2
输入: nums = [1,3,5,6], target = 2
输出: 1
*/
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        size_t len = nums.size();
        if (0 == len) {
            nums.push_back(target);
            return 0;
        }
        else {
            size_t left = 0, right = len;
            size_t mid = 0;
            while (left < right) {
                mid = left + (right - left) / 2;
                if (target == nums[mid]) {
                    return mid;
                }
                else if (target < nums[mid]) {
                    right = mid;
                }
                else {
                    left = mid + 1;
                }
            }
            if (target < nums[mid]) {
                nums.insert(nums.begin() + mid, target);
                return mid;
            }
            else {
                nums.insert(nums.begin() + mid + 1, target);
                return mid + 1;
            }
        }
    }
    int v1(vector<int>& nums, int target) {
        size_t len = nums.size();
        if (0 == len) {
            nums.push_back(target);
            return 0;
        }
        else if (1 == len) {
            if (target == nums[0]) {
                return 0;
            }
            else if (target < nums[0]) {
                nums.insert(nums.begin(), target);
                return 0;
            }
            else {
                nums.insert(nums.begin() + 1, target);
                return 1;
            }
        }
        else {
            size_t left = 0, right = len;
            size_t mid = 0;
            while (left < right) {
                mid = left + (right - left) / 2;
                if (target == nums[mid]) {
                    return mid;
                }
                else if (target < nums[mid]) {
                    right = mid;
                }
                else {
                    left = mid + 1;
                }
            }
            if (target < nums[mid]) {
                nums.insert(nums.begin() + mid, target);
                return mid;
            }
            else {
                nums.insert(nums.begin() + mid + 1, target);
                return mid + 1;
            }
        }
    }
    int v2(vector<int>& nums, int target) {
        size_t len = nums.size();
        if (0 == len) {
            nums.push_back(target);
            return 0;
        }
        else {
            size_t left = 0, right = len;
            size_t mid = 0;
            while (left < right) {
                mid = left + (right - left) / 2;
                if (target == nums[mid]) {
                    return mid;
                }
                else if (target < nums[mid]) {
                    right = mid;
                }
                else {
                    left = mid + 1;
                }
            }
            if (target < nums[mid]) {
                nums.insert(nums.begin() + mid, target);
                return mid;
            }
            else {
                nums.insert(nums.begin() + mid + 1, target);
                return mid + 1;
            }
        }
    }
    int v3(vector<int>& nums, int target) {
        size_t len = nums.size();
        if (0 == len) {
            nums.push_back(target);
            return 0;
        }
        else {
            int left = 0, right = len;
            int mid = 0;
            while (left < right) {
                mid = left + (right - left) / 2;
                if (target == nums[mid]) {
                    return mid;
                }
                else if (target < nums[mid]) {
                    right = mid;
                }
                else {
                    left = mid + 1;
                }
            }
            if (target < nums[mid]) {
                return mid;
            }
            else {
                return mid + 1;
            }
        }
    }
};
class Test35 {
public:
    void crun() {
        Solution cc;
        Solcpp pt;
        //std::vector<int> arrversion = { 0,4,6,8,9,11,24,54,66,88,102,172,190,239,264,381,579 };//38//15
        std::vector<int> arrversion = { 3 };
        //std::vector<int> arrversion = { 3,6 };//5//4
        //std::vector<int> arrversion = { };
        int cps = cc.searchInsert(arrversion, 2);
        cout << "num is -->" << cps << endl;
        pt.vctprt1(arrversion);
    }
};
#endif