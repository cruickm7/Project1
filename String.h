#pragma once
#include <cstdio>
#include <iostream>

class String{
public:
    String();
    ~String();
    int Length();                       //EZ
    void Add(char* c);                  //TODO figure out what this is supposed to do
    void Copy(char* c);                 //Ditto
    void Replace(char *a, char *b);
    void Remove(char* c);
    void Insert(char* c);
    void Accessor();
    void Mutator(char* c);
    void Compare(char* c);
private:
    char* string;
};