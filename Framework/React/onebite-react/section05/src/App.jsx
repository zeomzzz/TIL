import './App.css'
import Header from './components/Header.jsx';
import Main from './components/Main';
import Footer from './components/Footer';
import Button from './components/Button';

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

function App() {
  return (
    <>
      {/* <Button text={"메일"} color={"red"}/> */}
      <Button {...buttonProps} /> {/* 스프레드 연산자 이용 */}
      <Button text={"카페"}/>
      <Button text={"블로그"}>
        {/* <div>자식요소</div> */}
        <Header />
      </Button>
    </>
  );
}

export default App;
