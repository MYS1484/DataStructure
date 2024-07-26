//
//  SequenceString.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#ifndef SequenceString_hpp
#define SequenceString_hpp

#include <iostream>
#include <cstring>
#define MaxSize 255

typedef struct {
    char ch[MaxSize];
    int length;
}SString;

void StrAssign(SString &T,char chars[]);
void StrCopy(SString &T,SString S);
bool StrEmpty(SString S);
int StrCompare(SString S,SString T);
int StrLength(SString S);
bool Substring(SString &Sub, SString S, int pos, int len);
void Concat(SString &T, SString S1, SString S2);
int Index(SString S, SString T);
void ClearString(SString &S);
void DestroyString(SString &S);

void get_next(SString T, int next[]);
void get_nextVal(SString T, int next[]);
int Index_KMP(SString S,SString T,int next[]);

#endif /* SequenceString_hpp */
