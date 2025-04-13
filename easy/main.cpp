#include "C:\Users\korpa\leetcode_learn\lib.hpp"
#include <iostream>
#include <fstream>
using namespace std;
int main() {

    using ::Solution;
    std::ifstream twoSum("input.txt");
    std::ofstream twoSum("output.txt");
    std::vector<int> nums;
    twoSum >> nums;

    twoSum.close();

    return 0;
}