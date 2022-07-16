#include <iostream>
#include "SDL.h"
//#include "GL/glew.h"
int main(int argc, char* argv[])
{

	//std::cout <<"hello world\n";
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_Window* m_sdlWindow = SDL_CreateWindow("name", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 400, 400, SDL_WINDOW_OPENGL);
	    while(true);
	    return 0;
}
