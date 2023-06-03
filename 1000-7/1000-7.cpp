#include <iostream>
#include <thread>
using namespace std;


int main()
{
	for (int i = 1000; i > 6; i -= 7)
	{
		cout << i << "-7" << endl;
		this_thread::sleep_for(chrono::milliseconds(60));
	}
}