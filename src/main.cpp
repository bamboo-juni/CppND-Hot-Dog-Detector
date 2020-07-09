#include <iostream>
#include <opencv2/highgui.hpp>

int main() {

    // read image from file
    cv::Mat img = cv::imread("../data/hotdog.jpg", -1);
    if( img.empty() ) return -1;

    // display image
    cv::namedWindow( "Hot Dog", cv::WINDOW_AUTOSIZE );
    cv::imshow( "Hot Dog", img );
    
    return 0;
}