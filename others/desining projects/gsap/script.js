gsap.to("#box",{
    x:200,
    duration: 3,
    delay : 2,
    backgroundColor: "blue",
    rotate:360,
    scale:-1,
    yoyo:"true",
    repeat:-1
})

gsap.from("#box",{
    x:200,
    duration: 3,
    delay : -0.50,
    backgroundColor: "blue",
    rotate:360,
    scale:-1,
})

gsap.to("h1", {
  x: 300,
  color : "blue",
  duration: 1,
  delay: 0.5,
  stagger:0.5,
  repeat:-1,
  yoyo:"true"
});
