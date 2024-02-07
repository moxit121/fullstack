var tl = gsap.timeline();
gsap.to("#yellow1", {
  zIndex: 999,
  top: "-100%",
  delay: 0,
  duration: 0.7,
  ease: "expo.out",
});
tl.from(
  "#yellow2",
  {
    top: "100%",
    delay: 1,
    duration: 0.7,
    ease: "expo.out",
  },
  "anim"
);
tl.from(
  "#loader  h1",
  {
    delay: 1,
    // duration: 0.2,
    color: "white",
  },
  "anim"
);
tl.to("#loader", {
  opacity: 0,
});
