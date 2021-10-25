#include <iostream>
#include <fstream>

int	find_pos_in_array(const char *arr_start, int arr_len, const char *str, int str_len) {
	int pos = 0;
	while (pos < arr_len - str_len)
	{
		int i = 0;
		while (i < str_len) {
			if (arr_start[pos + i] != str[i])
				break;
			++i;
		}
		if (i == str_len)
			return (pos);
		++pos;
	}
	return (-1);
}

int	main(int argc, char **argv) {
	if (argc  != 4) {
		std::cout << "Wrong arguments amount!" << std::endl;
		return (-1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty()) {
		std::cout << "Can't replace nothing!" << std::endl;
		return (-1);
	}
	std::ifstream inputFile;
	inputFile.open(filename.c_str());
	if (!inputFile.is_open()) {
		std::cout << "Can't open source file!" << std::endl;
		return (-1);
	}
	std::ofstream outputFile;
	std::string outputFileName (filename);
	outputFileName.append(".replace");
	outputFile.open(outputFileName.c_str());
	if (!inputFile.is_open()) {
		std::cout << "Can't create replace file!" << std::endl;
		return (-1);
	}
	std::string buff;
	std::string line;
	bool read_status = std::getline(inputFile, line);
	while (read_status) {
		buff += line;
		read_status = std::getline(inputFile, line);
		if (read_status)
			buff+= '\n';
	}
	size_t	cpy_start = 0;
	size_t	pos = buff.find(s1, cpy_start);
	line = "";
	while (pos != std::string::npos) {
		line.append(buff, cpy_start, pos - cpy_start);
		line.append(s2);
		cpy_start = pos + s1.length();
		pos = buff.find(s1, cpy_start);
	}
	line.append(buff, cpy_start, buff.length() - cpy_start);
	outputFile << line;
}
