#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img = cv::imread("crocodile.jpg", cv::IMREAD_COLOR);
    
    cv::Mat resized;

    int new_width = 1600;
    int new_height = 900;

    cv::resize(img, resized, cv::Size(new_width, new_height));

    if(img.empty())
    {
        std::cerr << "cannot load image\n";
        return -1;
    }

    cv::imshow("Crocodile", resized);

    cv::waitKey(0);

    cv::destroyAllWindows();

    return 0;
}