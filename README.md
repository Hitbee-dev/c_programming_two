# C프로그래밍II 수업
- [수업자료 ckim -*Notion*](https://charm-aluminum-6c2.notion.site/C-2-2b62c8d09ffc4522800e7f551e7d99f8)
- [수업자료 kskim -*Notion*](https://juniper-clef-fd2.notion.site/C-II-586ce7f8ff0440cd8d49df9580dbe4b8)

## 2022-09-14
### 극장 예약 시스템
``` c
좌석을 예약하시겠습니까?(y 또는 n) y
------------------------------------
  1  2  3  4  5  6  7  8  9  10
------------------------------------
  0  0  0  0  0  0  0  0  0  0
몇번째 좌석을 예약하시겠습니까? 1
예약되었습니다.
좌석을 예약하시겠습니까?(y 또는 n) y
------------------------------------
  1  2  3  4  5  6  7  8  9  10
------------------------------------
  1  0  0  0  0  0  0  0  0  0
------------------------------------
몇번째 좌석을 예약하시겠습니까? 1
이미 예약된 자리입니다.
좌석을 예약하시겠습니까?(y 또는 n)
```

## 2022-09-21
### 순차 탐색 실습
```c
탐색할 값을 입력하시오: 8
탐색 성공! 인덱스= 7 
탐색 종료
```  
  
### 이진 탐색 실습
```c
탐색할 값을 입력하시오: 18
[0, 15]
[0, 6]
[4, 6]
[4, 4]
탐색 성공! 인덱스= 4 
탐색 종료
```

## 2022-09-28
### 포인터 실습
```c
포인터를 선언할 때 주의점
- 초기화를 해주거나, NULL 포인터를 선언한다.
```

## 2022-10-05
### 포인터 실습2

``` c
&a[0] = 6422284
a[0] = 10      
&a[1] = 6422288
a[1] = 20      
&a[2] = 6422292
a[2] = 30      
a = 6422284  
```

``` c
a = 6422284    
a + 1 = 6422288
*a = 10        
*(a + 1) = 20  
```

## 2022-11-02
### Struct & Pointer & Array

``` c
학번을 입력하시오: 20224161
이름을 입력하시오: kimchan
학점을 입력하시오: 4.3

학번을 입력하시오: 20224162
이름을 입력하시오: kimkyeongsu
학점을 입력하시오: 4.4

학번을 입력하시오: 20150584
이름을 입력하시오: kimmyeongchan
학점을 입력하시오: 1.94
학번: 20224161, 이름: kimchan, 점수: 4.30  
학번: 20224162, 이름: kimkyeongsu, 점수: 4.40
학번: 20150584, 이름: kimmyeongchan, 점수: 1.94
```

``` c
학번: 20224161 이름: kimchan 학점: 4.300000
학번: 20224161 이름: kimchan 학점: 4.300000
학번: 20224161 이름: kimchan 학점: 4.300000
```
