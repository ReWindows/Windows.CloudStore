#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
class AppExtensionSchemaProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@AppExtensionSchemaProvider@@UEAAJ_KPEAPEAEPEAK@Z
    virtual long GetAt(uint64_t, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForType@AppExtensionSchemaProvider@@UEAAJPEBGPEAPEAEPEAK@Z
    virtual long GetForType(unsigned short const *, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeAt@AppExtensionSchemaProvider@@UEAAJ_KPEAPEAG@Z
    virtual long GetTypeAt(uint64_t, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@AppExtensionSchemaProvider@@UEAAJPEA_K@Z
    virtual long get_Count(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionSchemaProvider@@UEAA@XZ
    virtual ~AppExtensionSchemaProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSchemaTypesLoaded@AppExtensionSchemaProvider@@AEAAXXZ
    void EnsureSchemaTypesLoaded();
};
