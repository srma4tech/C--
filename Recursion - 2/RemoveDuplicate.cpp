#include<iostream>
using namespace std;

void removeDup(char *input){
    if(input[0] == '\0'){
        return ;
    }
    if(input[0] != input[1]){
        removeDup(input+1);
    }else{
        int i=1;
        for(;input[i] != '\0'; i++){
            input[i-1] = input[i];
        }
        input[i-1] = input[i];
        return removeDup(input);
    }
}

int main(){
    char input[10000];
    cin.getline(input, 10000);
    removeDup(input);
    cout << input << endl;
}