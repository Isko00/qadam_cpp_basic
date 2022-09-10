#include <iostream>

using namespace std;

class System {
    int user_names[100], passwords[100], users_amount = 0;

    int get_user_id(int user_name) {
        for (int i = 0; i < users_amount; i++) {
            if (user_names[i] == user_name) {
                return i;
            }
        }

        return -1;
    }

    bool check_user(int user_name) {
        return get_user_id(user_name) != -1;
    }

    bool add_user(int user_name, int password) {
        if (check_user(user_name)) {
            return 0;
        }
        
        user_names[users_amount] = user_name;
        passwords[users_amount] = password;
        users_amount = users_amount + 1;

        return 1;
    }

    void print_all() {
        for (int i = 0; i < users_amount; i++) {
            cout << user_names[i] << " -> " << passwords[i] << endl;
        }
    }

    bool login(int user_name, int password) {
        int user_id = get_user_id(user_name);

        if (user_id > -1) {
            if (passwords[user_id] == password) {
                return 1;
            }
        } 

        return 0;
    }

    bool sign_up() {
        int user_name, password;
        
        cout << "Enter username:" << endl;
        cin >> user_name;
        cout << "Enter password:" << endl;
        cin >> password;

        if (add_user(user_name, password)) {
            cout << "Registration completed!" << endl;
            return 1;
        } else {
            cout << "Username already existed!" << endl;
            return 0;
        }
    }

    bool sign_in() {
        int user_name, password;

        for (int i = 3; i >= 0; i--) {
            cout << "Enter user_name:" << endl;
            cin >> user_name;
            if (!check_user(user_name)) {
                cout << "Wrong name! " << i << " attempts left\n";
            } else {
                for (int j = 3; j >= 0; j--) {
                    cout << "Enter password:" << endl;
                    cin >> password;
                    if (!login(user_name, password)) {
                        cout << "Wrong password! " << j << " attempts left\n";
                    } else {
                        return 1;
                    }
                }

                return 0;
            }
        }

        return 0;
    }

public:
    void launch_menu() {
        int action;

        cout << endl << endl;
        cout << "|******************|" << endl;
        cout << "| Select an action |" << endl;
        cout << "| 1. Sign up       |" << endl;
        cout << "| 2. Sign in       |" << endl;
        cout << "| 3. Exit          |" << endl;
        cout << "|******************|" << endl;

        cin >> action;

        switch(action) {
            case 1:
                sign_up();
                break;
            case 2:
                sign_in();
                break;
            case 3:
                return;
            default:
                cout << "Non-existent option!";
        }
        
        launch_menu();
    }
};

int main() {
    System my_system;

    my_system.launch_menu();

    return 0;
}