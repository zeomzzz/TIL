import {useState} from "react";

const Counter = () => {
    const [count, setCount] = useState(0); // 보통 구조분해 할당해서 받음
  
    return (
      <div>
        <h1>{count}</h1>
        <button
          onClick={() => {
            setCount(count + 1); // 클릭할 때마다 state 값이 1 씩 증가 -> 이것이 화면에 반영됨(리렌더링)
          }}
        >
          +
        </button>
      </div>
    );
};

export default Counter;