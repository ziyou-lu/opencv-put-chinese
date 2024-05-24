#include <iostream>
#include "opencv2/opencv.hpp"
#include "cvx.h"

int main() {
    std::string fontPath = "../SimSun.ttf";
    cvx::CvxFont font(fontPath);

    cv::Mat c3_img(200, 400, CV_8UC3, cv::Scalar(0, 0, 0));
    cvx::putText(c3_img, "空中有朵你做的云", cv::Point(100, 100), font, 20, cv::Scalar(255, 255, 255));
    cv::imshow("c3", c3_img);
    cv::waitKey(0);

    cv::Mat c4_img(200, 400, CV_8UC4, cv::Scalar(0, 0, 0));
    cvx::putText(c4_img, "空中有朵你做的云", cv::Point(100, 100), font, 20, cv::Scalar(255, 255, 255));
    cv::imshow("c4", c4_img);
    cv::waitKey(0);
    return 0;
}
