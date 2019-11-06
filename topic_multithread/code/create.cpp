//code from cplusplus.com
#include <thread>	//std::thread
#include <iostream>	//std::cout

void foo()
{
	std::cout<<"foo say hi"<<std::endl;
}

void bar(int x)
{
	for(;;)
	{
		std::cout<<"bar("<<x<<") say hi"<<std::endl;
		x++;
		if(x>20)
			break;
	}
}

int main(int argc,char* argv[])
{
	std::thread first(foo);
	std::thread second(bar,0);

	std::cout<<"main, foo and bar now execute concurrently...\n";

	first.join();
	second.join();

	std::cout<<"foo and bar completed.\n";

	return 0;
}
