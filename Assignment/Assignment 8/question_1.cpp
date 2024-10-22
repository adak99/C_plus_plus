#include <iostream>
using namespace std;

class BookData
{
private:
    int ISBN, page, price;

public:
    BookData(int ISBN, int page, int price)
    {
        this->ISBN = ISBN;
        this->page = page;
        this->price = price;
    }

    float getPrice() { return price; }

    float getISBN() { return ISBN; }

    void display()
    {
        cout << ISBN << "\t\t" << page << "\t\t" << price << endl;
    }
};

int main()
{

    BookData Book_1(101, 600, 420);
    BookData Book_2(122, 720, 540);
    BookData Book_3(133, 550, 610);

    BookData books_data[3] = {Book_1, Book_2, Book_3};

    float totalPrice = 0;
    float maxPrice = books_data[0].getPrice();
    float minPrice = books_data[0].getPrice();
    int maxISBN = books_data[0].getISBN();
    int minISBN = books_data[0].getISBN();

    return 0;
}