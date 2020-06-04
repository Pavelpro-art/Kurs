#pragma once
#include "Header.h"
#include "Game.h"
class Сhain {
protected:

 Сhain * next;
 Game *game_list;     // массив с играми
 int size_of_game_list;    // размер массива с играми
 virtual void result(Game* game); // результат найденной игры

public:
 Сhain();
 //Если не обнаружили нужную нам игру в этом узле, переходим на следующий
 Сhain* setNext(Сhain* сhain);
 // Если не обнаружили нужную нам игру в этом узле, переходим на следующий
 void search(Game* game);
 void add_to_file(string file); //добавление в файл
 void write_to_file(string file, int add_val); //запись в файл
 void read_from_file(string file); //чтение из файла
 virtual ~Сhain();
};
