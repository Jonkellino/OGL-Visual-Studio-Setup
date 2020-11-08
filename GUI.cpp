#include "GUI.h"
#include <math.h> 
#include "imgui/imgui.h"
#include <stdio.h>

void App::OnGui()
{
    if (!ImGui::Begin("Hi friend :)"))
    {
        ImGui::End();
        return;
    }
    ImGui::End();
}