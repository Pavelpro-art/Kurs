#include "Header.h"
#include "Shop.h"

void Shop::result(Game * game)
{
 cout << "ТОВАР НАЙДЕН В МАГАЗИНЕ" << endl;
}
Shop::Shop()
{
 filename = "Shop.txt";
 cout << endl << "~~~~~~~~~ СОДЕРЖИМОЕ МАГАЗИНА ~~~~~~~~~" << endl << endl;
 read_from_file(filename); //заполнение массива с играми в базовом классе
}
string Shop::get_filename() { return filename; }
