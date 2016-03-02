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

}

template<class Type>
Type CTECList<Type>::removeFromPosition(int index)
{

}
