Sobh's Fork of  [dwm](https://dwm.suckless.org/)
================================================
dwm is an extremely fast, small, and dynamic window manager for X.


Requirements
------------
In order to build dwm you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (dwm is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dwm (if
necessary as root):

```sh
make clean install
```


Running dwm
-----------
Add the following line to your .xinitrc to start dwm using startx:

```sh
exec dwm
```

In order to connect dwm to a specific display, make sure that
the DISPLAY environment variable is set correctly, e.g.:

```sh
DISPLAY=foo.bar:1 exec dwm
```

(This will start dwm on display :1 of the host foo.bar.)

In order to display status info in the bar, you can do something
like this in your .xinitrc:

```sh
while xsetroot -name "`date` `uptime | sed 's/.*,//'`"
do
    sleep 1
done &
exec dwm
```


Configuration
-------------
The configuration of dwm is done by creating a custom config.h
and (re)compiling the source code.

Patches and Features
--------------------

Applied patches are tagged with `patch-<patchname>` in the commit history.

- [446b3be](https://github.com/sobh/dwm/commit/446b3be/) |
  *[preserveonstart](https://dwm.suckless.org/patches/preserveonrestart/)* :
  Preserves the client tags upon restart. However, the layout order is not
  preserved.
- [99bbb42](https://github.com/sobh/dwm/commit/99bbb42/) |
  *[noborder](https://dwm.suckless.org/patches/noborder/)* :
  Remove the border when there is only one window visible.
- [0e02c04 ](https://github.com/sobh/dwm/commit/0e02c04 /) |
  *[systray](https://dwm.suckless.org/patches/systray/)* :
  A simple system tray implementation.
