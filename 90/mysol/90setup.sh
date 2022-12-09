#!/bin/bash

if [ $# -ne 2 ]; then
  echo "Usage: $0 difficulty problem-name" 1>&2
  exit 1
fi

cp -n ./template.cpp ./star-$1/$2.cpp
exit 0
