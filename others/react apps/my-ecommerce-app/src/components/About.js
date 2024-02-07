import React, { useRef, useEffect } from "react";
import img from "../img/woman_hero.png";
import { Link } from "react-router-dom";
import LocomotiveScroll from 'locomotive-scroll';

function About() {
  const containerRef = useRef(null);

  useEffect(() => {
    const locomotiveScroll = new LocomotiveScroll({
      el: containerRef.current,
      smooth: true,
      // You can add more options based on your requirements
    });

    // Don't forget to update the scroll on component unmount
    return () => {
      locomotiveScroll.destroy();
    };
  }, []);

  return (
    <div className=" mt-10 p-68 border border-t-3">
      <section
        className="flex items-center bg-stone-100 xl:h-screen font-poppins dark:bg-gray-800"
        ref={containerRef}
      >
        <div className="justify-center flex-1 max-w-6xl py-4 mx-auto lg:py-6 md:px-6">
          <div className="flex flex-wrap p-5 mt-5">
            <div className="w-full px-4 mb-10 lg:w-1/2 lg:mb-0">
              <div className="relative lg:max-w-md">
                <img
                  className="h-[400px] w-[250px]"
                  src={img}
                  alt="aboutimage"
                  data-scroll
                  data-scroll-speed="0.3"
                  data-scroll-direction = "horizontal"
                />
                <div className="absolute bottom-0 right-0 z-10 p-8 bg-white border-4 border-blue-500 rounded shadow dark:border-blue-400 lg:-mb-8 lg:-mr-11 sm:p-8 dark:text-gray-300 dark:bg-gray-800 ">
                  <p className="text-lg font-semibold md:w-72">
                    {/* Content */}
                    Successfully Providing business solutions from 25 years
                  </p>
                </div>
              </div>
            </div>
            <div className="w-full px-6 mb-10 lg:w-1/2 lg:mb-0 ">
              <div className="pl-4 mb-6 border-l-4 border-blue-500 ">
                <span className="text-sm text-gray-600 uppercase dark:text-gray-400">
                  Who we are?
                </span>
                <h1 className="mt-2 text-3xl font-black text-gray-700 md:text-5xl dark:text-gray-300">
                  About Us
                </h1>
              </div>
              <p className="mb-6 text-base leading-7 text-gray-500 dark:text-gray-400">
                {/* Content */}
                Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do
                eiusmod tempor incididunt ut Lorem ipsum dolor sit amet,
                consectetur adipiscing elit, sed do eiusmod tempor incididunt ut
                labore et dolore magna aliqua. Ut enim ad minim veniam Lorem
                ipsum dolor sit amet. labore et dolore magna aliqua. Ut enim ad
                minim veniam Lorem ipsum dolor sit amet. amet. labore et dolore
                magna aliqua. Ut enim ad minim veniam Lorem ipsum dolor sit
                amet. Lorem ipsum dolor sit amet, consectetur adipiscing elit,
                sed do Lorem ipsum dolor sit amet.
              </p>
              <Link
                to="/"
                className="px-4 py-2 text-gray-100 bg-blue-500 rounded dark:bg-blue-400 dark:hover:bg-blue-500 hover:bg-blue-600"
              >
                Learn more
              </Link>
            </div>
          </div>
        </div>
      </section>
    </div>
  );
}

export default About;
