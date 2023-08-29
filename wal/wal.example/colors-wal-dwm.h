static const char norm_fg[] = "#4D4B54";
static const char norm_bg[] = "#020307";
static const char norm_border[] = "#020307";

static const char sel_fg[] = "#020307";
static const char sel_bg[] = "#4D4B54";
static const char sel_border[] = "#414245";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
