#include <opencv2/opencv.hpp>
#include <iostream>

main(){
    cap = cv2.VideoCapture(0)

    if (!cap.isOpened()){
        std::cout << "Error: Could not open webcam!" << std::endl;
        return -1;
    } else {
        std::cout << "Webcam opened!" << std::endl;
    }
    
}