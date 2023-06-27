# 자료구조 스택

 스택을 c언어로 구현한 코드입니다.

> 스택(stack) : 쌓아놓은 더미

* 특징 : 후입 선출
  -> 가장 최근에 들어온 데이터가 가장 먼저 나감

![image](https://github.com/morningB/algorithm/assets/114423035/2821b7c9-f20e-49a7-a677-8d0c3a391ec2)

* 구조

* ![image](https://github.com/morningB/algorithm/assets/114423035/fd461a7b-0c05-42b5-bf6c-3965255e5f3a)

> 연산
>
> push(s, item) : 스택s의 맨위에 요소 item을 추가
> 
> pop(s) : 스택s의 맨위에 위치한 요소를 반환
>
> is_empty(s) : 스택s가 공백 상태인지 검사
>
> is_full(s) : 스택s가 포화 상태인지 검사
>
> create(n) : 크기n의 스택을 생성
>
> peek(s) : 스택s의맨위에위치한요소를삭제하지않고값만을반환
