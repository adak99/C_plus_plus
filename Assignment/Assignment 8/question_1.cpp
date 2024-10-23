#include <iostream>
using namespace std;

class Book
{
private:
    int isbn, page, price;

public:
    // create a constructor
    Book(int isbn, int page, int price)
    {
        this->isbn = isbn;
        this->page = page;
        this->price = price;
    }

    // get price function
    int getPrice() { return price; }
    // get ISBN function
    int getISBN() { return isbn; }

    // display all data
    void display()
    {
        cout << isbn << "\t\t" << page << "\t\t" << price << endl;
    }
};

int main()
{

    Book data_1(101, 600, 420);
    Book data_2(122, 720, 540);
    Book data_3(133, 550, 610);

    Book allData[3] = {data_1, data_2, data_3};

    // calculate total price
    int totalPrice = 0;
    for (int i = 0; i < 3; i++)
    {
        totalPrice += allData[i].getPrice();
    }

    // calcualte avarage
    float avg = totalPrice / 3;

    // calculate max and min ISBN and Price
    int minPrice = allData[0].getPrice();
    int minISBN = allData[0].getISBN();
    int maxPrice = allData[0].getPrice();
    int maxISBN = allData[0].getISBN();

    for (int i = 0; i < 3; i++)
    {
        if (allData[i].getPrice() < minPrice && allData[i].getISBN() < minISBN)
        {
            minPrice = allData[i].getPrice();
            minISBN = allData[i].getISBN();
        }

        if (allData[i].getPrice() > minPrice && allData[i].getISBN() > minISBN)
        {
            maxPrice = allData[i].getPrice();
            maxISBN = allData[i].getISBN();
        }
    }

    // display all data
    cout << "ISBN" << "\t\t" << "Page" << "\t\t" << "Price" << endl;
    for (int i = 0; i < 3; i++)
    {
        allData[i].display();
    }

    cout << "The total price of all books: " << totalPrice << endl;
    cout << "The average price of all books: " << (int)avg << endl;
    cout << "Highest book price and ISBN: " << "Price: " << maxPrice << " ISBN: " << maxISBN << endl;
    cout << "Lowest book price and ISBN: " << "Price: " << minPrice << " ISBN: " << minISBN << endl;

    return 0;
}
