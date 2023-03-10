#pragma once
#include<iostream>
#include<unordered_map>

using namespace std;
class Unordered_Map
{
private:
	int key = -1;
	int size = 250000;
	unordered_map<int, int> m;
	unordered_map<int, int> m0;
	unordered_map<int, int> m_merge;
	unordered_map<int, int>::iterator it;
public:
	Unordered_Map();
	~Unordered_Map();

	void ChooseSize(int choose);
	void CreateSwapMap();
	void CreateSameMapForMerge();
	void Run();

	void EnterKey();
	void Find();

	void Clear();
	void Insert();
	void Insert_or_Assign();
	void Emplace();
	void Emplace_Hint();
	void Try_Emplace();
	void Erase();
	void Swap();
	void Extract();
	void Merge();

#pragma region HASH
	void Load_Factor();
	void Max_Load_Factor();
	void Rehash();
	void Reserve();
#pragma endregion
#pragma region Observers
	void Hash_Function();
	void Key_Eq();
#pragma endregion
};