#include <iostream>

int str_len(char _str[]) {
    int size = 0;
    while (_str[size] != '\0') {
        ++size;
    }
    return size;
} 

void str_copy(char _str[], char _src[]) {
    while((*_str++ = *_src++) != '\0');
} 

char* del_char(char _str[], char ch) {
    int index; 
    for (int i = 0; i < str_len(_str); ++i) {
        if (_str[i] == ch) {
            index = i;
            break;
        }
    }

    char* str = new char[str_len(_str) - 1];
    
    for (int i = 0; i < index; ++i) {
        str[i] = _str[i];
    }
    str_copy(str + index, _str + index + 1);

    return str;
} 

char* replace(char _str[], char _old[], char _new[]) {
    int index = 0;
    int begin, end;

    for (int i = 0; i < str_len(_str); ++i) {
        if (_str[i] == _old[index]) {
            if (index == str_len(_old) - 1) {
                end = i + 1;
                break;
            }
            ++index;
        } else {
            index = 0;
        }
    }

    begin = end - str_len(_old);

    char* str = new char[str_len(_str) + str_len(_new) - str_len(_old)];

    for (int i = 0; i < begin; ++i) {
        str[i] = _str[i];
    }

    str_copy(str + begin, _new);
    str_copy(str + begin + str_len(_new) - 1, _str + end - 1);

    return str;
} 

int main() {
    char str[] = "if(fset<<0){lsek(s,ofset,SEEK_END);}";
    char symbol = '<';
    char _old[] = "lsek";
    char _new[] = "lseek";
    char* str_without_symbol = del_char(str, symbol);
    char* replaced_str = replace(str_without_symbol, _old, _new);

    std::cout << str << std::endl;
    std::cout << str_without_symbol << std::endl;
    std::cout << replaced_str << std::endl;
    
    return 0;
}