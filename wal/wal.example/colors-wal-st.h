const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#020307", /* black   */
  [1] = "#4A3C42", /* red     */
  [2] = "#334553", /* green   */
  [3] = "#3D5462", /* yellow  */
  [4] = "#4D4B54", /* blue    */
  [5] = "#605959", /* magenta */
  [6] = "#9E6B4B", /* cyan    */
  [7] = "#bfc0c1", /* white   */

  /* 8 bright colors */
  [8]  = "#414245",  /* black   */
  [9]  = "#4A3C42",  /* red     */
  [10] = "#334553", /* green   */
  [11] = "#3D5462", /* yellow  */
  [12] = "#4D4B54", /* blue    */
  [13] = "#605959", /* magenta */
  [14] = "#9E6B4B", /* cyan    */
  [15] = "#bfc0c1", /* white   */

  /* special colors */
  [256] = "#020307", /* background */
  [257] = "#bfc0c1", /* foreground */
  [258] = "#bfc0c1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
