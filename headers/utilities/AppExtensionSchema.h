#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
class AppExtensionSchema {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaBytes@AppExtensionSchema@@QEAAXPEAPEAEPEAK@Z
    void GetSchemaBytes(unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtensionWithVersion@AppExtensionSchema@@QEAAXAEBUAppExtension@AppExtensions@ApplicationModel@Windows@winrt@@I@Z
    void UpdateExtensionWithVersion(WindissectOpaque const &, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionSchema@@QEAA@XZ
    ~AppExtensionSchema();
};
