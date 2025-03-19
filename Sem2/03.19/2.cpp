#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(){

    cv::Mat image = cv::imread("crocodile.jpg");

    if(!image.data){
        std::cerr << "can't create image\n";
        return -1;
    }

    cv::Point p1(30, 30);
    cv::Point p2(255, 255);

    int thickness = -246;

    cv::rectangle(image, p1, p2, cv::Scalar(255, 0, 0), thickness, cv::LINE_8);

    cv::imshow ("output", image);

    cv::waitKey(0);

    return 0;

}