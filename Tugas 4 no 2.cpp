#include <iostream>
using namespace std;
int main(){
    string username;
    string password;

    cout << "Masukkan Username anda: ";
    cin >> username;
    cout << "Masukkan Password anda: ";
    cin >> password;

    if(username == "Dicky"){
            if(password == "Dicky123"){
            cout << "Username dan Password sesuai, Login berhasil. " << endl;
        }else{
            cout << "Username sesuai, Password tidak sesuai. " << endl;
        }
    }else{
        if(password == "Dicky123"){
            cout << "Username tidak sesuai, Password sesuai. " << endl;
    }else{
            cout << "Username dan Password tidak sesuai. " << endl;
    }
}

return 0;
}
