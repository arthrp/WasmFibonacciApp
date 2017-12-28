#!/bin/sh

emcc fibonacci.c -o index.html -O3 -s WASM=1 --shell-file simple_template.html -s NO_EXIT_RUNTIME=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'
