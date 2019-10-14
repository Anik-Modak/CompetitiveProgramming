#include <bits/stdc++.h>
using namespace std;

void chck(char ch[7][5]) {
    int cnt = 0;
    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 5; j++)
            if(ch[i][j] == '*')
                cnt++;
    if(ch[0][0] == '.' && ch[0][1] == '*' && ch[0][2] == '*' && ch[0][3] == '*' && ch[0][4] == '.') { // .***.
        if(cnt == 18) printf("A");
        else if(cnt == 13) printf("C");
        else if(cnt == 15) printf("G");
        else if(cnt == 16) printf("O");
        else if(cnt == 17) printf("Q");
        else if(cnt == 11) printf("I");
    } else if(ch[0][0] == '*' && ch[0][1] == '*' && ch[0][2] == '*' && ch[0][3] == '*' && ch[0][4] == '.') { // ****.
        if(cnt == 20) printf("B");
        else if(cnt == 18 && ch[6][4] == '.') printf("D");
        else if(cnt == 15) printf("P");
        else if(cnt == 18) printf("R");
    } else if(ch[0][0] == '*' && ch[0][1] == '*' && ch[0][2] == '*' && ch[0][3] == '*' && ch[0][4] == '*') { // *****
        if(cnt == 18) printf("E");
        else if(cnt == 14) printf("F");
        else if(cnt == 11) printf("T");
        else if(cnt == 15) printf("Z");
    } else if(ch[0][0] == '*' && ch[0][1] == '.' && ch[0][2] == '.' && ch[0][3] == '.' && ch[0][4] == '*') { // *...*
        if(cnt == 17 && ch[3][1] == '*') printf("H");
        else if(cnt == 14) printf("K");
        else if(cnt == 18) printf("M");
        else if(cnt == 17 && ch[2][1] == '*') printf("N");
        else if(cnt == 15) printf("U");
        else if(cnt == 13 && ch[2][0] == '*') printf("V");
        else if(cnt == 17) printf("W");
        else if(cnt == 13) printf("X");
        else if(cnt == 10) printf("Y");
    } else if(cnt == 11 && ch[0][3] == '*') printf("J");
    else if(cnt == 11) printf("L");
    else if(cnt == 15) printf("S");
}

int main()
{
    string txt[8];
    for(int i = 0; i < 7; i++) {
        cin >> txt[i];
    }
    char ch[7][5];
    int st = 0;
    while(true) {
        for(int j = 0; j < 7; j++) {
            for(int k = st; k < st + 5; k++) {
                ch[j][k - st] = txt[j][k];
            }
        }
        chck(ch);
        st += 6;
        if(st >= txt[0].size())  break;
    }
    puts("");
}
