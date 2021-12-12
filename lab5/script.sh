#!/bin/bash

ps -eo euid,ruid,comm | awk 'FNR == 1 {next} $1 != $2 {print $3}'

