/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: ghop1073
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/CTECArray.h"
#include "../Model/CTECArray.cpp"


#include <string>
using namespace std;

class NodeController
{
private:

	CTECArray<int> * notHipsterInts;

public:
	virtual ~NodeController();
	NodeController();
	void start();
};



#endif /* CONTROLLER_NODECONTROLLER_H_ */
