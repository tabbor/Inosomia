#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void drawText(Mat &image) {
    putText(image, "Hello OpenCV", Point(20, 50), FONT_HERSHEY_COMPLEX, 1,  // font face and scale
            Scalar(255, 255, 255),                                          // white
            1, LINE_AA);  // line thickness and type
}

int main() {
    cout << "Built with OpenCV " << CV_VERSION << endl;
    Mat image;
    cout << "No capture" << endl;
    image = Mat::zeros(480, 640, CV_8UC1);
    drawText(image);
    imshow("Sample", image);
    waitKey(0);
    return 0;
}
