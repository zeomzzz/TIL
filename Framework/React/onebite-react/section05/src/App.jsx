import './App.css'
import Header from './components/Header.jsx';
import Main from './components/Main';
import Footer from './components/Footer';

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

function App() {
  return (
    <>
      <Header />
      <Main />
      <Footer />
    </>
  );
}

export default App;
