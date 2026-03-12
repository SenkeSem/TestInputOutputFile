#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

class Point
{
public:
	int y;
	int x;
	int z;

	Point()
	{
		x = y = z = 0;
	}

	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	
	void Print()
	{
		std::cout << x << "\t" << y << "\t" << z << std::endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Point p1;
	//Point p2(1, 5, 7);
	//Point p3(2, 8, 12);
	//Point p4(8, 12, 0);
	Point point(8, 0, 4);

	//p1.Print();
	//p2.Print();
	//p3.Print();
	//p4.Print();

	std::ofstream fout;
	fout.open("test.txt", std::ofstream::app);

	if (!fout.is_open())
	{
		std::cout << "Ошибка открытия файла" << std::endl;
	}
	else
	{
		std::cout << "Файл открыт успешно!" << std::endl;
		fout.write((char*)&point, sizeof(Point));
	}

	fout.close();

	return 0;
}