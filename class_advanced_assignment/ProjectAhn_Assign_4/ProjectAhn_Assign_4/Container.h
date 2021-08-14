#pragma once
class Container {                 // 통 하나를 나타내는 클래스 
    int size;                    // 현재 저장 량, 최대 저장량은 10 
public:
    Container();
    void fill();                // 최대량(10)으로 채우기 
    void consume();                // 1 만큼 소모하기 
    int getSize();                // 현재 크기 리턴 
};
