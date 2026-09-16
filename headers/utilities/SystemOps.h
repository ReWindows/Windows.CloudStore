#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 15 member(s).
namespace Windows::Internal::Storage::Cloud::Common {
class SystemOps {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsaLookupUserAccountType@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJAEAW4LsaAccountType@23456@@Z
    virtual long LsaLookupUserAccountType(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenNtServiceW@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJPEAUSC_HANDLE__@@PEBGKPEAPEAU7@@Z
    virtual long OpenNtServiceW(SC_HANDLE__*, unsigned short const *, unsigned long, SC_HANDLE__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenServiceControlManagerW@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJKPEAPEAUSC_HANDLE__@@@Z
    virtual long OpenServiceControlManagerW(unsigned long, SC_HANDLE__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateAadInfoIfCurrentUserAadAccountKind@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJAEAUCurrentUserAccountInfo@23456@@Z
    virtual long PopulateAadInfoIfCurrentUserAadAccountKind(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryServiceStatus@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJPEAUSC_HANDLE__@@AEAU_SERVICE_STATUS@@@Z
    virtual long QueryServiceStatus(SC_HANDLE__*, _SERVICE_STATUS &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegCreateKeyExW@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJPEAUHKEY__@@PEBGKPEAPEAU7@PEAK@Z
    virtual long RegCreateKeyExW(HKEY__*, unsigned short const *, unsigned long, HKEY__* *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegOpenKeyExW@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJPEAUHKEY__@@PEBGKPEAPEAU7@@Z
    virtual long RegOpenKeyExW(HKEY__*, unsigned short const *, unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegQueryDWORD@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJPEAUHKEY__@@PEBG1PEAK@Z
    virtual long RegQueryDWORD(HKEY__*, unsigned short const *, unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegQueryDWORD@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJPEAUHKEY__@@PEBGPEAK@Z
    virtual long RegQueryDWORD(HKEY__*, unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegQueryValueExW@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJPEAUHKEY__@@PEBGPEAKPEAE2@Z
    virtual long RegQueryValueExW(HKEY__*, unsigned short const *, unsigned long *, unsigned char *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegSetValueExW@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAJPEAUHKEY__@@PEBGKPEBEK@Z
    virtual long RegSetValueExW(HKEY__*, unsigned short const *, unsigned long, unsigned char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sleep@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAAXI@Z
    virtual void Sleep(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TickCount64@SystemOps@Common@Cloud@Storage@Internal@Windows@@UEAA_KXZ
    virtual uint64_t TickCount64();
};
} // namespace Windows::Internal::Storage::Cloud::Common
