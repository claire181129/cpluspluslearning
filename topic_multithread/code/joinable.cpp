// example for thread::joinable
#include <iostream>       // std::cout
#include <thread>         // std::thread
 
void mythread() 
{
  std::cout<<"a thread begin to run..."<<std::endl;
}
 
int main() 
{
  std::thread foo;
  std::thread bar(mythread);
  std::thread oho;
  oho = std::thread(mythread);

  std::cout << "Joinable after construction:\n" << std::boolalpha;
	//not joinable
  std::cout << "foo: " << foo.joinable() << '\n';//default-constructed
  std::cout<<"oho:"<<oho.joinable()<<'\n';//moved from assigning to it
  //joinable
  std::cout << "bar: " << bar.joinable() << '\n';

  if (foo.joinable()) foo.join();
  if (bar.joinable()) bar.join();

  std::cout << "Joinable after joining:\n" << std::boolalpha;
  std::cout << "foo: " << foo.joinable() << '\n';
  std::cout << "bar: " << bar.joinable() << '\n';//join has been called
  std::cout<<"oho:"<<oho.joinable()<<'\n';

  return 0;
}
