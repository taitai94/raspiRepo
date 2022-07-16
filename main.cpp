#include <iostream>
#include "SDL2/SDL.h"
#include "GL/glew.h"
int main(int argc, char* argv[])
{

	//std::cout <<"hello world\n";
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_Window* m_sdlWindow = SDL_CreateWindow("name", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 400, 400, SDL_WINDOW_OPENGL);
SDL_GLContext m_glContext = SDL_GL_CreateContext(m_sdlWindow);
 GLenum error = glewInit();
 // std::printf("***   OpenGL Version: %s   ***\n", glGetString(GL_VERSION));



        //Set the background color to blue

 //       glClearColor(0.0f, 0.0f, 1.0f, 1.0f);



        //Set VSYNC

        SDL_GL_SetSwapInterval(1);



        // Enable alpha blend

        //glEnable(GL_BLEND);

        //glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
      
	    return 0;
}
