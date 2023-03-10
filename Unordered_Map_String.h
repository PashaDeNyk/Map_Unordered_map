#pragma once
#include<iostream>
#include<unordered_map>

using namespace std;
class Unordered_Map_String
{
private:
	int size = 250000;
	std::string key;
	std::string tmp;
	std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	unordered_map<string, int> m;
	unordered_map<string, int> m0;
	unordered_map<string, int> m_merge;
	unordered_map<string, int>::iterator it;
public:
	Unordered_Map_String();
	~Unordered_Map_String();

	void ChooseSize(int choose);
	void CreateSwapMap();
	void CreateSameMapForMerge();
	void Run();
	std::string CreateStringKey();
	void Find();
	void Print();


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