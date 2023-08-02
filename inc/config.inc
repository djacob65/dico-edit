<?php

# Nom du fichier: config
# Auteur(s): D.JACOB 
# Copyright: (c) INRAE - 2022
#
session_start([ 'cookie_lifetime' => 3600 ]);

date_default_timezone_set('Europe/Paris');
ini_set('error_reporting', E_ALL & ~E_NOTICE);
ini_set("include_path", ".:/usr/share/php");
ini_set("display_errors", 1);

// Configuration
$PATH='./';          // Relative path to find resources (css & js)
#$USER = $_SERVER['PHP_AUTH_USER']; // see .htaccess
$USER = 'admin';     // Admin user
$CVDIR = 'cvlist/';  // Directory of the dictionary files
$DICOSEL='people';   // the default dictionary
$SEP="\t";           // Separator within text files (typically \t or ,)
$EXT="txt";          // Extension of text files (typically txt or csv)
$SORTCOL=1;          // column number to be sorted

?>
