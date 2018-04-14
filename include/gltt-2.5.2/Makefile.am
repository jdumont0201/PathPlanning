
lib_LTLIBRARIES = libgltt.la

libgltt_la_SOURCES = \
	FTBitmapFont.C \
	FTEngine.C \
	FTFace.C \
	FTFont.C \
	FTGlyph.C \
	FTGlyphBitmap.C \
	FTGlyphPixmap.C \
	FTGlyphVectorizer.C \
	FTInstance.C \
	FTPixmapFont.C \
	GLTTBitmapFont.C \
	GLTTFont.C \
	GLTTGlyphTriangulator.C \
	GLTTOutlineFont.C \
	GLTTPixmapFont.C \
	GLTTGlyphPolygonizer.C \
	GLTTGlyphPolygonizerHandler.C

glttincludedir=$(includedir)/$(PACKAGE)
glttinclude_HEADERS = \
	FTBitmapFont.h \
	FTEngine.h \
	FTFace.h \
	FTFont.h \
	FTGlyph.h \
	FTGlyphBitmap.h \
	FTGlyphPixmap.h \
	FTGlyphVectorizer.h \
	FTInstance.h \
	FTPixmapFont.h \
	GLTTboolean.h \
	GLTTminmax.h \
	GLTTBitmapFont.h \
	GLTTFont.h \
	GLTTGlyphTriangulator.h \
	GLTTOutlineFont.h \
	GLTTPixmapFont.h \
	GLTTGlyphPolygonizer.h \
	GLTTGlyphPolygonizerHandler.h

INCLUDES += \
	-I$(top_srcdir) -I$(top_srcdir)/src \
	$(TTF_INCLUDES)

LDFLAGS = \
	$(TTF_LDFLAGS)

EXTRA_DIST = \
	gltt.spec
