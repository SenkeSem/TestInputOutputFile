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

	//void Print()
	//{
	//	std::cout << x << "\t" << y << "\t" << z << std::endl;
	//}
};

std::ostream& operator<< (std::ostream& os, const Point& point)
{
	os << point.x << " " << point.y << " " << point.z << " " << std::endl;

	return os;
}

std::istream& operator>> (std::istream& is, Point& point)
{
	is >> point.x >> point.y >> point.z;
	return is;
}

void Foo(int value)
{
	if (value < 0)
		throw value;

	if (value == 13)
	{
		std::string ex = "Это же 13!!! Такие данные запрещено вводить. Удали.";
		throw ex;
	}

	std::cout << "Переменная = " << value << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*//Point p1;
	//Point p2(1, 5, 7);
	//Point p3(2, 8, 12);
	//Point p4(8, 12, 0);
	Point point(7, 66, 31);

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
	*/

	/*std::ifstream fin;
	fin.open("test.txt");

	if (!fin.is_open())
	{
		std::cout << "Не удалось открыть файл" << std::endl;
	}
	else
	{
		std::cout << "Файл открыт" << std::endl;
		Point buffer;

		while (fin.read((char*)&buffer, sizeof(Point)))
		{
			buffer.Print();
		}
	}

	fin.close();*/
	
	/*
	std::string path = "test2.txt";

	std::fstream fs;
	fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);

	if (!fs.is_open())
	{
		std::cout << "Файл не удалось открыть" << std::endl;
	}
	else
	{
		std::string buf;
		int choice;
		std::cout << "Файл открыт" << std::endl;
		std::cout << "Введите 1 для записи сообщения в файл: " << std::endl;
		std::cout << "Введите 2 для чтения всех сообщений из файла: " << std::endl;
		std::cin >> choice;

		if (choice == 1)
		{
			std::cout << "Введите сообщение для записи: ";
			std::cin >> buf;
			fs << buf << "\n";
		}

		if (choice == 2)
		{
			while (!fs.eof())
			{
				buf = "";
				fs >> buf;
				std::cout << buf << std::endl;
			}
		}
	}

	fs.close();
	*/

	/*
	std::string path = "test3.txt";
	std::fstream fs;
	fs.exceptions(std::fstream::badbit | std::fstream::failbit);

	try
	{
		std::cout << "попытка открыть файл" << std::endl;
		fs.open(path);


		std::cout << "файл успешно открыт" << std::endl;
	}
	catch (const std::ifstream::failure& ex)
	{
		std::cout << ex.what() << std::endl;
		std::cout << ex.code() << std::endl;
		std::cout << "ошибка открытия файла" << std::endl;
	}
	*/

	try
	{
		Foo(13);
	}
	catch (const int value) 
	{
		std::cout << "Случилась ошибка из-за переменной " << value << std::endl;
	}
	catch (const std::string& ex)
	{
		std::cout << ex << std::endl;
	}

	return 0;
}