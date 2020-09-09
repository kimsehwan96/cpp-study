# 인라인 함수

* 함수 호출의 오버헤드

- 함수를 호출하면 함수 내부의 코드를 실행하고 다시 호출 한 곳으로 돌아오는데 시간이 든다.

함수 호출 -> 돌아올 리턴 주소 저장 -> CPU 레지스터 값 저장 -> 함수의 매개변수를 스택에 저장 -> 함수 실행 -> 함수의 리턴값을 임시 저장소에 저장 ->
저장한 레지스터 값 CPU에 복귀 -> 돌아올 주소를 알아내어 리턴

```c++
#include <iostream>
using namespace std;

int odd(int x){
    return (x%2);
}

int main () {
    int sum = 0;

    for(int i=1; i<=10000; i++) {
        if(odd(i)) sum += i // if (i%2)
 
    }
    cout << sum;
}

```

보면 단순한 `x%2`를 리턴하는 함수지만. 함수 이기 때문에  

졸라리 긴 콜스택을 돌고 돌고 돌아서 온다. i%2 밖에 기능 안하는데.

그래서 인라인 함수를 도입한다고 한다.

```c++
inline int odd(int x){
    return (x%2);
}
```

이렇게하면 odd(int x) 넣은 부분에 x%2만 들어가나봄.


```c++
#include <iostream>
using namespace std;

inline int odd(int x){
    return (x%2);
}

int main () {
    int sum = 0;

    for(int i=1; i<=10000; i++){
        if(odd(i))
        sum += i;
    }
    cout << sum;
}
```

* 이렇게 인라인 함수를 작성하면 컴파일러가 알아서

```c++
#include <iostream>
using namespace std;

inline int odd(int x){
    return (x%2);
}

int main () {
    int sum = 0;

    for(int i=1; i<=10000; i++){
        if((i%2)) // 이 부분이 바끼나봄.
        sum += i;
    }
    cout << sum;
}
```