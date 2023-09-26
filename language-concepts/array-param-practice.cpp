#include<iostream>
#include <string>

using namespace std;

struct User
{
    string name;
    string username;
    string password;
};

User * createUsers(int size) {
    User * users = new User[size];

    for (int i = 0; i < size; i++) {
        users[i].name = i + 2;
    }


    return users;
}

int main() {

    User * users = createUsers(5);

    for (int i = 0; i < 5; i++) {
        cout << users[i].name << endl;
    }

    return 0;
}
