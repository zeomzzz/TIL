import {useState, useRef} from "React";
// 간단한 회원가입 폼
// 1. 이름 2. 생년월일 3. 국적 4. 자기소개

const Register = () => {
    // const [name, setName] = useState("이름"); // 초기값 설정
    // const [birth, setBirth] = useState("");
    // const [country, setCountry] = useState("");
    // const [bio, setBio] = useState("");
    const [input, setInput] = useState ({
        name: "", 
        birth: "", 
        country: "",
        bio: ""
    })

    const countRef = useRef(0);
    const inputRef = useRef(0);

    // let count = 0;
    // console.log(refObj); // current에 저장됨
    // console.log(refObj.current);
    // console.log("Register 렌더링");

    const onChange = (e) => {
        countRef.current++;
        console.log(countRef.current);
        // count ++;
        // console.log(count); // 1로 고정 -> 리렌더링 될 때 count가 계속 0으로 리셋됨
        setInput({
            ...input,
            [e.target.name]: e.target.value
        });
    }

    const onSubmit = () => {
        if(input.name === "") {
            // 이름을 입력하는 DOM 요소에 포커스
            // console.log(inputRef.current);
            inputRef.current.focus();
        }
    }

    // const onChangeName = (e) => {
    //     // console.log(e); // target > value에 입력값 저장되어 있음 (e.target.value)
    //     // setName(e.target.value);
    //     setInput({
    //         ...input, // 스프레드 연산자 이용해서 다른 입력값은 유지
    //         name : e.target.value
    //     })
    // }

    // const onChangeBirth = (e) => {
    //     // setBirth(e.target.value);
    //     setInput({
    //         ...input,
    //         birth : e.target.value
    //     })
    // }

    // const onChangeCountry = (e) => {
    //     // setCountry(e.target.value);
    //     setInput({
    //         ...input,
    //         country : e.target.value
    //     })
    // }

    // const onChangeBio = (e) => {
    //     // setBio(e.target.value);
    //     setInput({
    //         ...input,
    //         bio : e.target.value
    //     })
    // }

    return (
        <div>
            <div>
                <input
                    ref={inputRef}
                    name="name"
                    // value={name} // 초기값 설정
                    value={input.name}
                    // onChange={onChangeName}
                    onChange={onChange}
                    placeholder={"이름"}
                />
            </div>
            <div>
                <input
                    name="birth"
                    // value={birth}
                    value={input.birth}
                    // onChange={onChangeBirth}
                    onChange={onChange}
                    type="date"
                />
            </div>
            <div>
                <select 
                    name="country"
                    // value={country}
                    value={input.country}
                    // onChange={onChangeCountry}
                    onChange={onChange}> // 기본적으로 옵션 중 맨 위의 값을 초기값으로 사용
                    <option value=""></option>
                    <option value="kr">한국</option>
                    <option value="us">미국</option>
                    <option value="uk">영국</option>
                </select>
            </div>
            <div>
                <textarea 
                    name="bio"
                    // value={bio} 
                    value={input.bio}
                    // onChange={onChangeBio}
                    onChange={onChange}/>
            </div>

            <button onClick={onSubmit}>제출</button>
        </div>
    );
};

export default Register;