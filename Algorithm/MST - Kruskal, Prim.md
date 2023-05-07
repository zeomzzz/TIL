# **MST (Minimum Spanning Tree)**

<br>

## **MST**

<br>

-   Spanning Tree : 모든 노드가 연결된 트리
-   MST : 각 간선에 가중치가 있다고 할 때, 최소의 비용으로 모든 노드가 연결된 트리
-   알고리즘 : Kruskal or Prim

<br>
<br>

## **Kruskal**

<br>

-   전체 간선 중 가장 가중치가 작은 것부터 연결
-   Union-Find 이용

<br>
<br>

## **Prim**

<br>

-   현재 노드에 연결된 간선 중 가장 가중치가 작은 것을 추가
-   heap 이용 (최소 heap) : 노드에 연결된 간선 중 가중치가 최소인 간선이 가장 위로 올라옴
-   시간 복잡도 : `O(E log E)`
-   코드

```
# 1. 간선을 인접 리스트에 넣기
# edge = [[현재 idx 노드의 w, 연결된 node] ...]

# 2. 힙에 시작점 넣기
heap = [[0, 1]] # [가중치, 노드 번호]를 heap에 넣어줌

# 힙이 빌 때까지 반복
while heap :
	w, cur = heap pop # 남은 간선 중 가장 가중치가 적은 간선을 꺼냄
    
    if not visited[cur] : # 아직 방문 안한 노드면
    	visited[cur] = True # 방문 처리하고
        result += w # 간선 선택
        
        for next in edge[cur] : # 현재 노드랑 연결 된 노드 중
        	if not visited[next] : # 아직 방문 안했으면
            	heap push(heap, next) # heap push
```

<br>

---

<br>

**참고 자료**

<br>

-   [코딩테스트 알고리즘 - 9. MST](https://youtu.be/nZ4RTuoHS_Y)