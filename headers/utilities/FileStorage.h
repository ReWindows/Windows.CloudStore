#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 10 member(s).
namespace Windows::Internal::Storage::Cloud {
class FileStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupportedSize@FileStorage@Cloud@Storage@Internal@Windows@@UEAAJK@Z
    virtual long CheckSupportedSize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupIdsNotInWhiteList@FileStorage@Cloud@Storage@Internal@Windows@@UEAAJPEAUIEnumString@@H@Z
    virtual long CleanupIdsNotInWhiteList(IEnumString *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@FileStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG000PEAPEAEPEAK@Z
    virtual long Load(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAsStream@FileStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG000PEAPEAUIStream@@@Z
    virtual long LoadAsStream(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@FileStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG000@Z
    virtual long Remove(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@FileStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEAEKPEAPEAG@Z
    virtual long Save(unsigned short const *, unsigned short const *, unsigned short const *, unsigned char *, unsigned long, unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileStorage@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~FileStorage();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileName@FileStorage@Cloud@Storage@Internal@Windows@@AEAAJPEBGPEAG_K@Z
    long GetFileName(unsigned short const *, unsigned short *, uint64_t);
};
} // namespace Windows::Internal::Storage::Cloud
