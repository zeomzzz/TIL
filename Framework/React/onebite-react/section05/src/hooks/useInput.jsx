import { useState } from "react";

function useInput() { // use 접두사를 쓰면 리액트 내부에서 custom hook으로 판단
    const [input, setInput] = useState("");

    const onChange = (e) => {
        setInput(e.target.value);
    }

    return [input, onChange];
}

export default useInput;