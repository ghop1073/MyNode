/*
 * CTECList.h
 *
 *  Created on: Feb 29, 2016
 *      Author: mhop1073
 */

#include "CTECList.h"
#include <iostream>
template <class Type>

CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template<class Type>
CTECList<Type>::~CTECList()
{

}

template<class Type>
void CTECList<Type>:: addAtIndex(int index, const Type& value)
{

	assert(index > 0);
	assert(index < size);
	assert(size > 0);

	ArrayNode<Type> * previousSpot;
	ArrayNode<Type>
	ArrayNode<Type> * nextSpot;

	for(int spot = 0; spot < index + 1; index++)
	{
		if(spot == index - 1)
		{

		}
	}


}

template<class Type>
void CTECList<Type>:: addToEnd(const Type& value)
{

}

template<class Type>
void CTECList<Type>:: addToFront(const Type& value)
{

}

template<class Type>
Type CTECList<Type>::removeFromFront()
{

	assert(this->size > 0);

	Type thingToRemove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	thingToRemove = this->head->getValue();
	delete this-> head;

	this->head = newHead;


	return thingToRemove;


}

template<class Type>
Type CTECList<Type>::removeFromPosition(int index)
{

}
