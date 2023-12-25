find . -name '*.sh' -type f -print0 | xargs -0 -I{} basename {} .sh
