#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(void)
{
    //opening the folder of MNIST dataset
    vector <vector<double>> images;
    vector <double> imagePixels;
    //create a vector with paths of different folder
    vector <string> folder_paths = {
        //path of image folder containing number 0+
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\0",
        //path of image folder containing number 1
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\1",
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\2",
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\3",
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\4",
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\5",
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\6",
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\7",
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\8",
        "C:\\Users\\Kshitiz\\Downloads\\mnist_png\\training\\9"
    };
    //open each file of digit 0 to 9, and put the information in excel sheet 
    
    for(int folder_index = 0; folder_index < 10; folder_index++)
    {
        string folder_path = folder_paths[folder_index];
       

    }
    }