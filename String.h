#pragma once
#include <cstdio>
#include <iostream>

class String{
public:
    String();
    ~String();
    int Length();
    void Add(char* c);
    void Copy(char* c);
    void Replace();
    void Remove(char* c);
    void Insert(char* c);
    void Accessor();
    void Mutator();
    void Compare(char* c);

private:
    char* string;
};