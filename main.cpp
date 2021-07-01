#include <iostream>
#include <vector>

using namespace std;

void shaken(vector <char> &chats, char chat_name) {
    char temp;
    for (int i = 0; i < chats.size(); i++) {
        if (chats[i] == chat_name) {
            temp = chats[i];
            chats.erase(chats.begin() + i);
            chats.insert(chats.begin() + 0, temp);
            break;
        }
    }
    // переставить на первое место, остальные опустить вниз
}

int main()
{
    //инициализация
    int n, m;
    vector <char> chats;
    
    //ввод
    cin >> n;
    for (int i = 0; i < n; i++) {
        char temp;
        cin >> temp;
        chats.push_back(temp);
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        char temp;
        cin >> temp;
        shaken(chats, temp);
    }
    //обработка
    
    //вывод
    cout << endl;
    for (auto i : chats) {
        cout << i << endl;
    }
    
    return 0;
}
