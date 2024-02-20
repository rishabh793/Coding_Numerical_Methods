#include <iostream>
#define N 3
int main()
{
 int i;
 int *u, *v, w;
 u = new int [N + 1];

 u[1] = 4; u[2] = -5; u[3] = 3;
 std::cout<<std::endl<< "Vector u: ";
 for (i = 1; i<=N; i++)
	std::cout << u[i] << " ";
 std::cout << std::endl;
}
