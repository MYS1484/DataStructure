//
//  SequenceString.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#include "SequenceString.hpp"

// 赋值操作。把串T赋值为chars
void StrAssign(SString &T,char chars[]){
    strcpy(T.ch, chars);
    T.length = strlen(chars);
}

// 复制操作。由串S复制得到串T。
void StrCopy(SString &T,SString S){
    strcpy(T.ch, S.ch);
    T.length = S.length;
}

// 判空操作。若S为空串，则返回true，否则返回false。
bool StrEmpty(SString S){
    if(strlen(S.ch)>0){
        return true;
    }else{
        return false;
    }
}

// 比较操作。若S>T，则返回值>0;若S=T，则返回值=0:若S<T，则返回值<0。
int StrCompare(SString S,SString T){
    for (int i=0; i<S.length && i<T.length; i++) {
        if (S.ch[i] != T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length - T.length;
}

// 求串长。返回串s的元素个数。
int StrLength(SString S){
    return S.length;
}

// 求子串。用Sub返回串S的第pos个字符起长度为len的子串。
bool Substring(SString &Sub, SString S, int pos, int len){
    if (pos < 0 || pos >= S.length || len < 0 ||(pos + len) > S.length){
        return false;
    }
    for (int i=0; i<len; i++) {
        Sub.ch[i] = S.ch[pos+i];
    }
    Sub.ch[len] = '\0';
    Sub.length = len;
    return true;
}

// 串联接。用T返回由S1和S2联接而成的新串。
void Concat(SString &T, SString S1, SString S2){
    // 复制S1
    strcpy(T.ch, S1.ch);
    // 连接S2
    strcat(T.ch, S2.ch);
    T.length = S1.length + S2.length;
}

// 定位操作。若主串s中存在与串工值相同的子串，则返回它在主串s中,第一次出现的位置;否则两数值为0。
// 暴力定位
int Index(SString S, SString T){
    int i=0;
    int n = StrLength(S);
    int m = StrLength(T);
    SString sub;
    while (i<n-m+1) {
        Substring(sub, S, i, m);
        if (StrCompare(sub, T) == 0){
            return i;
        }else{
            i++;
        }
    }
    return 0;
}

// 清空操作，将S清为空串。
void ClearString(SString &S){
    S.length = 0;
    S.ch[0] = '\0';
}

// 销毁串。将串S销毁
void DestroyString(SString &S){
    ClearString(S);
}

void get_next(SString T, int next[]){
    int i = 1, j = 0;
    next[1] = 0;
    
    while (i < T.length) {
        if (j == 0 || T.ch[i-1] == T.ch[j-1]) {
            ++i;
            ++j;
            // 当j为-1时（即没有公共前后缀）或者当前字符匹配时
            next[i] = j;
        } else {
            // 当字符不匹配时，j回溯到next[j]
            j = next[j];
        }
    }
}

void get_nextVal(SString T, int next[]) {
    int i = 1, j = 0;
    next[1] = 0;
    while (i < T.length) {
        if (j == 0 || T.ch[i - 1] == T.ch[j - 1]) {
            ++i;
            ++j;

            if (T.ch[i-1] != T.ch[j-1]) {
                next[i] = j;
            } else {
                next[i] = next[j];
            }
        } else {
            // 当字符不匹配时，j回溯到next[j]
            j = next[j];
        }
    }
}

int Index_KMP(SString S,SString T,int next[]){
    int i = 0, j = 0;
        while (i < S.length && j < T.length)
        {
            if (j == -1 || S.ch[i] == T.ch[j])
            {
                ++i;
                ++j;
            }
            else
            {
                j = next[j];
            }
        }
        if (j >= T.length)
        {
            return i - T.length;
        }
        else
        {
            return 0;
        }
}
