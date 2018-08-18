#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <Windows.h>

#include <fstream>

#include "Level.h"
#include <nlohmann/json.hpp>
#pragma comment(lib, "Winmm.lib")

using json = nlohmann::json;

using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void slowPrint(const string&, unsigned int);

int main() {
	/*
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string message1 = "Еще одна среда. На работе завал. Наконец пришел домой.";
	string message2 = "(Новое сообщение)";
	string message3 = "\"Какое же классное аниме я сегодня посмотрел, теперь целую неделю буду от него отходить\"";
	string message4 = "Это писал Макар, Макар Продольный. "
		"Когда его отец работал на макаронной фабрике, директор пообещал большую сумму тому, \nкто назовет сына в честь фирмы - "
		"это были старые советские макароны - так и получился Макар. ";
	slowPrint(message1, 70);
	mciSendString("play icq.mp3", NULL, 0, NULL);
	slowPrint(message2, 30);
	slowPrint(message3, 70);
	slowPrint(message4, 70);

	std::cin.get();
	*/

	//Level level;

	std::ifstream in("test.json");
	json j;
	in >> j;

	cout << j["id"];
	cout << j["info"].get<std::string>();

	std::cin.get();
}

void slowPrint(const string& message, unsigned int millis_per_char) {
	for (const char c : message) {
		cout << c << flush;
		sleep_for(milliseconds(millis_per_char));
	}
	cout << std::endl;
}