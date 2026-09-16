#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 14 member(s).
namespace Windows::Internal::Storage::Cloud {
class RegistryStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupportedSize@RegistryStorage@Cloud@Storage@Internal@Windows@@UEAAJK@Z
    virtual long CheckSupportedSize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcher@RegistryStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEAPEAUIDataChangeWatcher@@@Z
    virtual long CreateWatcher(unsigned short const *, unsigned short const *, unsigned short const *, IDataChangeWatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enumerate@RegistryStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBGPEAPEAUIEnumString@@@Z
    virtual long Enumerate(unsigned short const *, IEnumString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@RegistryStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEAPEAEPEAK@Z
    virtual long Load(unsigned short const *, unsigned short const *, unsigned short const *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@RegistryStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG00@Z
    virtual long Remove(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@RegistryStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG0@Z
    virtual long Remove(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@RegistryStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEAEK@Z
    virtual long Save(unsigned short const *, unsigned short const *, unsigned short const *, unsigned char *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryStorage@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~RegistryStorage();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyName@RegistryStorage@Cloud@Storage@Internal@Windows@@CAJPEBG00PEAG_K@Z
    static long GetKeyName(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyName@RegistryStorage@Cloud@Storage@Internal@Windows@@CAJPEBG0PEAG_K@Z
    static long GetKeyName(unsigned short const *, unsigned short const *, unsigned short *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyName@RegistryStorage@Cloud@Storage@Internal@Windows@@CAJPEBGPEAG_K@Z
    static long GetKeyName(unsigned short const *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveKey@RegistryStorage@Cloud@Storage@Internal@Windows@@AEAAJPEBG@Z
    long RemoveKey(unsigned short const *);
};
} // namespace Windows::Internal::Storage::Cloud
