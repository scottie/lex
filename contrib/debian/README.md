
Debian
====================
This directory contains files used to package LEXd/LEX-qt
for Debian-based Linux systems. If you compile LEXd/LEX-qt yourself, there are some useful files here.

## LEX: URI support ##


LEX-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install LEX-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your LEXqt binary to `/usr/bin`
and the `../../share/pixmaps/LEX128.png` to `/usr/share/pixmaps`

LEX-qt.protocol (KDE)

