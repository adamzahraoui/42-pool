#!/bin/sh
find . -type f -name "*.sh" -exec basename {$1} .sh \;
