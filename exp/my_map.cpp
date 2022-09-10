#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> db;
    
    string name = "Islam", pass = "Qw123";
    pair<string, string> user1 (name, pass);
    db.insert (user1);

    name = "Islam", pass = "Re321";
    pair<string, string> user2 (name, pass);

    pair< map<string, string>::iterator,bool > ret;
    ret = db.insert (user2);
    if (ret.second == false) {
        cout << "element 'z' already existed";
        cout << " with a value of " << ret.first->second << '\n';
    }
    map<string, string>::iterator it = db.begin();
    for (it = db.begin(); it != db.end(); ++it) {
        cout << it -> first << " => " << it -> second << '\n';
    }
}