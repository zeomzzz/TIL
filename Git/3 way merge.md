# **3 way merge**

<br>

-   Git에서 사용하는 merging 기법

<br>

ex. 

| Base | Me | Other | 3 way merge <br> : Base, Me, Other를 비교 | 2 way merge <br> : Me, Other를 비교 |
| --- | --- | --- | --- | --- |
| A | A | <br> (A 삭제) | <br>   (Other에서 기존 코드를 수정한 것 반영) | ? (Conflict) |
| B | B | B | B | B |
| C | 1 (1로 수정) | 2 (2로 수정) | ? (Conflict) | ? (Conflict) |
| D | <br> (D 삭제) | D | <br> (Me에서 기존 코드를 수정한 것 반영) | ? (Conflict) |

<br>

---

<br>

**참고 자료**

<br>

-   [지옥에서 온 Git - 원리 : 3 way merge](https://youtu.be/J0W-WA0aYJI)