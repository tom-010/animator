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


    std::cout << text << std::endl;
}


#endif