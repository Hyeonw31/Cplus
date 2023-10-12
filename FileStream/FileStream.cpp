#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>


using namespace std;

struct stTest
{
	string m_name;
	int m_math;
	int m_eng;
	int m_lang;

	stTest(string name = "", int math = 0, int eng = 0, int lang = 0) :
		m_name(name), m_math(math), m_eng(eng), m_lang(lang) {}

	void printTest()
	{
		printf("name=%s, math=%d, eng=%d, lang=%d\n"
			, m_name.c_str(), m_math, m_eng, m_lang);
	}

	void SetData(string& str)
	{
		stringstream ssTest(str);// string���ڿ���  stringstream �������·� �����.
		string line;// �о�� string ��Ƶ� ����

		// ssTest�� ���� ���� ','�� �������� ���ڸ� �о line�� �ִ´�.
		// getline ����� false(���̻� ���� ���ڿ��� ����)�� ����
		while (getline(ssTest, line, ','))
		{
			line.erase(remove(line.begin(), line.end(), ' '), line.end());

			int index = line.find('=');
			string leftStr = line.substr(0, index);
			string rightStr = line.substr(index + 1, line.length() - index);

			if (leftStr == "name")
			{
				m_name = rightStr;
			}
			else if (leftStr == "math")
			{
				m_math = stoi(rightStr);
			}
			else if (leftStr == "eng")
			{
				m_eng = stoi(rightStr);
			}
			else if (leftStr == "lang")
			{
				m_lang = stoi(rightStr);
			}
		}
	}
};

int main()
{
	// ���� ����
	/*
	std::ofstream writeFile;
	writeFile.open("test.txt");// "test.txt" ������ ����(������ ���ٸ��� �����Ѵ�.)

	std::string strTest = "test 1234 abcd �Դϴ�.\n";
	writeFile.write(strTest.c_str(), strTest.size());
	writeFile.write(strTest.c_str(), strTest.size());

	writeFile.close();// ������ �������� �ݵ�� �ݱ� ����
	*/
	// ���� �б�
	std::ifstream readFile;
	readFile.open("test.txt");

	vector<stTest> vecTest;
	//stTest aaa("aaa", 80, 60, 70);
	//vecTest.push_back(aaa);
	//stTest bbb("bbb", 90, 30, 40);
	//vecTest.push_back(bbb);
	//stTest ccc("ccc", 20, 90, 80);
	//vecTest.push_back(ccc);

	if (readFile.is_open())
	{
		while (!readFile.eof())
		{
			std::string str;
			std::getline(readFile, str);// readFile�� �ؽ�Ʈ�� ���� �о str�� �ִ´�.
			//printf("str=%s\n", str.c_str());

			stTest newData;
			newData.SetData(str);
			vecTest.push_back(newData);
		}
		readFile.close();
	}

	for (stTest& test : vecTest)
	{
		test.printTest();
	}
}