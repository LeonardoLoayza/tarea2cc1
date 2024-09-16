#include <string>
#include <iostream>

class Date
{
public:
  Date(int cmonth, int cday, int cyear)
  {
    month = cmonth;
    day = cday;
    if (cmonth > 0 && cmonth < 13)
    {
      month = cmonth;
    }
    else
    {
      // std::cout << "error, numero no valido" << std::endl;
      month = 1;
    }
  }
  int getMonth()
  {
    return month;
  }
  void setMonth(int newMonth)
  {
    month = newMonth;
  }
  int getDay()
  {
    return day;
  }
  void setDay(int newDay)
  {
    day = newDay;
  }

  int getYear()
  {
    return year;
  }
  void setYear(int newYear)
  {
    year = newYear;
  }
  void displayDate()
  {
    std::cout << month << "/" << day << "/" << year << std::endl;
  }

private:
  int month;
  int day;
  int year;
};

int main()
{
  Date d1 = Date(4, 10, 2022);
  std::cout << "d1: " << d1.getYear() << std::endl;
  Date d2 = Date(0, 10, 2022);
  std::cout << "d2: " << d2.getYear() << std::endl;
}