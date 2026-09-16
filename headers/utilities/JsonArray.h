#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
namespace winrt::Windows::Data::Json {
class JsonArray {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ
    JsonArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z
    static TryParse(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JsonArray@Json@Data@Windows@winrt@@QEAA@XZ
    ~JsonArray();
};
} // namespace winrt::Windows::Data::Json
