/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: ghop1073
 */

#include "NodeController.h"
#include "../Tests/ListTester.cpp"
#include <iostream>
using namespace std;

NodeController :: NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodeController :: ~NodeController()
{

}



void NodeController :: start()
{
	codeTimer.startTimer();


	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (index * 7));
	}

	for(int index = notHipsterInts -> getSize() -  1; index >=0; index --)
	{
		cout << "the contents of not hipster ints array node " << index << " are " << notHipsterInts->get(index) << endl;
	}

	codeTimer.stopTimer();
	codeTimer.displayTimerInfo();

	ListTester myListTester;
	myListTester.allTests();

}
