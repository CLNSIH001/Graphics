#ifndef GL_WINDOW_H
#define GL_WINDOW_H

#include <GL/glew.h>

#include "geometry.h"

class OpenGLWindow
{
public:
    OpenGLWindow();

    void initGL();
    void render();
    bool handleEvent(SDL_Event e);
    void cleanup();

private:
    SDL_Window* sdlWin;
    GeometryData geometry;
    GLuint vao;
    GLuint shader;
    GLuint vertexBuffer;
    bool mainMenu = true;
    char menuOption;
    void menuUI();
};

#endif
