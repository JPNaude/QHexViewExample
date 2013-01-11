Introduction
------------

The is a clone of the [QHexView libary](http://code.google.com/p/qhexview/) along with an example of how to display the contents of a file in __QHexView__.

Usage
-----

QHexView will be compiled into a library and placed under /lib. The example application links against this library and loads the contents of the example's executable on startup.

```
qmake -o Makefile qhexview.pro
make
```

Alteratively, open the QHexView.pro file in Qt Creator and just run it. 

