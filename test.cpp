#include <opencv2/opencv.hpp>
#include <iostream>

// Running OpenCV for the first time with webcam, annotated. C++ instead of Python for now.
main(){
    
    cv::VideoCapture cap(0); 

    if (!cap.isOpened()) {
        std::cout << "Error: Could not open webcam!" << std::endl;
        return -1;
    } else {
        std::cout << "Webcam opened!" << std::endl;
    }

    cv::Mat frame;
    bool ret = cap.read(frame); // Check if there is a next available frame

    if (ret && !frame.empty()) {
        cv::imshow("Captured frame!", frame);
        cv::waitKey(0); // Wait for key press to close
        cv::destroyAllWindows(); 
    } else {
        std::cout << "Error: Could not capture frame." << std::endl;
    }

    cap.release();
    return 0;
    
}