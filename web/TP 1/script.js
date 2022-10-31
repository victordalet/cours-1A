const spinContainer = document.querySelector(".spin-container");
const button = document.querySelector("nav");
const btn = document.querySelector("button");
const title = document.querySelector(".fixed-title");



btn.addEventListener("click", () => {
    spinContainer.classList.toggle("active");
    if (screen.width < 1000) {
        button.classList.toggle("active");
        title.classList.toggle("active");
    }
});


/***************************************/


let slidingNewsLetter = [];
const nb_slide_max = 6;

for (let nb_slide = 1 ; nb_slide < nb_slide_max+1 ; nb_slide++) {
  slidingNewsLetter.push(document.querySelector('.slide'+nb_slide.toString()));
}
console.log(slidingNewsLetter);
const multiplicator = 0.7;


window.addEventListener('scroll',()=>{
  const {scrollTop,clientHeight} = document.documentElement;
  let topElementToTopViewport = [];

  for (let nb_slide = 0 ; nb_slide < nb_slide_max ; nb_slide++) {
    topElementToTopViewport.push(slidingNewsLetter[nb_slide].getBoundingClientRect().top);
  }

  for (let nb_slide = 0 ; nb_slide < nb_slide_max ; nb_slide++) {
    if(scrollTop > (scrollTop+topElementToTopViewport[nb_slide]).toFixed()-clientHeight*multiplicator){
      slidingNewsLetter[nb_slide].classList.add('active'+(nb_slide+1).toString());
    } 
  }

})


/**************************************/

const btn_light = document.querySelector(".light-mod");
const root = document.querySelector(':root');
let mod = true;


btn_light.addEventListener("click",()=> {
  if (mod == true) {
    root.style.setProperty('--colorLight', '#000');
    root.style.setProperty('--colorDark','#fff');
    root.style.setProperty('--color3','#DE9400');
    mod = false;
  }
  else {
    root.style.setProperty('--colorLight', '#fff');
    root.style.setProperty('--colorDark','#000');
    root.style.setProperty('--color3','#F9F99A');
    mod = true;
  }
});


/**************************************/
const folow = document.querySelector(".follow-cursor");

document.onmousemove = function() {  

  let x = event.clientX * 100 / window.innerWidth + "%";
  let y = event.clientY * 100 / window.innerHeight + "%";

  folow.style.left = x;
  folow.style.top = y;
  folow.style.transform = "translate(-" + x + ",-" + y + ")";

}
