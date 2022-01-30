#ifndef _TIMUS278_H_
#define _TIMUS278_H_

#include<vector>
#include<iostream>
/*
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
*/
bool isBadVersion(int version) {
    //std::vector<int> arrversion = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };//38//15
    //std::vector<int> arrversion = { 0,1 };
    std::vector<int> arrversion = { 0,0,0,1,1 };//5//4
    //std::vector<int> arrversion = { 1 };
    size_t size = arrversion.size();
    std::cout << "    ";
    for (size_t i = 0; i < size; i++) {
        std::cout << arrversion.at(i) << "   ";
    }
    std::cout << std::endl;
    std::cout << "    ";
    for (size_t i = 0; i < size; i++) {
        if (i == size_t(version - 1)) {
            std::cout << "|   ";
        }
        else {
            std::cout << "    ";
        }
    }
    std::cout << std::endl;
    if (size_t(version - 1) < size) {
        if (0 == arrversion[size_t(version - 1)]) {
            return false;
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}
class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) { // 循环直至区间左右端点相同
            int mid = left + (right - left) / 2; // 防止计算时溢出
            if (isBadVersion(mid - 1)) {
                right = mid; // 答案在区间 [left, mid] 中
                std::cout << std::endl;
            }
            else {
                left = mid + 1; // 答案在区间 [mid+1, right] 中
                std::cout << std::endl;
            }
        }
        // 此时有 left == right，区间缩为一个点，即为答案
        return left;
    }
    int v1(int n) {
        if (1 == n) {
            return n;
        }
        else {
            int cstart = 1, cend = n, mid = 0;
            while (cstart < cend) {
                mid = cstart + (cend - cstart) / 2;
                if (isBadVersion(mid)) {
                    cend = mid;
                    std::cout << "<---" << std::endl;
                }
                else {
                    cstart = mid + 1;
                    std::cout << "--->" << std::endl;
                }
            }
            return cend;
        }
    }
    int v2(int n) {
        if (n == 1) return 1;
        long low = 1, high = n, mid = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (low == high) break;
            if (isBadVersion(mid)) high = mid;
            else low = mid + 1;
        }
        return mid;
    }
};

void run() {
    Solution cc;
    int p = cc.v2(5);
    std::cout << "nums is p=" << p << std::endl;
    p = cc.firstBadVersion(5);
    std::cout << "nums is p=" << p << std::endl;
}
#endif
