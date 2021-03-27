#include <iostream>
#include <locale>
#include <fstream>
#include <Windows.h>
#include <cstring>

using namespace std;

void Encryption() {
    int t = 0;

    int xA, yA, xB, yB;

    char KubeA[7][5];

    char KubeB[7][5];

    size_t length = 0;
    char* buf = 0;
    ifstream fs("Square1.txt");
    for (int i = 0; i < 11; i++)
        if (fs.is_open())
        {
            fs.seekg(0, ios::end);
            length = fs.tellg();
            fs.seekg(0, ios::beg);
            buf = new char[1 + length];
            fs.read(buf, length);
            buf[length] = 0;
        }
    fs.close();

    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 5; j++) {
            KubeA[i][j] = buf[t];
            t++;
        }
    t = 0;
    cout << "Square 1";
    for (int i = 0; i < 7; i++) {
        cout << endl;
        for (int j = 0; j < 5; j++)
            cout << KubeA[i][j];
    }

    cout << endl;
    cout << endl;

    size_t length2 = 0;
    char* buf2 = 0;
    ifstream fs2("Square2.txt");
    for (int i = 0; i < 11; i++)
        if (fs2.is_open())
        {
            fs2.seekg(0, ios::end);
            length2 = fs2.tellg();
            fs2.seekg(0, ios::beg);
            buf2 = new char[1 + length2];
            fs2.read(buf2, length2);
            buf2[length2] = 0;

        }
    fs2.close();

    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 5; j++) {
            KubeB[i][j] = buf2[t];
            t++;
        }

    cout << "Square 2";

    for (int i = 0; i < 7; i++) {
        cout << endl;
        for (int j = 0; j < 5; j++)
            cout << KubeB[i][j];
    }
  
    cout << endl;
    cout << endl;

    size_t length3 = 0;
    char* tell = 0;
    ifstream fs3("massage.txt");
    for (int i = 0; i < 11; i++)
        if (fs3.is_open())
        {
            fs3.seekg(0, ios::end);
            length3 = fs3.tellg();
            fs3.seekg(0, ios::beg);
            tell = new char[1 + length3];
            fs3.read(tell, length3);
            tell[length3] = 0;

        }
    fs3.close();
    cout << tell << endl;

    char* shifr = 0;
    shifr = new char[length3];

    for (int ct = 0; ct < length3; ct++)
        if (ct % 2 == 0)
            for (int i = 0; i < 7; i++)
                for (int j = 0; j < 5; j++) {
                    if (tell[ct] == KubeA[i][j]) {
                        xA = i;
                        yA = j;
                    }
                }
        else
            for (int i = 0; i < 7; i++)
                for (int j = 0; j < 5; j++) {
                    if (tell[ct] == KubeB[i][j]) {
                        xB = i;
                        yB = j;
                        if (xA != xB) {
                            shifr[ct - 1] = KubeB[xA][yB];
                            shifr[ct] = KubeA[xB][yA];
                            cout << shifr[ct - 1];
                            cout << shifr[ct];
                        }
                        else
                        {
                            shifr[ct - 1] = KubeB[xA][yA];
                            shifr[ct] = KubeA[xB][yB];
                            cout << shifr[ct - 1];
                            cout << shifr[ct];
                        }
                    }
                }
    ;
    cout << endl;
    cout << endl;
}

void Decryption() {
    int t = 0;

    int xA, yA, xB, yB;

    char KubeA[7][5];

    char KubeB[7][5];

    size_t length = 0;
    char* buf = 0;
    ifstream fs("Square1.txt");
    for (int i = 0; i < 11; i++)
        if (fs.is_open())
        {
            fs.seekg(0, ios::end);
            length = fs.tellg();
            fs.seekg(0, ios::beg);
            buf = new char[1 + length];
            fs.read(buf, length);
            buf[length] = 0;
        }
    fs.close();

    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 5; j++) {
            KubeA[i][j] = buf[t];
            t++;
        }
    t = 0;

    cout << "Square 1";

    for (int i = 0; i < 7; i++) {
        cout << endl;
        for (int j = 0; j < 5; j++)
            cout << KubeA[i][j];
    }

    cout << endl;
    cout << endl;

    size_t length2 = 0;
    char* buf2 = 0;
    ifstream fs2("Square2.txt");
    for (int i = 0; i < 11; i++)
        if (fs2.is_open())
        {
            fs2.seekg(0, ios::end);
            length2 = fs2.tellg();
            fs2.seekg(0, ios::beg);
            buf2 = new char[1 + length2];
            fs2.read(buf2, length2);
            buf2[length2] = 0;

        }
    fs2.close();

    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 5; j++) {
            KubeB[i][j] = buf2[t];
            t++;
        }

    cout << "Square 2";

    for (int i = 0; i < 7; i++) {
        cout << endl;
        for (int j = 0; j < 5; j++)
            cout << KubeB[i][j];
    }
    cout << endl;
    cout << endl;

    size_t length3 = 0;
    char* tell = 0;
    ifstream fs3("Smassage.txt");
    for (int i = 0; i < 11; i++)
        if (fs3.is_open())
        {
            fs3.seekg(0, ios::end);
            length3 = fs3.tellg();
            fs3.seekg(0, ios::beg);
            tell = new char[1 + length3];
            fs3.read(tell, length3);
            tell[length3] = 0;

        }
    fs3.close();
    cout << tell << endl;

    char* shifr = 0;
    shifr = new char[length3];

    for (int ct = 0; ct < length3; ct++)
        if (ct % 2 == 0)
            for (int i = 0; i < 7; i++)
                for (int j = 0; j < 5; j++) {
                    if (tell[ct] == KubeB[i][j]) {
                        xB = i;
                        yB = j;
                    }
                }
        else
            for (int i = 0; i < 7; i++)
                for (int j = 0; j < 5; j++) {
                    if (tell[ct] == KubeA[i][j]) {
                        xA = i;
                        yA = j;
                        if (xA != xB) {
                            shifr[ct - 1] = KubeA[xB][yA];
                            shifr[ct] = KubeB[xA][yB];
                            cout << shifr[ct - 1];
                            cout << shifr[ct];
                        }
                        else
                        {
                            shifr[ct - 1] = KubeA[xB][yB];
                            shifr[ct] = KubeB[xA][yA];
                            cout << shifr[ct - 1];
                            cout << shifr[ct];
                        }
                    }
                }
    ;
    cout << endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choose = 1;




    while (choose != 0) {
        cout << "Encryption the massage (1)" << endl;
        cout << "Decryption the massage (2)" << endl;
        cout << "Exit the programm (0)" << endl;
        cin >> choose;
        switch (choose) {
        case 1:
            Encryption();
            break;
        case 2:
            Decryption();
            break;
        default:
            cout << "Exit";
        }
    }
    return 0;
}