#ifndef _FILE_H_
#define _FILE_H_
intrinsic class File 'file/030002': Object
     *   File has no constructors, so it is not possible to create a File
     *   with the 'new' operator.  To create a file, use one of the static
     *   creator methods instead:
     *   FileCreationException - indicates that the requested file could not
     *   be created.  This is thrown when the access mode requires creating
     *   a new file but the named file cannot be created.
     *   FileOpenException - indicates that the requested file could not be
     *   FileSafetyException - the requested access mode is not allowed for
     *   the given file due to the current file safety level set by the
     *   user.  Users can set the file safety level (through command-line
     *   switches or other preference mechanisms which vary by interpreter)
     *   to restrict the types of file operations that applications are
     *   allowed to perform, in order to protect their systems from
     *   malicious programs.  This exception indicates that the user has set
     *   a safety level that is too restrictive for the requested operation.
     *   Static creator method: open a text file.  Returns a File object
     *   that can be used to read or write the file.  'access' is the
     *   read/write mode, and must be one of FileAccessRead or
     *   FileAccessWrite.  'charset' is a CharacterSet object, or can
     *   optionally be a string naming a character set, in which case a
     *   CharacterSet object for the named character set will automatically
     *   be created.  If 'charset' is omitted, a default "us-ascii"
     *   character set will be used.
     *   object that can be used to read or write the file.  'access'
     *   indicates the desired read/write access and the disposition of any
     *   existing file; any of the FileAccessXxx modes can be used.
     *   
     *   When a file is opened in data mode, you can read and write
     *   integers, strings, and 'true' values to the file, and the values in
     *   the file are marked with their datatype in a private data format.
     *   Because the file uses a tads-specific format, this mode cannot be
     *   used to read files created by other applications or write files for
     *   use by other applications; however, this storage format is
     *   convenient for storing simple data values because the File object
     *   takes care of converting to and from a portable binary format.  
     *   object that can be used to read or write the file.  'access'
     *   indicates the desired read/write access mode and the disposition of
     *   any existing file; any of the FileAccessXxx modes can be used.
     *   
     *   When a file is opened in raw mode, only ByteArray values can be
     *   read and written.  The File object performs no translations of the
     *   bytes read or written.  This mode requires the calling program
     *   itself to perform all data conversions to and from a raw byte
     *   format, but the benefit of this extra work is that this mode can be
     *   used to read and write files in arbitrary data formats, including
     *   formats defined by other applications.  
     *   is not meaningful except for text files.  'charset' must be a
     *   CharacterSet object; in particular note that a character set name
     *   given as a string is not allowed here.  
     *   It's not strictly necessary to call closeFile() on a File, since the
     *   system will automatically do this work when the File object becomes
     *   unreachable and is discarded by the garbage collector.  However, it
     *   is good practice to close a file explicitly by calling this method
     *   as soon as the program reaches a point at which it knows it's done
     *   with the file, because garbage collection might not run for a
     *   significant amount of time after the program is actually done with
     *   the file, in which case the system resources associated with the
     *   file would be needlessly retained for this extended time.  
     *   does not end with a line-ending sequence, then the last line read
     *   from the file will not end in a '\n' character.  All bytes read from
     *   an error if such a conversion is not possible), and translating the
     *   Write bytes from the ByteArray object into the file.  This can only
     *   be used for a file opened in 'raw' mode.  If 'start' and 'cnt' are
     *   given, they give the starting index in the byte array of the bytes
     *   to be written, and the number of bytes to write, respectively; if
     *   these are omitted, all of the bytes in the array are written.
    writeBytes(byteArr, start?, cnt?);
#endif /* _FILE_H_ */