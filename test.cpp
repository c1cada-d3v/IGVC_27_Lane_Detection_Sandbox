#include <opencv2/opencv.hpp>
#include <iostream>

// Running OpenCV for the first time with webcam, annotated 

main(){
    cap = cv2.VideoCapture(0)

    if (!cap.isOpened()){
        std::cout << "Error: Could not open webcam!" << std::endl;
        return -1;
    } else {
        std::cout << "Webcam opened!" << std::endl;
    }

    cvv:Mat frame; // Read frame 1
    bool ret = cap.read(frame);

    if (ret) {
        cv::imshow("Captured frame!", frame);
        cv:: waitKey(0); // Wait for key press to close
        cv::destroyAllWindows(); 
    } else {
        std::cout << "Error: Could not capture frame." << std::endl;
    }

    cap.release();
    return 0;
    
}