#include <iostream>
#include <string>
#include <fstream>

void test1()
{
	//std::ofstream file;
	std::ifstream file;

	//file_out.open("test.txt", std::ofstream::app);
	//дописывает данные в конец файла

	file.open("test.txt");

	if (file.is_open())
	{
		std::cout << "файл успешно открыт" << std::endl;

		//char ch;
		std::string str;

		while (!file.eof())
		{
			std::getline(file, str);
			std::cout << str << std::endl;
		}

		std::cout << "\n";

		//for (int i = 0; i < 5; i++)
		//{
		//	std::cout << "Введите число: ";
		//	int num;
		//	std::cin >> num;
		//	file << num << "\n";
		//}

		//for (int i = 0; i < 20; i++)
		//{
		//	file_out << i << " какие-то данные\n";
		//}
	}
	else
		std::cout << "не удалость открыть файл" << std::endl;

	file.close();
}