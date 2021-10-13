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
	};
	void get(int num, int num1)
	{
		newarayy[num] = num1;

	};
	int set(int num)
	{
		return newarayy[num];
	};
	void getCreate()
	{
		for (int i = 0; i <= 999; i++)
		{
			get(i, i);
		}
	};
	void setCreate()
	{
		for (int i = 0; i <= 999; i++)
		{
			printf("newint=%d\n", set(i));
		}
	};
private:
	int* newarayy = new int[1000];
};
int main()
{

	newInt newint;
	newint.getnewInt(1000);
	newint.getCreate();
	newint.  setCreate();



	return 0;
}