#include <iostream>
#include <opencv2/opencv.hpp> 
#include <opencv2/imgcodecs.hpp> //to read and write images in opencv  Input output operation in open cv
#include <opencv2/imgproc.hpp> // processing the image like changing the color to gray scale and so on
using namespace std;
using namespace cv;
int main(void)
{
    string path = "C:/Users/Kshitiz/Downloads/mnist_png/training/1/3.png";
    Mat img = imread(path);
    imshow("Image", img); 
    waitKey(0);
}