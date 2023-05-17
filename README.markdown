mod_epub
=======

mod_epub in simplified [mod_zip](https://github.com/evanmiller/mod_zip).

mod_epub assembles application/epub+zip archives dynamically.  All details can be found in original project.

Diffedences between mod_zip and mod_epub
------------
 - Expexted 'X-Archive-Files' header value changed from 'zip' to 'epub'. IF allows us to muse both modules mod_epub and mod_zip together.
 - removed support of extra fileds, thus they are not needed for epubs
 - removed support of zip64, thus it's not needed in epubs
 - slightly changed versions of zip creation algorithm and needed decompression. Original values did problems in some ebook readers.
 - changed central directory external attributes to zero - did problems in some ebook readers.
 - changed internal attributes for some extensions to identify contents as ascii/text. Again it's fix for some readers which expects it.

Verions and bug/feature requests
----

Used mod_zip version is actually [1.3.0](https://github.com/evanmiller/mod_zip/commit/39dc9085d29445ed3238d215e94fbcbeef0131dc).

If you need to update this repository to newer version of mod_epub just create issue with update request or prepare pull request yourself.

If you find any problem with feel free to write an issue. If it's problem with some ebook-reader, please provide me epub, which works on your reader and we can try to find the fix together.

TODOs
----
 - make tests working
