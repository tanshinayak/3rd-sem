#include <iostream>
#include <conio.h>
using namespace std;
class srt{
	private:
		int* ar;
		int size;
	public:
		srt()
		{
			ar = new int[0]
			size= 0;
		}
		srt(int s)
		{
			ar = new int[s];
			size = s;
		}
		void bubble();
		void insert();
		void selection();
		void display(int* a = ar);
};
void srt::bubble()
{
	int *temp = new int[size];
	for(int i = 0; i<size; i++)
		temp[i] = ar[i];
	
	
}
void srt::insert();
void srt::selection();
void srt::display(int* a = ar);
int main()
{
	getch();
	return 0;
}
