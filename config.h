/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static int fuzzy = 1;
static const char *fonts[] = {
	"Source Code Pro:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#8FBCBB", "#2e3340" },
	[SchemeSel] = { "#D8DEE9", "#B48EAD" },
	[SchemeSelHighlight] = { "#A3BE8C", "#2e3340" },
	[SchemeNormHighlight] = { "#A3BE8C", "#2e3340" },
	[SchemeOut] = { "#ECEFF4", "#D8DEE9" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* Size of the window border */
static const unsigned int border_width = 5;
