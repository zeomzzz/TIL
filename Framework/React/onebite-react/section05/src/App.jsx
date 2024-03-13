import './App.css'
// import Header from './components/Header.jsx';
// import Main from './components/Main';
// import Footer from './components/Footer';
// import Button from './components/Button';
import {useState} from "react";

// 화살표 함수로 만들기
// const Header = () => {
//   return (
//     <header>
//       <h1>header</h1>
//     </header>
//   )
// }

// 함수 선언식으로 만들기
// function Header() {
//   return (
//     <header>
//       <h1>header</h1>
//     </header>
//   )
// }

const buttonProps = {
  text : "메일",
  color : "red",
  a : 1,
  b : 2,
  c : 3
}

// function App() {
//   return (
//     <>
//       {/* <Button text={"메일"} color={"red"}/> */}
//       <Button {...buttonProps} /> {/* 스프레드 연산자 이용 */}
//       <Button text={"카페"}/>
//       <Button text={"블로그"}>
//         {/* <div>자식요소</div> */}
//         <Header />
//       </Button>
//     </>
//   );
// }

// State
function App() {
  // const state = useState(0); // 인수로 state의 초기값을 받음
  const [count, setCount] = useState(0); // 보통 구조분해 할당해서 받음
  const [light, setLight] = useState("OFF");
  console.log(count);

  return (
    <>
      <div>
        <h1>{light}</h1>
        <button onClick={()=> {
          setLight(light === "ON" ? "OFF" : "ON");
        }}
        >
          {light === "ON" ? "끄기" : "켜기"}</button>
      </div>
      <h1>{count}</h1>
      <button onClick={() => {
        setCount(count + 1); // 클릭할 때마다 state 값이 1 씩 증가 -> 이것이 화면에 반영됨(리렌더링)
      }}>
        +
      </button>
    </>
  );
}

export default App;
