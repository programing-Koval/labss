#include <stdio.h>
 
int main() {
 
#define  TEXT_LENGTH 10
 
char nick[TEXT_LENGTH] = { 'B', 'u', 'r', 'u', 'r', 'i', 'i', 'i', 'c', 'h' };
for(int i = 0; i < TEXT_LENGTH; i++){
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
 
return 0;
}
