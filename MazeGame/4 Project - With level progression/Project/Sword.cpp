#include <iostream>
#include <windows.h>

#include "Sword.h"

void Sword::Draw()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, (int)m_color);

	std::cout << "/";
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}