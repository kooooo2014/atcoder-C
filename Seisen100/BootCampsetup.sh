#!/bin/bash

for i in {001..100}
do
  cp -n template.cpp $i.cpp
done

exit 0
