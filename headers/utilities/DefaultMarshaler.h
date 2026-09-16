#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Storage::Streams {
class DefaultMarshaler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@DefaultMarshaler@Streams@Storage@Windows@@QEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@DefaultMarshaler@Streams@Storage@Windows@@QEAAJAEBU_GUID@@PEAXK1KPEAU5@@Z
    long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@DefaultMarshaler@Streams@Storage@Windows@@QEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInit@DefaultMarshaler@Streams@Storage@Windows@@AEAAJXZ
    long _EnsureInit();
};
} // namespace Windows::Storage::Streams
