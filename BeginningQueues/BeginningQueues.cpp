// BeginningQueues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<queue> 

struct Job
{
	int numberOfInstructions; 
	std::string jobID; 

	Job() = default; 
	Job(int numberOfInstructions, const std::string& jobID)
		:numberOfInstructions(numberOfInstructions), jobID(jobID)
	{

	}
};

void processJobs(std::queue<Job>& jobsOnFirstCPU, std::queue<Job>& jobsOnSecondCPU)
{
	while (jobsOnFirstCPU.empty() == false && jobsOnSecondCPU.empty() == false)
	{
		//process them 

		Job jobAtFrontOfFirstCPU = jobsOnFirstCPU.front();
		
		while (jobAtFrontOfFirstCPU.numberOfInstructions > 0)
		{
			std::cout << "Executing instruction number "
				<< jobAtFrontOfFirstCPU.numberOfInstructions << "\n";

			jobAtFrontOfFirstCPU.numberOfInstructions--; 
		}

		jobsOnFirstCPU.pop(); 

		//std::priority_queue; //we'll come back to this (for HUFFMAN compression! yay!)
	}
}
int main()
{
	std::queue<Job> jobsOnFirstCPU; 
	std::queue<Job> jobsOnSecondCPU;

	//queue up jobs for FIRST CPU: 
	jobsOnFirstCPU.push(Job(2, "Alice's SMALL job"));
	jobsOnFirstCPU.push(Job(10, "Carol's LARGE job"));

	//queue up jobs for SECOND CPU: 
	jobsOnSecondCPU.push(Job(5, "Bob Loblaw's medium job")); //Arrested Development reference
	jobsOnSecondCPU.push(Job(12, "Darth's LARGE job"));

	processJobs(jobsOnFirstCPU, jobsOnSecondCPU);

}

