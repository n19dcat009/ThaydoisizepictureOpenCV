//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace v� hi?u h�a vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;
int main() {

	//??c h�nh ?nh
	Mat image = imread("C:\\Users\\84395\\Music\\MEmu Music\\ThaydoisizepictureOpenCV\\ptit.jpg", 1);
	//Hi?n th? h�nh ?nh ra c?a s?
	imshow("Original Image", image);
	//h�y gi?m t? l? h�nh ?nh b?ng c�ch s? d?ng chi?u r?ng v� chi?u cao m?i
	int down_width = 400;
	int down_height = 500;
	Mat resized_down;
	//resize down
	resize(image, resized_down, Size(down_width, down_height), INTER_LINEAR);
	//h�y n�ng c?p h�nh ?nh b?ng chi?u r?ng v� chi?u cao m?i
	int up_width = 600;
	int up_height = 700;
	Mat resized_up;
	//resize up
	resize(image, resized_up, Size(up_width, up_height), INTER_LINEAR);
	// Hi?n th? h�nh ?nh v� nh?n ph�m b?t k? ?? ti?p t?c
	imshow("Resized Down by defining height and width", resized_down);
	waitKey();
	imshow("Resized Up image by defining height and width", resized_up);

	waitKey(0);

	//ph� h?y t?t c? c�c c?a s? ???c t?o ra
	destroyAllWindows();
	return 0;
}
