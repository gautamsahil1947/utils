
[[ -f ~/.zshrc ]] && . ~/.zshrc

export PATH="/home/sahil/.config/repos/utils/bin:$PATH"


if [ -z "$DISPLAY" ] && [ "$(fgconsole)" -eq 1 ]; then
  startx
fi

