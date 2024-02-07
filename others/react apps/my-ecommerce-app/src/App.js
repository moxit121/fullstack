import { BrowserRouter, Route, Routes } from "react-router-dom";
import Home from "./pages/Home"
import ProductDetails from "./pages/ProductDetails";
import Header from "./components/Header";
import Sidebar from "./components/Sidebar";
import Footer from "./components/Footer";
import { createContext, useEffect, useState } from "react";
import SignIn from "./components/Login";
import SignUp from "./components/Signup";
import SignOut from "./components/Logout";
import About from "./components/About";
import Service from "./components/Service";
import ScrollTop from "./components/ScrollTop";




// import '../node_modules/bootstrap/dist/css/bootstrap.css'
export const control = createContext()

export default function App() {
  const [userData, setUserData] = useState([]);
  const [userFound, setUserFound] = useState([]);
  const [signIn, setSignIn] = useState(false);
  useEffect(() => {
    fetch('http://localhost:8000/user')
      .then((res) => { return res.json() })
      .then((data) => {
        setUserData(data)
      })
  }, [])
  return (
    <div className="overflow-hidden">
      <control.Provider value={{userData, signIn, setSignIn, userFound, setUserFound}}>
      <BrowserRouter>
      <ScrollTop/>
      <Header/>
     
      <Routes>
        <Route path="/" element={<Home/>}></Route>
        <Route path="/product/:id" element={<ProductDetails/>}></Route>
        <Route path="/signin" element={<SignIn />} />
        <Route path="/signup" element={<SignUp />} />
        <Route path="/signout" element={<SignOut />} />
        <Route path="/About" element={<About />} />
        <Route path="/Service" element={<Service />} />
        
        

      </Routes>
      <Sidebar/>
      <Footer/>
      </BrowserRouter>
      </control.Provider>
    </div>
  )
}