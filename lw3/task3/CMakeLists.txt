cmake_minimum_required(VERSION 3.16)
project(transform)

set(CMAKE_CXX_STANDARD 14)

add_executable(transform
        main.cpp
        lib/outputStream/IOutputStream.hpp
        lib/inputStream/IInputStream.hpp
        lib/inputStream/fileInputStream/FileInputStream.cpp
        lib/inputStream/fileInputStream/FileInputStream.h
        lib/outputStream/fileOutputStream/FileOutputStream.cpp
        lib/outputStream/fileOutputStream/FileOutputStream.h
        lib/inputStream/memoryInputStream/MemoryInputStream.cpp
        lib/inputStream/memoryInputStream/MemoryInputStream.h
        lib/outputStream/memoryOutputStream/MemoryOutputStream.cpp
        lib/outputStream/memoryOutputStream/MemoryOutputStream.h
        lib/replaceEncryptor/ReplaceEncryptor.cpp
        lib/replaceEncryptor/ReplaceEncryptor.h
        lib/decorator/compressOutputStreamDecorator/CompressOutputStreamDecorator.cpp
        lib/decorator/compressOutputStreamDecorator/CompressOutputStreamDecorator.h
        lib/decorator/outputStreamDecorator/OutputStreamDecorator.cpp
        lib/decorator/outputStreamDecorator/OutputStreamDecorator.h
        lib/decorator/inputStreamDecorator/InputStreamDecorator.cpp
        lib/decorator/inputStreamDecorator/InputStreamDecorator.h
        lib/decorator/decompressInputStreamDecorator/DecompressInputStreamDecorator.cpp
        lib/decorator/decompressInputStreamDecorator/DecompressInputStreamDecorator.h lib/decorator/decryptInputStreamDecorator/DecryptInputStreamDecorator.cpp lib/decorator/decryptInputStreamDecorator/DecryptInputStreamDecorator.h lib/decorator/encryptOutputStreamDecorator/EncryptOutputStreamDecorator.cpp lib/decorator/encryptOutputStreamDecorator/EncryptOutputStreamDecorator.h)
