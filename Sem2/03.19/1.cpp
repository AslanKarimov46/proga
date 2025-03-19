#include <iostream>
#include <opencv2/opencv.hpp>

int main(){

    cv::VideoCapture video("1.mp4");

    if(!video.isOpened()){
        std::cerr << "can't open video\n";
    }

    cv::Mat frame;

    while(video.read(frame)){
        cv::imshow("Ok", frame);

        if(cv::waitKey(25) == 'q')
            break;
    }

    video.release();
    cv::destroyAllWindows();

    return 0;
    
}