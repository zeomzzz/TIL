# **array.splice()**

<br>

> array.splice(start, deleteCount, \[item\])

<br>

| 연산 | 코드 | 설명 |
| --- | --- | --- |
| 추가 | `array.splice(start, 0, item)` | start 위치에 (0개를 제거하고) item을 추가 |
| 삭제 | `array.splice(start, deleteCount)` | start 위치로부터 deleteCount 개수만큼 삭제 |
| 수정 | `array.splice(start, 1, item)` | start 위치의 1개 삭제하고 (start 위치에) item을 추가 |