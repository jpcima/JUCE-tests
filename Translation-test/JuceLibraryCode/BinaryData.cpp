/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== fr.txt ==================
static const unsigned char temp_binary_data_0[] =
"language: Fran\xc3\xa7""ais\n"
"countries: fr\n"
"\n"
"\"Hello, World!\" = \"Hello, World!\"\n"
"\"It rolls,\\r\\nmy chicken?\\r\\n\" = \"It rolls,\\r\\nmy chicken?\\r\\n\"\n";

const char* fr_txt = (const char*) temp_binary_data_0;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;
    if (resourceNameUTF8 != 0)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0xb481b87d:  numBytes = 133; return fr_txt;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "fr_txt"
};

const char* originalFilenames[] =
{
    "fr.txt"
};

const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8)
{
    for (unsigned int i = 0; i < (sizeof (namedResourceList) / sizeof (namedResourceList[0])); ++i)
    {
        if (namedResourceList[i] == resourceNameUTF8)
            return originalFilenames[i];
    }

    return nullptr;
}

}
