cmake_minimum_required(VERSION 2.6)

#Configuration du projet
project(myPCA)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BUILD_TYPE})

#Inclusion de Boost
include_directories(. /usr/include)
link_directories(. /usr/lib)

#Configuration de l'exécutable
file(
	GLOB
	source_files
	*.cpp *.h
)
add_executable(
        myPCA
	${source_files}
)

#Configuration de l'édition de liens
target_link_libraries(
        myPCA
        gif # for gif images
        tiff #for tiff images
        png #read png images
        X11 #needed by png (different on windows)
        pthread #needed by png (different on windows)
)





