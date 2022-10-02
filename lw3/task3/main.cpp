#include "lib/inputStream/fileInputStream/FileInputStream.h"
#include "lib/outputStream/fileOutputStream/FileOutputStream.h"
#include "lib/decorator/encryptOutputStreamDecorator/EncryptOutputStreamDecorator.h"
#include "lib/decorator/decryptInputStreamDecorator/DecryptInputStreamDecorator.h"
#include "lib/decorator/compressOutputStreamDecorator/CompressOutputStreamDecorator.h"
#include "lib/decorator/decompressInputStreamDecorator/DecompressInputStreamDecorator.h"
#include <iostream>
#include <memory>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <boost/lexical_cast.hpp>

using namespace std;

const string COMPRESS_ARG = "--compress";
const string DECOMPRESS_ARG = "--decompress";
const string ENCRYPT_ARG = "--encrypt";
const string DECRYPT_ARG = "--decrypt";

void Transform(const vector<string>& args)
{
    if (args.size() < 3)
    {
        throw logic_error("Not enough arguments");
    }

    unique_ptr<IInputStream> input = make_unique<FileInputStream>(args[args.size() - 2]);
    unique_ptr<IOutputStream> output = make_unique<FileOutputStream>(args[args.size() - 1]);

    for (size_t i = 1; i < args.size() - 2; ++i)
    {
        if (args[i] == ENCRYPT_ARG)
        {
            auto key = boost::lexical_cast<size_t>(args[++i]);
            output = make_unique<EncryptOutputStreamDecorator>(std::move(output), key);
        }
        else if (args[i] == DECRYPT_ARG)
        {
            auto key = boost::lexical_cast<size_t>(args[++i]);
            input = make_unique<DecryptInputStreamDecorator>(std::move(input), key);
        }
        else if (args[i] == COMPRESS_ARG)
        {
            output = make_unique<CompressOutputStreamDecorator>(std::move(output));
        }
        else if (args[i] == DECOMPRESS_ARG)
        {
            input = make_unique<DecompressInputStreamDecorator>(std::move(input));
        }
        else
        {
            throw logic_error("Unknown option");
        }
    }

    bool isContinue = true;
    while (isContinue)
    {
        uint8_t ch = input->ReadByte();
        isContinue = !input->IsEOF();
        if (isContinue)
        {
            output->WriteByte(ch);
        }
    };
}

int main(int argc, char* argv[])
{
    vector<string> args(argv, argv + argc);
    // vector<string> args{ "", ENCRYPT_ARG, "hh1", COMPRESS_ARG, ENCRYPT_ARG, "qq2", "input.dat", "output.dat" };
    // vector<string> args{ "", DECRYPT_ARG, "hh1", DECOMPRESS_ARG, DECRYPT_ARG, "qq2", "output.dat", "out.dat" };
    try
    {
        Transform(args);
    }
    catch (const std::exception& exception)
    {
        cerr << exception.what() << endl;
    }
}