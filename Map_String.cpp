#include"Map_String.h"

Map_String::Map_String()
{

}

Map_String::~Map_String()
{

}

void Map_String::ChooseSize(int choose)
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

std::string Map_String::CreateStringKey()
{
	for (int i = 0; i < 5; i++)
	{
		tmp[i] = alphabet[rand() % alphabet.size()];
	}
	return tmp;
}

void Map_String::Insert()
{
	tmp.append(5, alphabet[0]);
	for (int i = 0; i < size; i++)
	{
		m.insert(pair<string, int>(CreateStringKey(), i));
	}
}

void Map_String::Print()
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

void Map_String::Find()
{
	key = rand() % alphabet.size();
	it = m.find(key);
}

//void Map_String::Create_Swap_Map()
//{
//	m0.insert(pair<string, int>("a", 1));
//}
//
//void Map_String::Swap()
//{
//	m.swap(m0);
//}
//
//void Map_String::Clear()
//{
//	m.clear();
//}
//
//void Map_String::Emplace()
//{
//	tmp.append(5, alphabet[0]);
//	for (int i = 0; i < size; i++)
//		m.emplace(pair< string, int>(CreateStringKey(), i));
//}
//
//void Map_String::Emplace_Hint()
//{
//	tmp.append(5, alphabet[0]);
//	auto it = m.begin();
//	for (int i = size; i > 0; --i)
//	{
//		m.emplace_hint(it, i, 'd');
//		it = m.begin();
//	}
//}
//
//void Map_String::Try_Emplace()
//{
//	for (int i = 0; i < size; i++)
//		m.try_emplace("a", i);
//}
//
//void Map_String::Erase()
//{
//	tmp.append(5, alphabet[0]);
//	for (int i = 0; i < size; i++)
//		m.erase(CreateStringKey());
//}
//
//void Map_String::Extract()
//{
//	tmp.append(5, alphabet[0]);
//	for (int i = 0; i < size; i++)
//		auto trash = m.extract(CreateStringKey());
//}
//
//void Map_String::CreateSameMapForMerge()
//{
//	for (int i = 0; i < size; i++)
//	{
//		m_merge.insert(pair< string, int>(CreateStringKey(), i));
//	}
//}
//
//void Map_String::Merge()
//{
//	m.merge(m_merge);
//}
//
void Map_String::Run()
{
	int sum = 0;
	for (auto i = m.begin(); i != m.end(); i++)
		sum++;
}