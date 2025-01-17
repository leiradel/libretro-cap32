/****************************************************************************
 *  Caprice32 libretro port
 *
 *  Copyright David Colmenero - D_Skywalk (2019-2021)
 *  Copyright Daniel De Matteis (2012-2021)
 *
 *  Redistribution and use of this code or any derivative works are permitted
 *  provided that the following conditions are met:
 *
 *   - Redistributions may not be sold, nor may they be used in a commercial
 *     product or activity.
 *
 *   - Redistributions that are modified from the original source must include the
 *     complete source code, including the source code for all components used by a
 *     binary built from the modified sources. However, as a special exception, the
 *     source code distributed need not include anything that is normally distributed
 *     (in either source or binary form) with the major components (compiler, kernel,
 *     and so on) of the operating system on which the executable runs, unless that
 *     component itself accompanies the executable.
 *
 *   - Redistributions must reproduce the above copyright notice, this list of
 *     conditions and the following disclaimer in the documentation and/or other
 *     materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************************/

#ifndef GFX_SOFTWARE_H__
#define GFX_SOFTWARE_H__

#include <stdint.h>
#include <stdbool.h>

//*****************************************************************************
// Graph helpers functions

void draw_line(PIXEL_TYPE * buffer, int x, int y, int width, PIXEL_TYPE color);
void draw_rect(PIXEL_TYPE * buffer, int x, int y, int width, int height, PIXEL_TYPE color);
void draw_text(PIXEL_TYPE * buffer, int x, int y, const char * text, PIXEL_TYPE color);
void draw_char(PIXEL_TYPE * buffer, int x, int y, char chr_idx, PIXEL_TYPE color);
void draw_image(PIXEL_TYPE * buffer, PIXEL_TYPE * img, int x, int y, int width, int height);
void draw_image_linear(PIXEL_TYPE * buffer, PIXEL_TYPE * img, int x, int y, unsigned int size);
void draw_image_transparent(PIXEL_TYPE * buffer, PIXEL_TYPE * img, int x, int y, unsigned int size);
void convert_image(PIXEL_TYPE * buffer, const unsigned int * img, unsigned int size);
PIXEL_TYPE convert_color (unsigned int color);
#endif
