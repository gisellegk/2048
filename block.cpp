/*
 * block.cpp
 *
 *  Created on: Oct 12, 2014
 *      Author: griseldak
 */
#include <iostream>
#include <stdlib.h>

class Block {
public:
	Block(){
		value = 0;
		combined = false;
		std::cout<< "ima dorkbot" << std::endl;
	}
	void setValue(int _value){
		value = _value;
	}
	void setCombined(bool _combined){
		combined = _combined;
	}
private:
	int value;
	bool combined;
};


