#include <iostream>
#include <map>

using namespace std;

class My_system {
    map<string, string> data_base;

    bool user_exists(string user_name);

    pair<string, bool> get_user_name();

    bool check_pass(string user_name);


    bool add_user();

    bool login();

public:
    void launch_menu();
};