//Practice Qs
/*Create a User class with properties : id (private), username(public) & password (private).
Its id should be initialized in a parameterised constructor.
It should have a Getter & Setter for password.*/
#include <iostream>
#include <string>
using namespace std;
class User {
    private:
    string ID;
    string password;
    public:
    string UserName;
    User(string ID) {
        this->ID = ID;  // SETTER
    }
    string getID() {   
        return ID;   // GETTER
    }
    void Setpassword(string password) {   
        this->password = password;    // SETTER
    }
    string Getpassword(){
        return password;   // GETTER
    }
};
int main(){
    User u1("CS0246");
    u1.UserName = "SURYA SHRIVASTAVA"; 
    cout << "NAME : " << u1.UserName << "\n";
    cout << "ID : " << u1.getID() << "\n";
    u1.Setpassword("SURYA@598593465");
    cout << "PASSWORD : " << u1.Getpassword() << "\n";
    return 0;
}
