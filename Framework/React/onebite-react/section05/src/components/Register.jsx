import {useState} from "React";
// 간단한 회원가입 폼
// 1. 이름 2. 생년월일 3. 국적 4. 자기소개

const Register = () => {
    const [name, setName] = useState("이름"); // 초기값 설정
    const [birth, setBirth] = useState("");
    const [country, setCountry] = useState("");
    const [bio, setBio] = useState("");

    const onChangeName = (e) => {
        // console.log(e); // target > value에 입력값 저장되어 있음 (e.target.value)
        setName(e.target.value);
    }

    const onChangeBirth = (e) => {
        setBirth(e.target.value);
    }

    const onChangeCountry = (e) => {
        setCountry(e.target.value);
    }

    const onChangeBio = (e) => {
        setBio(e.target.value);
    }

    return (
        <div>
            <div>
                <input
                    value={name} // 초기값 설정
                    onChange={onChangeName}
                    placeholder={"이름"}
                />
            </div>
            <div>
                <input
                    value={birth}
                    onChange={onChangeBirth}
                    type="date"
                />
            </div>
            <div>
                <select value={country} onChange={onChangeCountry}> // 기본적으로 옵션 중 맨 위의 값을 초기값으로 사용
                    <option value=""></option>
                    <option value="kr">한국</option>
                    <option value="us">미국</option>
                    <option value="uk">영국</option>
                </select>
            </div>
            <div>
                <textarea value={bio} onChange={onChangeBio}/>
            </div>
        </div>
    );
};

export default Register;