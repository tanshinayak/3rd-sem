#include <iostream>
#include <cinio.h>
using namespace std;

class matrix{
	int** p;
	int n;
	int m;
	public:
		matrix(int n);
		matrix multiply(matrix a);
		void show();
};

void matrix::show()
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			cout<<p[i][j]<<"	";
		cout<<endl;
	}
}

matrix::matrix(int n, int m)
{
	p = new int*[n];
	for(int i=0; i<m; i++)
	{
		p[i] = new int[m];
	}
}

matrix::multiply()

int main()
{
	getch();
	return 0;
}
