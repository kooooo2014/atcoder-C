#!/bin/bash

for i in {001..100}
do
  cp -n template.cpp Medium/$i.cpp
done

exit 0
