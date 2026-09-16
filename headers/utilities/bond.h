#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 133 member(s).
class bond {
public:
    class CoreException;
    class Exception;
    class FieldDef;
    class InitSchemaDef;
    class InputBuffer;
    class Metadata;
    class ProtocolReader;
    class RuntimeSchema;
    class SchemaDef;
    class SerializableExceptionBase;
    class StreamException;
    class StructDef;
    class TypeDef;
    class Variant;
    class blob;
    class detail;
    class reflection;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExceededMaxRecursionDepthException@bond@@YAXXZ
    void ExceededMaxRecursionDepthException();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferRange@bond@@YA?AVblob@1@AEBV21@0@Z
    WindissectOpaque GetBufferRange(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBuffer@bond@@YA?AVblob@1@AEBVInputBuffer@1@@Z
    WindissectOpaque GetCurrentBuffer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfBoundObjectSizeException@bond@@YAXXZ
    void OutOfBoundObjectSizeException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfBoundStringSizeException@bond@@YAXXZ
    void OutOfBoundStringSizeException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnknownDataTypeException@bond@@YAXXZ
    void UnknownDataTypeException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnknownProtocolException@bond@@YAXXZ
    void UnknownProtocolException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?element_schema@bond@@YA?AVRuntimeSchema@1@AEBV21@@Z
    WindissectOpaque element_schema(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?key_schema@bond@@YA?AVRuntimeSchema@1@AEBV21@@Z
    WindissectOpaque key_schema(WindissectOpaque const &);
};
