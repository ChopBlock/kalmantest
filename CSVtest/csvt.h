#ifndef CSVT_H
#define CSVT_H

#define _USE_MATH_DEFINES
#include <cmath>
#include<vector>

#include <iostream>
#include <random>
#include <chrono>
#include"csv.hpp"

#include<time.h>
class csvt
{
public:
    csvt(std::string path="./data/test.csv");

    //获取csv数据  行列
    std::vector< std::vector<float>> getcsvdata();

    //fIR filter
    void FirFilter(std::vector< std::vector<float>> csvd);





private:
    std::string CSVPAH;

};

#endif // CSVT_H
