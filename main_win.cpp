#include "App.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_glfw.h"
#include <stdio.h>
#include "GLFW/glfw3.h"


#include "windows.h"


int CALLBACK WinMain(
    HINSTANCE   hInstance,
    HINSTANCE   hPrevInstance,
    LPSTR       lpCmdLine,
    int         nCmdShow
)
{
    App::Setup();
}
