#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
class RuntimeSchemaProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@RuntimeSchemaProvider@@UEAAJ_KPEAPEAEPEAK@Z
    virtual long GetAt(uint64_t, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForType@RuntimeSchemaProvider@@UEAAJPEBGPEAPEAEPEAK@Z
    virtual long GetForType(unsigned short const *, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeAt@RuntimeSchemaProvider@@UEAAJ_KPEAPEAG@Z
    virtual long GetTypeAt(uint64_t, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@RuntimeSchemaProvider@@UEAAJPEA_K@Z
    virtual long get_Count(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RuntimeSchemaProvider@@UEAA@XZ
    virtual ~RuntimeSchemaProvider();
};
