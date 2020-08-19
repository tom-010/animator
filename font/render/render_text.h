#ifndef LIB_RENDER_TEXT_H_
#define LIB_RENDER_TEXT_H_

#include <string>
#include <iostream>
#include <freetype2/ft2build.h>
#include FT_FREETYPE_H

void render_text(std::string text) {

    FT_Library ft; 
    if (FT_Init_FreeType(&ft))
    {
        std::cout << "ERROR::FREETYPE: Could not init Freetype Library" << std::endl;
        // TODO: error handling
        return;      
    }

    FT_Face face;
    std::string font = "font/fonts/RobotoTTF/Roboto-Medium.ttf";
    if (FT_New_Face(ft, font.c_str(), 0, &face))
    {
        system("pwd"); // /home/sky/.cache/bazel/_bazel_sky/678246a894fb1bb538db37444cf9b9d5/sandbox/linux-sandbox/392/execroot/__main__/bazel-out/k8-fastbuild/bin/font/render/render_text_test.runfiles/__main__
        // https://learnopengl.com/In-Practice/Text-Rendering
        std::cout << "ERROR::FREETYPE: Failed to load font: " << font << std::endl;  
        return;
    }


    std::cout << text << std::endl;
}


#endif