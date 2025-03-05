// ContinuingQueueExploration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"MyQueue.h"

#include <iostream>



int main()
{
	MySpace::NotAsNaiveQueue notSoNaiveQueue; 
	notSoNaiveQueue.enqueue("Alice");
	notSoNaiveQueue.enqueue("Bob Loblaw");
	notSoNaiveQueue.enqueue("Carol");
	notSoNaiveQueue.enqueue("Darth");
	notSoNaiveQueue.enqueue("Eve");

	notSoNaiveQueue.dequeue(); //removes Alice

	notSoNaiveQueue.enqueue("Frank"); //adds frank at rear 

	notSoNaiveQueue.dequeue(); //remove Bob BOblaw

	notSoNaiveQueue.enqueue("Gus");
	//notSoNaiveQueue.enqueue("Hank"); //throws!


	while (!notSoNaiveQueue.isEmpty())
	{
		notSoNaiveQueue.dequeue(); 
	}

}

