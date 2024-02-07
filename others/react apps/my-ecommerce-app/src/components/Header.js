import React, { useContext, useEffect, useState } from 'react';
import { SidebarContext } from '../contexts/SidebarContext';
import { CartContext } from '../contexts/CartContext';
import { Link } from 'react-router-dom';
import logo from "../img/logo.svg"
import { control } from '../App';




const Header = () => {
  const[isActive,setIsActive]=useState(false)
  const {isOpen,setIsOpen}=useContext(SidebarContext)
  const{itemAmount}=useContext(CartContext)
  const { signIn,userFound } = useContext(control)

  useEffect(()=>{
    window.addEventListener('scroll',()=>{
      window.scrollY>60?setIsActive(true):setIsActive(false)
    })
  })

  return <header className={`${isActive?"bg-gray-400":" bg-gray-300"} fixed w-full z-10 transition-all p-5 flex justify-center `}>
    <div className=' container mx-auto flex items-center justify-between h-full mb  flex-1'>
   <Link to={"/"}>
     <div>
      <img className='w-[40px]' src={logo} alt="" />
     </div>
   </Link>
   
 
   
   <ul className="flex flex-wrap flex-row p-4 md:p-0 mt-4 font-medium border border-gray-100 rounded-lg  md:space-x-8 rtl:space-x-reverse md:flex-row md:mt-0 md:border-0 dark:bg-gray-800 md:dark:bg-gray-900 dark:border-gray-700 mb-4">
        <li>
          <Link to="/" className="block py-2 px-3 text-gray-900 rounded md:bg-transparent md:text-blue-700 md:p-0 md:dark:text-blue-500" aria-current="page">Home</Link>
        </li>
        <li>
          <Link to="/About" className="block py-2 px-3 text-gray-900 rounded hover:bg-gray-100 md:hover:bg-transparent md:hover:text-blue-700 md:p-0 md:dark:hover:text-blue-500 dark:text-white dark:hover:bg-gray-700 dark:hover:text-white md:dark:hover:bg-transparent dark:border-gray-700">About</Link>
        </li>
        <li>
    
          <Link to="/Service" className="block py-2 px-3 text-gray-900 rounded hover:bg-gray-100 md:hover:bg-transparent md:hover:text-blue-700 md:p-0 dark:text-white md:dark:hover:text-blue-500 dark:hover:bg-gray-700 dark:hover:text-white md:dark:hover:bg-transparent dark:border-gray-700">Services</Link>
        </li>
      </ul>

     
    <div  className='w-[100px] cursor-pointer flex relative justify-around me-3'>
    <div>
    {signIn ? <Link to='/signout'>LogOut <div className=' font-semibold'><h1>welcome {userFound[0].name}</h1></div></Link> : <Link to='/signin'>LogIn</Link>}
    </div>
    
    <div onClick={()=>{setIsOpen(!isOpen)}}>
    <i className="fa-solid fa-bag-shopping ms-5"></i>
    <div className='bg-red-500 absolute -right-[0.50rem] -top-[0.25rem] text-[12px] w-[18px] h-[18px]  text-white rounded-full flex justify-center items-center'>{itemAmount}</div>
    </div>
    </div>

   
    </div>
  </header>;
};

export default Header;
