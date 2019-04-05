#ifndef IMGTESTER_H
#define IMGTESTER_H

#include <vector>

#include "ImgManager.h"
#include "ImgAnalyzer.h"
#include "ImgProcessor.h"
#include "NeuronStructUtilities.h"

using namespace std;

class ImgTester
{
public:
	ImgTester() : cutOff(0) {};

	string inputString;
	string outputString;
	string inputSingleImgFullName;
	string outputSingleImgFullName;
	string inputImgPath;
	string outputImgPath;

	vector<vector<unsigned char>> imgSlices;
	int cutOff;
	vector<connectedComponent> signalBlobs;


    void sliceImgStack();
	void ada();
	void mask2SWC();

};


#endif