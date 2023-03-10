#pragma once
#include<iostream>
#include<map>

using namespace std;
class Map
{
private:
	int key = -1;
	int size = 250000;
	map<int, int> m;
	map<int, int> m0;
	map<int, int> m_merge;
	map<int, int>::iterator it;
public:
	Map();
	~Map();
	void ChooseSize(int choose);
	void Create_Swap_Map();
	void EnterKey();
	void CreateSameMapForMerge();

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