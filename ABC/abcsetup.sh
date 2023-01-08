#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 2xx" 1>&2
  exit 1
fi

if ! [[ "$1" =~ ^[1-9][0-9]{,2}$ ]]; then
  echo "Usage: $0 2xx (x=[0-9])" 1>&2
  exit 1
fi

mkdir -p $1

cp -n template.cpp $1/a.cpp
cp -n template.cpp $1/b.cpp
cp -n template.cpp $1/c.cpp
cp -n template.cpp $1/d.cpp
cp -n template.cpp $1/e.cpp
cp -n template.cpp $1/f.cpp
cp -n template.cpp $1/g.cpp
cp -n template.cpp $1/h.cpp
cp -n gcc.sh $1/gcc.sh

cd ./$1

exit 0
