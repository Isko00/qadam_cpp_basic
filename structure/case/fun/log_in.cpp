#include "log_in.h"
#include <iostream>
#include <string>
#include <climits>
#include <map>

using namespace std;

bool My_system::user_exists(string user_name) {
    return data_base.count(user_name) != 0;
}

pair<string, bool> My_system::get_user_name() {
    string user_name;
    pair<string, bool> result;

    for (int i = 3; i >= 0; i--) {
        cout << "Enter user_name:" << endl;
        cin >> user_name;
        if (!user_exists(user_name)) {
            cout << "Wrong name! " << i << " attempts left\n";
        } else {
            result = make_pair(user_name, 1);
            return result;
        }
    }

    result = make_pair("", 0);
    return result;
}

bool My_system::check_pass(string user_name) {
    string input, pass;

    cout << "Enter pass:" << endl;
    cin >> input;

    map<string, string>::iterator ret;
    ret = data_base.find(user_name);

    if (ret != data_base.end()) {
        pass = ret -> second;
    }

    for (int i = 3; i >= 0; i--) {
        if (pass.compare(input)) {
            cout << "Wrong password! Trials left [";
            cout << i << "]" << endl;
            cin >> input;
        } else {
            return 1;
        }
    }

    return 0;
}


bool My_system::add_user() {
    string user_name, pass;
    cout << "Enter username:" << endl;
    cin >> user_name;
    cout << "Enter password:" << endl;
    cin >> pass;

    pair<string, string> new_user (user_name, pass);

    pair< map<string, string>::iterator,bool > ret;
    ret = data_base.insert (new_user);

    if (ret.second == false) {
        cout << "Username already existed" << endl;
    }

    return ret.second;
}

bool My_system::login() {
    pair<string, bool> user_name = get_user_name();

    if (! user_name.second) {
        cout << "Wrong user name!";
        return 0;
    }

    string temp = user_name.first;
    if (!check_pass(temp)) {
        cout << "Wrong password!";
        return 0;
    }

    cout << "Login successful!";
    return 1;
}

void My_system::launch_menu() {
    int action;

    cout << "\n\n|" + string(18, '*') + "|\n";
    cout << "| Select an action |" << endl;
    cout << "| 1. Sign up       |" << endl;
    cout << "| 2. Sign in       |" << endl;
    cout << "| 3. Exit          |" << endl;
    cout << "|" + string(18, '*') + "|\n";

    while (!(cin >> action)) {
        cout << "Enter only numbers!\n";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> action;
    }

    switch(action) {
        case 1:
            add_user();
            break;
        case 2:
            if (login()) {
                return;
            }
        case 3:
            return;
        default:
            cout << "Non-existent option!";
    }
    
    launch_menu();

}