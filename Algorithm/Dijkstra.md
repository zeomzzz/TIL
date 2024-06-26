# **Dijkstra**

<br>
<br>

## **MST vs Dijkstra 차이**

<br>

-   MST : 모든 점을 이을 때의 최소 비용
-   Dijkstra : 임의의 두 점을 이을 때의 최소 비용 (모든 점이 연결되지 않아도 괜찮음). 출발점이 정해져 있음

<br>

> **BFS, DFS vs. Dijkstra**  
>   
> \- BFS, DFS : 노드 간의 가중치가 동일 → 거친 최소의 노드 수 <br>
> \- Dijkstra : 노드 간의 가중치가 상이 → 얼마나 적은 가중치로 도착하는가

<br>
<br>

## **작동 방법**

<br>

-   원리 : 힙에서 현재 노드를 빼면서, 간선을 통할 때 더 거리가 짧아진다면 거리를 갱신하고 힙에 추가
-   거리 배열을 INF로 초기화
-   시간복잡도 : E log V
-   주의 사항 : 음의 가중치 있는 경우 사용 불가!!

<br>
<br>

## **코드 구조**

<br>

```
dist[K] = 0 # 거리배열 dist. 시작점 K 까리 거리 0으로 초기화
heapq.heappush(heap, (0, K)) # heap에 시작점 넣어주기

while heap :
	w, v = heapq.heappop(heap)
    
    if w != dist[v] : continue
    for nw, nv in edge[v] : # 현재 노드와 연결된 노드 중
    	if dist[nv] > dist[v] + nw : # 갱신해서 더 짧아지면
        	dist[nv] = dist[v] + nw # 갱신하고
            heapq.heappush(heap, (dist[nv), nv)) # 다시 heap에 넣기
```

<br>
<br>

---

<br>

**참고 자료**

<br>

-   [코딩테스트 알고리즘 - 10. 다익스트라](https://youtu.be/izYANwrHwvQ)