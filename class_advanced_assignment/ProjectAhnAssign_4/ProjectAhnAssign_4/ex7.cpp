#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
    int cnt = 0;
    int r;
    Circle *pArray = new Circle[3]; // 동적으로 객체 배열 생성

    for (int i = 0; i < 3; i++) {
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> r;
        pArray[i].setRadius(r);

        if (pArray[i].getArea() > 100) // 면적이 100보다 크면 카운트 
            cnt++;
    }
    cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";

    delete pArray;
}
