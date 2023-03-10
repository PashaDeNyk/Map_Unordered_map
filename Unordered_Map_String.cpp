#include"Unordered_Map_String.h"

Unordered_Map_String::Unordered_Map_String()
{

}

Unordered_Map_String::~Unordered_Map_String()
{

}

void Unordered_Map_String::ChooseSize(int choose)
{
	switch (choose)
	{
	case 1:
	{
		size = 250000;
	}break;
	case 2:
	{
		size = 2500000;
	}break;
	case 3:
	{
		size = 25000000;
	}break;
	}
	cout << "Choose done" << endl;
}

void Unordered_Map_String::Clear()
{
	m.clear();
}

std::string Unordered_Map_String::CreateStringKey()
{
	for (int i = 0; i < 5; i++)
	{
		tmp[i] = alphabet[rand() % alphabet.size()];
	}
	return tmp;
}

void Unordered_Map_String::Insert()
{
	tmp.append(5, alphabet[0]);
	for (int i = 0; i < size; i++)
	{
		m.insert(pair<string, int>(CreateStringKey(), i));
	}
}

void Unordered_Map_String::Print()
{
	for (auto [key, value] : m)
	{
		std::cout << "[" << key << "] " << value << '\n';
	}
}

//void Map_String::Insert_or_Assign()
//{
//	tmp.append(5, alphabet[0]);
//	for (int i = 0; i < size; i++)
//	{
//		m.insert_or_assign(CreateStringKey(), size - i);
//	}
//}

void Unordered_Map_String::Find()
{
	key = rand() % alphabet.size();
	it = m.find(key);
}

//void Unordered_Map_String::Emplace()
//{
//	for (int i = 0; i < size; i++)
//		m.emplace(pair< int, int>(i, i));
//}
//
//void Unordered_Map_String::Emplace_Hint()
//{
//	auto it = m.begin();
//	for (int i = size; i > 0; --i)
//	{
//		m.emplace_hint(it, i, 'd');
//		it = m.begin();
//	}
//}
//
//void Unordered_Map_String::Try_Emplace()
//{
//	for (int i = 0; i < size; i++)
//		m.try_emplace(i, i);
//}
//
//void Unordered_Map_String::Erase()
//{
//	for (int i = 0; i < size; i++)
//		m.erase(i);
//}
//
//void Unordered_Map_String::CreateSwapMap()
//{
//	m0.insert(pair<int, int>(1, 1));
//}
//
//void Unordered_Map_String::Swap()
//{
//	m.swap(m0);
//}
//
//void Unordered_Map_String::Extract()
//{
//	for (int i = 0; i < size; i++)
//		auto trash = m.extract(i);
//}
//
//void Unordered_Map_String::CreateSameMapForMerge()
//{
//	for (int i = 0; i < size; i++)
//	{
//		m_merge.insert(pair< int, int>(i, i));
//	}
//}
//
//void Unordered_Map_String::Merge()
//{
//	m.merge(m_merge);
//}
//
//#pragma region HASH
//void Unordered_Map_String::Load_Factor()
//{
//	cout << "LOAD FACTOR " << m.load_factor() << endl;
//}
//
//void Unordered_Map_String::Max_Load_Factor()
//{
//	cout << "MAX LOAD FACTOR " << m.max_load_factor() << endl;
//}
//
//void Unordered_Map_String::Rehash()
//{
//	m.rehash(1);
//}
//
//void Unordered_Map_String::Reserve()
//{
//	m.reserve(1);
//}
//#pragma endregion
//
//void Unordered_Map_String::Hash_Function()
//{
//	m.hash_function();
//}
//
//void Unordered_Map_String::Key_Eq()
//{
//	m.key_eq();
//}

void Unordered_Map_String::Run()
{
	int sum = 0;
	for (auto i = m.begin(); i != m.end(); i++)
		sum++;
}