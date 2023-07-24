static const char norm_fg[] = "{color4}";
static const char norm_bg[] = "{color0}";
static const char norm_border[] = "{color0}";

static const char sel_fg[] = "{color0}";
static const char sel_bg[] = "{color4}";
static const char sel_border[] = "{color8}";

static const char *colors[][3]      = {{
    /*               fg           bg         border                         */
    [SchemeNorm] = {{ norm_fg,     norm_bg,   norm_border }}, // unfocused wins
    [SchemeSel]  = {{ sel_fg,      sel_bg,    sel_border }},  // the focused win
}};
