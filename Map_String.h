#pragma once
#include<iostream>
#include<map>
#include<string>

using namespace std;
class Map_String
{
private:
	int size = 250000;
	std::string key;
	std::string tmp;
	std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	map<string, int> m;
	map<string, int> m0;
	map<string, int> m_merge;
	map<string, int>::iterator it;
public:
	Map_String();
	~Map_String();
	void ChooseSize(int choose);
	void Create_Swap_Map();
	void EnterKey();
	void CreateSameMapForMerge();
	std::string CreateStringKey();

	void Print();

	void Run();
	void Find();

	void Clear();
	void Insert();
	void Extract();
	void Insert_or_Assign();
	void Emplace();
	void Emplace_Hint();
	void Try_Emplace();
	void Swap();
	void Erase();
	void Merge();
};