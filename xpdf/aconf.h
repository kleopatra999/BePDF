/* aconf.h.  Generated from aconf.h.in by configure.  */
/*
 * aconf.h
 *
 * Copyright 2002-2003 Glyph & Cog, LLC
 */

#ifndef ACONF_H
#define ACONF_H

/*
 * Use A4 paper size instead of Letter for PostScript output.
 */
/* #undef A4_PAPER */

/*
 * Do not allow text selection.
 */
/* #undef NO_TEXT_SELECT */

/*
 * Include support for OPI comments.
 */
/* #undef OPI_SUPPORT */

/*
 * Enable multithreading support.
 */
#define MULTITHREADED 1

/*
 * Enable C++ exceptions.
 */
/* #undef USE_EXCEPTIONS */

/*
 * Use fixed point (instead of floating point) arithmetic.
 */
/* #undef USE_FIXEDPOINT */

/*
 * Directory with the Xpdf app-defaults file.
 */
#define APPDEFDIR ""

/*
 * Full path for the system-wide xpdfrc file.
 */
#define SYSTEM_XPDFRC "/boot/home/config/etc/xpdfrc"

/*
 * Various include files and functions.
 */
#define HAVE_DIRENT_H 1
/* #undef HAVE_SYS_NDIR_H */
/* #undef HAVE_SYS_DIR_H */
/* #undef HAVE_NDIR_H */
#define HAVE_SYS_SELECT_H 1
/* #undef HAVE_SYS_BSDTYPES_H */
/* #undef HAVE_STRINGS_H */
/* #undef HAVE_BSTRING_H */
#define HAVE_POPEN 1
#define HAVE_MKSTEMP 1
/* #undef HAVE_MKSTEMPS */
/* #undef SELECT_TAKES_INT */
#define HAVE_STD_SORT 1
#define HAVE_FSEEKO 1
/* #undef HAVE_FSEEK64 */
/* #undef HAVE_FSEEKI64 */
/* #undef _FILE_OFFSET_BITS */
/* #undef _LARGE_FILES */
/* #undef _LARGEFILE_SOURCE */
/* #undef HAVE_XTAPPSETEXITFLAG */

/*
 * This is defined if using libXpm.
 */
/* #undef HAVE_X11_XPM_H */

/*
 * One of these is defined if using FreeType 2.
 */
/* #undef HAVE_FREETYPE_H */
#define HAVE_FREETYPE_FREETYPE_H 1

/*
 * This is defined if using libpaper.
 */
/* #undef HAVE_PAPER_H */

/*
 * Enable support for loading plugins.
 */
/* #undef ENABLE_PLUGINS */

/*
 * Defined if the Splash library is avaiable.
 */
/* #undef HAVE_SPLASH */

/*
 * Enable support for CMYK output.
 */
/* #undef SPLASH_CMYK */

#endif
