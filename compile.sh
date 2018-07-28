clear

clear

clear

g++ main.cpp inc/common.h inc/sfml.h inc/object/object.h inc/object/characterObject.h inc/object/collideObject.h inc/interact/movementInteract.h inc/interact/collideObjectInteract.h inc/interact/classObjectInteract.h src/sfml.cpp src/object/object.cpp src/object/characterObject.cpp src/object/collideObject.cpp src/interact/movementInteract.cpp src/interact/collideObjectInteract.cpp src/interact/classObjectInteract.cpp -o obj/run -lsfml-graphics -lsfml-window -lsfml-system

cd obj

./run

cd ..
