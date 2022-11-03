const spinContainer = document.querySelector(".spin-container");
const button = document.querySelector("nav");
const btn = document.querySelector("button");
const title = document.querySelector(".fixed-title");



btn.addEventListener("click", () => {
    spinContainer.classList.toggle("active");
    if (screen.width < 1000) {
        console.log(2);
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


window.addEventListener('wheel',()=>{
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
    for (let i = 0 ; i < max_cube ; i++){
      liste[i].material.color.setHex( 0xDE9400 );
    }
    mod = false;
  }
  else {
    root.style.setProperty('--colorLight', '#fff');
    root.style.setProperty('--colorDark','#000');
    root.style.setProperty('--color3','#F9F99A');
    scene.background = new THREE.Color(0xffffff);
    for (let i = 0 ; i < max_cube ; i++){
      liste[i].material.color.setHex( 0xF9F99A );
    }
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
let liste = [];
const max_cube = 30;
let type1_scroll = 1;
const speed_deplacement = 0.02;

function init() {
  scene = new THREE.Scene();
  scene.background = new THREE.Color(0xffffff);
  camera = new THREE.PerspectiveCamera(75,window.innerWidth / window.innerHeight,0.1,1000);
  renderer = new THREE.WebGLRenderer({ antialias: true });
  renderer.setSize(window.innerWidth, window.innerHeight);
  document.body.appendChild(renderer.domElement);
  for (let i = 0 ; i<max_cube ; i++){
    const geometry = new THREE.SphereGeometry(0.4);
    const material = new THREE.MeshBasicMaterial({ color: 0xF9F99A });
    cube = new THREE.Mesh(geometry, material);
    cube.position.x = i-8;
    if (i%2) {
      cube.position.y = 1;
    }
    else{
      cube.position.y = -2;
    }
    liste.push(cube);
  }
  for (let i = 0; i < max_cube ; i++){
    scene.add(liste[i]);
  }
  camera.position.z = 5;
}

function animate() {
  requestAnimationFrame(animate);
  window.addEventListener('scroll',rotate);
  window.addEventListener('wheel',rotate); 
  renderer.render(scene, camera);
}

function rotate() {
  for (let i = 0 ; i<max_cube ; i++){
    liste[i].rotation.y += 0.002;
    liste[i].rotation.z += 0.05;
    liste[i].rotation.x += 0.1;
    if (i%2){
      if (type1_scroll == 1){
        liste[i].position.y -= speed_deplacement;
      }
      else {
        liste[i].position.y += speed_deplacement;
      }
      if (liste[i].position.y <= -2){
        type1_scroll = 0;
      } 
      if (liste[i].position.y >= 1 ){
        type1_scroll = 1;
      }
    }
    else {
      if (type1_scroll == 1){
        liste[i].position.y += speed_deplacement;
      }
      else {
        liste[i].position.y -= speed_deplacement;
      }
    }
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

