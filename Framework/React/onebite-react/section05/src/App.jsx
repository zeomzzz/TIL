import './App.css'
// import Header from './components/Header.jsx';
// import Main from './components/Main';
// import Footer from './components/Footer';
// import Button from './components/Button';
// import {useState} from "react";
// import Bulb from './components/Bulb';
// import Counter from './components/Counter';
import Register from './components/Register';
import HookExam from './components/HookExam';

// const Bulb = () => {
//   const [light, setLight] = useState("OFF");

//   return (
//     <div>
//       {light === "ON" ? (
//           <h1 style={{ backgroundColor: "orange"}}>ON</h1>
//         ) : (
//           <h1 style={{ backgroundColor: "gray"}}>OFF</h1>
//       )}
//       <button onClick={()=> {
//         setLight(light === "ON" ? "OFF" : "ON");
//         }}
//       >
//       {light === "ON" ? "끄기" : "켜기"}</button>
//     </div>
//   );
// }

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
// count 값이 바뀌면 Bulb 컴포넌트도 리렌더링 됨
// 왜냐하면 부모컴포넌트인 App 컴포넌트가 리렌더링 되어서
// 따라서 컴포넌트를 분리
// const Counter = () => {
//   const [count, setCount] = useState(0); // 보통 구조분해 할당해서 받음

//   return (
//     <div>
//       <h1>{count}</h1>
//       <button
//         onClick={() => {
//           setCount(count + 1); // 클릭할 때마다 state 값이 1 씩 증가 -> 이것이 화면에 반영됨(리렌더링)
//         }}
//       >
//         +
//       </button>
//     </div>
//   )
// }

function App() {

  return (
    <>
      <HookExam />
    </>
  );

  // return (
  //   <>
  //     <Register />
  //   </>
  // );
}

// function App() {
//   // const state = useState(0); // 인수로 state의 초기값을 받음

//   return (
//     <>
//       <Bulb />
//       <Counter />
//     </>
//   );
// }

export default App;
