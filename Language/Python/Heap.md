# **Heap**

<br>

-   heapq를 이용 : `import heapq`
-   list를 heap으로 : `heapq.heapify(list)`
-   push x : `heapq.heappush(heap, x)`
    -   list를 heapify 하지 않고 heap에 넣어도 heap으로 사용
-   pop : `heapq.heappop(heap)`

<br>

> cf) 최대 heap 을 사용하려는 경우, push 할 때 \*(-1) 해서 push