#include "Header.h"
#include "Chain.h"
#include "Game.h"

void Сhain::result(Game * game) {}

Сhain::Сhain()
{
 next = nullptr;
 game_list = nullptr;
 size_of_game_list = NULL;
}

Сhain * Сhain::setNext(Сhain * сhain)
{
 next = сhain;
 return next;
}

void Сhain::search(Game * game)
{

}

void Сhain::add_to_file(string file)
{
 int add_value; //сколько игр хотим добавить
 read_from_file(file);

 cout << "Сколько игр вы хотите добавить в базу? " << endl;
 cin >> add_value;
 size_of_game_list += add_value;

 write_to_file(file, add_value);
}

void Сhain::write_to_file(string file, int add_val)
{

}

void Сhain::read_from_file(string file)
{

}

Сhain::~Сhain()
{
 if (game_list)
 {
  delete[] game_list;
 }
 if (next)
 {
  delete next;
 }
}
