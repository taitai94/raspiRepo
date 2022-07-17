#include <iostream>
#include "SDL2/SDL.h"
#include "GL/glew.h"
#include "GL/glxew.h"
int main(int argc, char* argv[])
{

	//std::cout <<"hello world\n";
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_Window* m_sdlWindow = SDL_CreateWindow("name", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 400, 400, SDL_WINDOW_OPENGL);
SDL_GLContext m_glContext = SDL_GL_CreateContext(m_sdlWindow);
 GLenum error = glewInit();
        if (error != GLEW_OK) {

            printf("Could not initialize glew!");

        }
 // std::printf("***   OpenGL Version: %s   ***\n", glGetString(GL_VERSION));



        //Set the background color to blue
glewExperimental = GL_TRUE;
 glClearColor(0.0f, 0.0f, 1.0, 1.0f);



        //Set VSYNC

        SDL_GL_SetSwapInterval(1);

bool loop = true;
SDL_Event evnt;
while(loop)
{
	switch (evnt.type) 

        {

            case SDL_QUIT:
		loop = false;	    
               break;
            case SDL_MOUSEMOTION:
		std::cout << "x: "<< (float)evnt.motion.x << " -y: "<< (float)evnt.motion.y << std::endl;
		std::cout <<"hello";
		break;
	
	}
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0f, 0.65f, 0.0f, 1.0f);
	SDL_GL_SwapWindow(m_sdlWindow);
}
	return 0;
}
