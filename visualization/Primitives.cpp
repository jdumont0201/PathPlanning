//
// Created by jbmdu on 11/04/2018.
//

#include "Primitives.h"
#include "../include/freetype/include/ft2build.h"
#include FT_FREETYPE_H

void Primitives::circle(float x, float y, float r, int segments) {
    int i;
    GLfloat twicePi = 2.0f * M_PI;
    glBegin(GL_LINE_LOOP);
    for (i = 0; i <= segments; i++) {
        glVertex2f(
                x + (r * cos(i * twicePi / segments)),
                y + (r * sin(i * twicePi / segments))
        );
    }
    glEnd();
}

void Primitives::line(float x1, float y1, float x2, float y2) {
    glBegin(GL_LINES);
    glVertex3f(x1, y1, 0.0);
    glVertex3f(x2, y2, 0);
    glEnd();

}

void Primitives::disc(float x, float y, float r, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int n = 0; n <= segments; ++n) {
        float const t = 2 * M_PI * (float) n / (float) segments;
        glVertex2f(x + sin(t) * r, y + cos(t) * r);
    }
    glEnd();
}

void Primitives::text(float x, float y, std::string text) {
    /*FTFace face;
    if( ! face.open("arial.ttf") )
        fatal("unable to open ttf file");
    GLTTBitmapFont font(&amp;face);
    int point_size= 20;
    if( ! font.create(point_size) )
        fatal("unable to create bitmapped font");
    // ... OpenGL initialization commands...
    glColor3f(1,1,1);
    font.print( x, y, "hello bitmapped world" );

*/
    /*FT_Library library;
    FT_Face     face;
    if(FT_Init_FreeType(&face)) {
        fprintf(stderr, "Could not init freetype library\n");
        return 1;
    }

    int error = FT_Init_FreeType(&library);
    if (error) {         }
    error = FT_New_Face(library,    "../assets/fonts/arial.ttf",    0,   &face);
    FT_Set_Pixel_Sizes(face, 0, 48);
    render_text("The Solid Black Fox Jumps Over The Lazy Dog", 10,10,300,300);

    if (error == FT_Err_Unknown_File_Format) {

    } else if (error) {

    }*/
}

void Primitives::cube(float x1, float y1, float z1, float x2, float y2, float z2) {
    glBegin(GL_POLYGON);
    glVertex3f(x1, y1, z1);
    glVertex3f(x2, y1, z1);
    glVertex3f(x2, y2, z1);
    glVertex3f(x1, y2, z1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(x1, y1, z1);
    glVertex3f(x2, y1, z1);
    glVertex3f(x2, y2, z1);
    glVertex3f(x1, y2, z1);
    glEnd();
}