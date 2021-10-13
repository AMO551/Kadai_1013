#include <stdio.h>
class newInt
{
public:
	~newInt()
	{
		delete[] newarayy;
		newarayy = nullptr;
	};
	void getnewInt(int num)
	{
		newarayy = new int[num];
	}
	void get(int num, int num1)
	{
		newarayy[num] = num1;

	};
	int set(int num)
	{
		//num = newarayy[num];
		return newarayy[num];
	};
private:
	int* newarayy = new int[1000];
};
int main()
{

	newInt newint;
	newint.getnewInt(1000);

	for (int i = 0; i <= 999; i++)
	{
		newint.get(i, i);
		printf("newint=%d\n", newint.set(i));

	}

	return 0;
}