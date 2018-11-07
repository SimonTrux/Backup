#!/bin/sh
find . -type f -iname "*.sh" | rev | cut -d / -f1 | cut -c4- | rev
