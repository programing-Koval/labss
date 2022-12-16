#include <stdio.h>
 
#define NICK "Bururiiich"
#define NICK_LENGTH 10
 
void get_nick() {
    char nick[NICK_LENGTH] = NICK;
    for(int i = 0; i < NICK_LENGTH; i++)
    {
        if(nick[i] == 'A' || nick[i] == 'a') {
            nick[i] = '@';
        }
        if(nick[i] == 'O' || nick[i] == 'o') {
            nick[i] = '0';
        }
        if(nick[i] == 'I' || nick[i] == 'i') {
            nick[i] = '1';
        }
        if(nick[i] == 'S' || nick[i] == 's') {
            nick[i] = '$';
}
    }
    printf("%s\n", nick);
}
 
int main() {
    get_nick();
}
