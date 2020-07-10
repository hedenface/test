#!/bin/bash

if [ ! -f iwritec ]; then
  echo "no binary found"
  exit 1
fi

valgrind ./iwritec

