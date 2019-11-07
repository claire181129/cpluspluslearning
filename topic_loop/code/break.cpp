#include <iostream>

int main(int argc, char* argv[])
{
	for(int i=0;i<5;i++)
	{
		std::cout<<"outside loop "<<i<<std::endl;
		for(int j=0;j<5;j++)
		{
			std::cout<<"	inside loop "<<j<<std::endl;
			if(i+j>=4)
				break;
		}
	}
	std::cout<<"outside loop shoud loop 4 times, inside loop should loop 5,4,3,2,1 times"<<std::endl;
	std::cout<<"means break only break the level of loop that it's in"<<std::endl;
	return 0;
}
