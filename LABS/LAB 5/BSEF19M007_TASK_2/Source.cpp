//ANNS SHAHBAZ BSEF19M007
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include<iostream>
#include "Circle.h"

using namespace cv;
using namespace std;

int main() {

	//Create four hardcorded circles
	Circle c1(100,99,100,250,0,0), c2(100, 101, 70, 0, 0, 255), c3(301, 300, 90, 0, 255, 255), c4(299, 300, 50, 255, 255, 0);
	Circle c5(0, 0, 100, 255, 255, 255);	
	c5 = c1 + c2;

	c1.UP();	//Moving Circle 1 up
	c2.DOWN();	//Moving Circle 2 down
	c3.LEFT();	//Moving Circle 3 left
	c4.RIGHT();	//Moving Circle 4 right

	//Now all 4 circles poistion is changed.

	c1.Concentric(c1, c2, c3, c4);	//Checking Which of these circles are concentric and then labeling them



	//circle(img, center, radius, color, thickness)
	Mat image = Mat::zeros(500,800, CV_8UC3);
	
	//draw circles
	circle(image, Point(c1.getX(), c1.getY()), c1.getRadius(), Scalar(c1.getBlue(), c1.getGreen(), c1.getRed()), -100);
	circle(image, Point(c2.getX(), c2.getY()), c2.getRadius(), Scalar(c2.getBlue(), c2.getGreen(), c2.getRed()), -100);
	circle(image, Point(c3.getX(), c3.getY()), c3.getRadius(), Scalar(c3.getBlue(), c3.getGreen(), c3.getRed()), -100);
	circle(image, Point(c4.getX(), c4.getY()), c4.getRadius(), Scalar(c4.getBlue(), c4.getGreen(), c4.getRed()), -100);
	circle(image, Point(c5.getX(), c5.getY()), c5.getRadius(), Scalar(c5.getBlue(), c5.getGreen(), c5.getRed()), -100);
	
	//show the circle to window
	imshow("OOP Lab Task 5", image);
	waitKey(0);

	return 0;
}