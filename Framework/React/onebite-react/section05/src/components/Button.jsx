// const Button = (props) => {
//     return <button style={{ color: props.color }}>{props.text} - {props.color}</button>;
// }

const Button = ({ text, color, children }) => { // 구조분해 할당
    const onClickButton = (e) => { // 함수로 전달하기
        console.log(e);
        console.log(text);
    }

    return (
        <button
            onClick={onClickButton} //함수의 이름만 전달해야 함
            // onMouseEnter={onClickButton} // 마우스를 올렸을 때
            // onClick={() => {
            //     console.log({text});
            // }}
            style={{ color: color }}
        >
                {text} - {color}
                {children} {/* 자식요소로 넣은 태그가 자동으로 children이라는 props로 전달됨 */}
        </button>
    );
}

Button.defaultProps = {
    color:"black"
}

export default Button;