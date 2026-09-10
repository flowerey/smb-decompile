// Recovered class model for `SMBPalette` — from RTTI + vtable + symtab. NOT compiled.
// kind=vmi
#pragma once

class SMBPalette : public BaseResource, public TilePalette {
public:
  virtual void ~SMBPalette();  // +0x10 @0x4f2c80
  virtual void ~SMBPalette();  // +0x18 @0x4f3c80
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  virtual void RenderTile(GRIDBLOCK const&, Vector2 const&);  // +0x30 @0x4daac0
  virtual void RenderTileStream(VertexStream*);  // +0x38 @0x4daeb0
  virtual void RenderSetPiece(TileLevelSetPiece*, int);  // +0x40 @0x4dee20
  virtual void RenderSetPieceStream(VertexStream*);  // +0x48 @0x4da800
  virtual void SpecialRender(tagTileLayerLevelType);  // +0x50 @0x4e1290
  virtual void AddTileToBuffer(CGR::tagPos2TexVertex*, GRIDBLOCK const&, Vector2 const&, unsigned int&, unsigned int&);  // +0x58 @0x4db270
  virtual void AddSetPieceToBuffer(CGR::tagPos3TexVertex*, TileLevelSetPiece*, unsigned int&, unsigned int&);  // +0x60 @0x4da490
  virtual void GetSetPieceProps(TileLevelSetPiece const*, Vector2*, float*, Vector2*);  // +0x68 @0x4dad20
  virtual int CollisionResponse(GRIDBLOCK&, Vector2&, Vector2 const&, Vector2&, SceneObject2D*, Vector2 const&, tagTileCollisionType, int);  // +0x70 @0x4e61d0
  // ---- non-virtual / static (from symtab) ----
  void AddDisappearBlock(TileLevelSetPiece*, int);  // @0x4df840
  void AddAppearBlock(TileLevelSetPiece*, int);  // @0x4dfc60
  uint64_t IsRegisteredBreakyBlock(GRIDBLOCK const*);  // @0x4e00e0
  void SpawnDemonSpawn(Vector2 const&, TileCollisionInfo const&, SMBShooter*);  // @0x4e06d0
  uint64_t DemonBulletCollision(SceneObject2D*, Bounds*);  // @0x4e0d60
  void UpdateDemonSpawn();  // @0x4e0df0
  void RenderDemonSpawn(RenderLayer const*);  // @0x4e1130
  void CreateSMBLaserStream();  // @0x4e2050
  uint64_t PortalCollision(SceneObject2D*, TileLevelSetPiece*);  // @0x4e25a0
  void InitializeObstacleArrays();  // @0x4e2950
  void DestroyObstacleArrays();  // @0x4e45e0
  void ResetObstacleArrays();  // @0x4e4f60
  int IsBossPosID(int);  // @0x4e56c0
  void ActivateEnd(int);  // @0x4e57c0
  byte GetCollisionMask(GRIDBLOCK const&, Vector2 const&);  // @0x4e59c0
  uint64_t ApplyObstacleForces(SceneObject2D*, Bounds*);  // @0x4e89a0
  uint64_t PlatformWallJump(Vector2 const&, Vector2&);  // @0x4e9380
  uint64_t PlatformDeath(SceneObject2D*, Bounds*);  // @0x4ea4d0
  int PlatformCollision(SceneObject2D*, TileCollisionInfo&, TileCollisionInfo const&);  // @0x4eafa0
  ulong ObstacleCollision(SceneObject2D*, Bounds*);  // @0x4eb7e0
  void Update();  // @0x4ec850
  bool IsBlockCollidable(GRIDBLOCK*, SceneObject2D*);  // @0x4f06c0
  long GetInLevelTransition();  // @0x4f07e0
  void GetOutLevelTransition();  // @0x4f0840
  void MarkCollision(int);  // @0x4f0880
  void ResetObstacles();  // @0x4f11c0
  void BreakyCollide(GRIDBLOCK&);  // @0x4f1eb0
  void MarkBlockAsNotCollideable(GRIDBLOCK*);  // @0x4f2260
  void MarkCollisionOnBlock(GRIDBLOCK&, int, int);  // @0x4f23d0
  void ClearBreakyBlocks();  // @0x4f23f0
  void SetReplayIndex(int);  // @0x4f2450
  void UnSetReplayIndex();  // @0x4f2460
  void ReplayUpdate();  // @0x4f2470
  void SetToReplayMode(int);  // @0x4f2510
  void SetToNormalMode();  // @0x4f2920
  void EnableFlags(unsigned int);  // @0x4f2930
  void DisableFlags(unsigned int);  // @0x4f2940
  uint64_t ApplyTredmillForce(GRIDBLOCK*, SceneObject2D*);  // @0x4f2950
  void Activate(int);  // @0x4f2a40
  void SMBPalette(char const*);  // @0x4f3ca0
  void FindAnimatedObstacles();  // @0x4f7e40
};
