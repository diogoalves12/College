

char* duplicate(const char s[]){
    int size = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        size++;
    }

    char* dup = new char[size + 1];

    for(int i = 0; i < size; i++){
        dup[i] = s[i]; 
    }

    dup[size] = '\0';
    return dup;
}