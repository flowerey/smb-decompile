// Shared vocabulary for the reconstructed tree (reading aid, not built).
#pragma once
#include <stdint.h>

// ---- Provenance -----------------------------------------------------------
// [Confirmed]  demonstrated by binary/decompilation or strong xrefs.
// [Inferred]   strongly supported by usage; original name/shape is gone.
// [Speculation] plausible only; never drives behavior, always tagged.

// ---- Engine forward declarations (opaque; defined elsewhere or not recovered)
struct TileLevel;
struct FlashLibrary;
struct FlashClip;
struct MeatBoyCharactor;
struct tagButtonProps;

// [Strong inference] 8-byte position vector: copied wholesale (8B) and
// consumed float-wise (x, then y) at every use site.
struct Vector2 {
  float x;
  float y;
};

// ---- Globals consumed by reconstructed code (types as observed) ------------
extern void *SuperMeatBoy;      // [Confirmed] global game object (nm symbol)
extern float fOneFrameTimeStep; // [Confirmed] per-frame dt (used in float math)

// (No helpers yet — they will be added here only when shared by 2+ classes.)
