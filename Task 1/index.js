// toggle button event listener add to display menu when responsiveness

const button = document.querySelector(".togglebutton");
button.addEventListener("click", showMenu);
function showMenu() {

    const mainContainer=document.getElementById("mainCotainer");
    const toggleSection=document.getElementById("toggleSectionId");

    if (mainContainer.style.height==="80px") {
        
        toggleSection.classList.replace("toggleSection","newtoggleSection");
        mainContainer.style.height="auto";
    }
    else{
        toggleSection.classList.replace("newtoggleSection","toggleSection");
        mainContainer.style.height="80px";
    }
}

