# 자료구조 큐
원형 큐와 선형 큐에 대해 구현한 코드입니다.

* 큐 특징 : 선입선출(FIFO : First-In First Out): 가장 먼저 들어온 데이터가 가장 먼저 나감

![image](https://github.com/morningB/algorithm/assets/114423035/fdf21dbd-2b98-476e-b4fc-89bc16367345)

* 큐 구조
  > 전단(front) : 큐에서 삭제가 일어나는 부분
  >
  > 후단(rear) : 큐에서 삽입이 일어나는 부분

![image](https://github.com/morningB/algorithm/assets/114423035/84482ad1-20a6-4182-8e00-77399b6b9354)

* 큐 연산

![image](https://github.com/morningB/algorithm/assets/114423035/8fcfda39-f295-439f-b3c6-655293f08725)
> enqueue(q, item) : 큐q에 요소item을 추가
>
> dequeue(q) : 큐q의 맨앞에 위치한 요소를 삭제 및 반환
>
> is_empty(q) : 큐q가 공백 상태인지 검사
>
> is_full(q) : 큐q가 포화 상태인지 검사
>
> create(q) : 크기n의 큐를 생성
>
> peek(q) : 큐q의 맨앞에 위치한 요소를 삭제하지 않고 값만을 반환
>
> init_queue(q) : 전단과 후단을 -1로 초기화

