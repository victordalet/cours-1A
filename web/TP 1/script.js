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
    scene.background = new THREE.Color(0x000000);
    mod = false;
  }
  else {
    root.style.setProperty('--colorLight', '#fff');
    root.style.setProperty('--colorDark','#000');
    root.style.setProperty('--color3','#F9F99A');
    scene.background = new THREE.Color(0xffffff);
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

/**************************************/
/***************THREE******************/
/**************************************/


let camera, scene, renderer, cube;

function init() {
  scene = new THREE.Scene();
  scene.background = new THREE.Color(0xffffff);
  camera = new THREE.PerspectiveCamera(75,window.innerWidth / window.innerHeight,0.1,1000);
  renderer = new THREE.WebGLRenderer({ antialias: true });
  renderer.setSize(window.innerWidth, window.innerHeight);
  document.body.appendChild(renderer.domElement);
  const geometry = new THREE.BoxGeometry(4,2.5,3);
  const material = new THREE.MeshBasicMaterial({ color: 0xff0000 });
  cube = new THREE.Mesh(geometry, material);
  scene.add(cube);
  cube.position.x = -13;
  camera.position.z = 5;
}

function animate() {
  requestAnimationFrame(animate);
  window.addEventListener('scroll',rotate); // wheel 
  renderer.render(scene, camera);
}

function rotate() {
  //cube.rotation.x += 0.05;
  cube.rotation.y += 0.05;
  cube.position.x += 0.15;
  console.log(cube.position.x);
  if (cube.position.x > 12){
    cube.position.x = -12;
  }
}

function onWindowResize() {
  camera.aspect = window.innerWidth / window.innerHeight;
  camera.updateProjectionMatrix();
  renderer.setSize(window.innerWidth, window.innerHeight);
}

window.addEventListener('resize', onWindowResize, false);

init();
animate();

