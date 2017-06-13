/*`
 *   Copyright 2017 Toby Liu
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */
#include "opencv2/opencv.hpp"

#include <iostream>
#include <stdio.h>

int main() {
    cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);
    /*
	cv::Mat image(cv::Size(640, 480), CV_8UC3);
	image = cv::Scalar(255, 0, 0);
    cv::imshow("Display Window", image);
	*/

    cv::Mat frame;
    cv::VideoCapture cap;
    cap.open(0);

    if (!cap.isOpened()) {
        printf("[ERROR]Cannot open camera\n");
        return -1;
    }

    while (true) {
    	cap.read(frame);
    	cv::imshow("Display Window", frame);
    	if (cv::waitKey(10) == 27)
    		break;
    }

	return 0;
}