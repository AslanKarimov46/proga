#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img = cv::imread("crocodile.jpg", cv::IMREAD_COLOR);

    int x = 10;
    int y = 5;

    int width = 200;
    int height = 100;

    cv::Mat cropped = img(cv::Rect(x, y, width, height));

    if(img.empty())
    {
        std::cerr << "cannot load image\n";
        return -1;
    }

    cv::imshow("Crocodile", cropped);

    cv::waitKey(0);

    cv::destroyAllWindows();

    return 0;
}