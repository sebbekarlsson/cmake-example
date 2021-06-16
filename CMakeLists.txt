# If you're running windows, use this command:
# cmake . -G "Unix Makefiles"


cmake_minimum_required(VERSION 3.15.2)


project(PersonApp)



include_directories(include)      # alternative: add_compile_options(-I./include)

file(GLOB sourceFiles src/*.cpp)  # fetching all *.cpp files in src

add_executable(PersonApp)         #  I want to produce an executable


target_sources(                   # which sources to include
  PersonApp PRIVATE
  ${sourceFiles}
)
