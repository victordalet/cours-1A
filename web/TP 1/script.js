const spinContainer = document.querySelector(".spin-container");
const button = document.querySelector("nav");
const btn = document.querySelector("button");



btn.addEventListener("click", () => {
    spinContainer.classList.toggle("active");
    if (screen.width < 1000) {
        button.classList.toggle("active");
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