//
//  Search.cpp
//  Structure
//
//  Created by Yusuf Mike  on 8/14/24.
//

#include "Search.hpp"


int Binary_Search(DynSqList L,ElemType key){
    int low = 0,high = L.length-1, mid;
    while (low<=high) {
        mid = (low+high)/2;
        if(L.data[mid]==key){
            return mid;
        }else if (L.data[mid]>key){
            high=mid-1;
        }else
            low=mid+1;
    }
    return -1;
}
