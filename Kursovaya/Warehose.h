#include "Header.h"
#include "Warehose.h"

void Warehouse::result(Game * game)
{
 cout << "ТОВАР НАЙДЕН НА СКЛАДЕ" << endl;
}

Warehouse::Warehouse()
{
 filename = "Warehouse.txt";
 cout << endl << "~~~~~~~~~ СОДЕРЖИМОЕ СКЛАДА ~~~~~~~~~" << endl << endl;
 read_from_file(filename); //заполнение массива с играми в базовом классе
}

string Warehouse::get_filename() { return filename; }
