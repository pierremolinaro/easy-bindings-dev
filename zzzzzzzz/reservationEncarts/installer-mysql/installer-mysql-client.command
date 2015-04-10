#!/bin/sh
DIR=`dirname $0`
sudo mkdir -p /usr/local/mysql/lib &&
sudo cp $DIR/libmysqlclient.18.dylib /usr/local/mysql/lib
