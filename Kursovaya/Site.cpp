#include "Header.h"
#include "Site.h"

void Site::result(Game * game)
{
 {
  cout << "ТОВАР НАЙДЕН НА САЙТЕ" << endl;
 }
}

Site::Site()
{
 filename = "Site.txt";
 cout << endl << "~~~~~~~~~ СОДЕРЖИМОЕ САЙТА ~~~~~~~~~" << endl << endl;
 read_from_file(filename); //заполнение массива с играми в базовом классе
}

string Site::get_filename() { return filename; }
