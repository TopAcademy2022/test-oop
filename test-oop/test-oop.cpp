#include "user.h"

int main()
{
    setlocale(0, "ru");
    User user = User(16);
    user.setAge(20);
    user.print();
}