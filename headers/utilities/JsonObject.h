#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace winrt::Windows::Data::Json {
class JsonObject {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ
    JsonObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@JsonObject@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z
    static Parse(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryParse@JsonObject@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z
    static TryParse(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JsonObject@Json@Data@Windows@winrt@@QEAA@XZ
    ~JsonObject();
};
} // namespace winrt::Windows::Data::Json
