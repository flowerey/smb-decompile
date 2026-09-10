# Module: vendor (1032 functions, 3 files)

Third-party code compiled in: zlib/libpng, ogg/vorbis/stb, MOJOSHADER/GLSL/D3D shader translators. Stock upstream logic — read upstream sources instead of these dumps where possible.

## Files

- `src/vendor/audio.c` (45)
- `src/vendor/shader.c` (571)
- `src/vendor/zlib_png.c` (416)

## Hubs (most called-by)

| function | addr | callers |
|---|---|---|
| `stb_vorbis_get_frame_float_part_25` | `005af180` | 10 |
| `get_D3D_register_string_constprop_65` | `0051d7f0` | 10 |
| `make_GLSL_destarg_assign` | `0051d9e0` | 10 |
| `make_ARB1_destarg_string_constprop_77` | `0051e090` | 10 |
| `make_ARB1_srcarg_string_in_buf_constprop_62` | `0051ea30` | 10 |
| `emit_ARB1_dest_modifiers` | `0051f590` | 10 |
| `emit_ARB1_opcode_dss` | `0051fd50` | 10 |
| `make_GLSL_srcarg_string_constprop_72` | `00521200` | 10 |
| `make_D3D_destarg_string_constprop_70` | `005236b0` | 10 |
| `emit_D3D_opcode_ds` | `00524080` | 10 |
| `emit_D3D_opcode_dss` | `00524370` | 10 |
| `parse_destination_token_part_47` | `00524820` | 10 |

## Most connected callers

| function | addr | calls |
|---|---|---|
| `vorbis_decode_packet_rest` | `005ac060` | 10 |
| `stb_vorbis_decode_filename` | `005b35c0` | 10 |
| `MOJOSHADER_parse` | `0052a2c0` | 10 |
| `MOJOSHADER_assemble` | `0052e9d0` | 10 |
| `MOJOSHADER_glCreateContext` | `00537d40` | 10 |
| `MOJOSHADER_glBindShaders` | `005380d0` | 10 |
| `preprocessor_start` | `0053b970` | 10 |
| `preprocessor_nexttoken` | `0053bf40` | 10 |
| `MOJOSHADER_preprocess` | `0053d0a0` | 10 |
| `png_push_read_IDAT` | `005438c0` | 10 |
| `png_push_read_zTXt` | `00543db0` | 10 |
| `png_push_read_chunk` | `00544360` | 10 |
