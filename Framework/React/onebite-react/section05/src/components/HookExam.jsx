// import { useState } from "react";
import useInput from "./../hooks/useInput";

// 3가지 hook 관련된 팁
// 1. 함수 컴포넌트, 커스텀 훅 내부에서만 호출 가능
// 2. 조건부로 호출될 수는 없음 ex. 조건문, 반복문
// 3. custom hook을 직접 만들 수 있음

// const state = useState(); // 함수 컴포넌트 내부에서 사용하라는 오류 발생

// 보통 hooks 디렉토리에서 관리
// function useInput() { // use 접두사를 쓰면 리액트 내부에서 custom hook으로 판단
//     const [input, setInput] = useState("");

//     const onChange = (e) => {
//         setInput(e.target.value);
//     }

//     return [input, onChange];
// }

const HookExam = () => {
    // const state = useState();

    const [input, onChange] = useInput();
    const [input2, onChange2] = useInput();

    return (
        <div>
            <input value={input} onCahnge={onChange} />
            <input value={input2} onCahnge={onChange2} />
        </div>
    );
};

export default HookExam;