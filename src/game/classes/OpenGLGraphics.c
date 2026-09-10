/* src/game/classes/OpenGLGraphics.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "OpenGLGraphics.h"

/* ======================================================================
 * OpenGLGraphics__PrepBackbuffer  (Ghidra `PrepBackbuffer` @ 0055dd90)
 * Signature: uint8_t __thiscall PrepBackbuffer(OpenGLGraphics * self)
 * Class: OpenGLGraphics
 * Calls: `OpenGLGraphics__PrepBackbuffer__0055e590`
 * Called by: (none)
 */
/* OpenGLGraphics__PrepBackbuffer__0055e590() [clone .part.24] */

void __thiscall OpenGLGraphics__PrepBackbuffer__0055e590(OpenGLGraphics *self)

{
  (*pglfn_glGenFramebuffersEXT)(1,self + 0x10);
  (*pglfn_glBindFramebufferEXT)(0x8d40,*(uint32_t *)(self + 0x10));
  (*pglfn_glGenRenderbuffersEXT)(1,self + 0x14);
  (*pglfn_glBindRenderbufferEXT)(0x8d41,*(uint32_t *)(self + 0x14));
  (*pglfn_glRenderbufferStorageEXT)
            (0x8d41,0x8058,*(uint16_t *)(Window + 8),*(uint16_t *)(Window + 10));
  (*pglfn_glGenRenderbuffersEXT)(1,self + 0x18);
  (*pglfn_glBindRenderbufferEXT)(0x8d41,*(uint32_t *)(self + 0x18));
  (*pglfn_glRenderbufferStorageEXT)
            (0x8d41,0x81a6,*(uint16_t *)(Window + 8),*(uint16_t *)(Window + 10));
  (*pglfn_glBindRenderbufferEXT)(0x8d41,0);
  (*pglfn_glFramebufferRenderbufferEXT)(0x8d40,0x8ce0,0x8d41,*(uint32_t *)(self + 0x14));
  (*pglfn_glFramebufferRenderbufferEXT)(0x8d40,0x8d00,0x8d41,*(uint32_t *)(self + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0055de73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glClear)(0x4100);
  return;
}

/* ======================================================================
 * OpenGLGraphics__DestroyBackbuffer  (Ghidra `DestroyBackbuffer` @ 0055e4d0)
 * Signature: uint8_t __thiscall DestroyBackbuffer(OpenGLGraphics * self)
 * Class: OpenGLGraphics
 * Calls: (none)
 * Called by: `gfxResetDevice`
 */
/* OpenGLGraphics__DestroyBackbuffer() */

void __thiscall OpenGLGraphics__DestroyBackbuffer(OpenGLGraphics *self)

{
  if (*(int *)(self + 0x10) != 0) {
    (*pglfn_glBindFramebufferEXT)(0x8d40);
    (*pglfn_glFramebufferRenderbufferEXT)(0x8d40,0x8ce0,0x8d41,0);
    (*pglfn_glFramebufferRenderbufferEXT)(0x8d40,0x8d00,0x8d41,0);
    (*pglfn_glBindFramebufferEXT)(0x8d40,0);
    (*pglfn_glDeleteFramebuffersEXT)(1,self + 0x10);
  }
  if (*(int *)(self + 0x14) != 0) {
    (*pglfn_glDeleteRenderbuffersEXT)(1,self + 0x14);
  }
  if (*(int *)(self + 0x18) != 0) {
    (*pglfn_glDeleteRenderbuffersEXT)(1,self + 0x18);
  }
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  return;
}

/* ======================================================================
 * OpenGLGraphics__PrepBackbuffer__0055e590  (Ghidra `PrepBackbuffer` @ 0055e590)
 * Signature: uint8_t __thiscall PrepBackbuffer(OpenGLGraphics * self)
 * Class: OpenGLGraphics
 * Calls: `SDL_GL_GetDrawableSize`
 * Called by: `OpenGLGraphics__PrepBackbuffer`, `gfxResetDevice`
 */
/* OpenGLGraphics__PrepBackbuffer__0055e590() */

void __thiscall OpenGLGraphics__PrepBackbuffer__0055e590(OpenGLGraphics *self)

{
  long lVar1;
  uint local_28 [4];
  uint local_18 [4];
  
  DestroyBackbuffer(self);
  SDL_GL_GetDrawableSize(*(uint64_t *)self,local_28,local_18);
  lVar1 = Window;
  if (have_GL_EXT_framebuffer_blit == '\0') {
    *(short *)(Window + 8) = (short)local_28[0];
    *(short *)(lVar1 + 10) = (short)local_18[0];
    return;
  }
  if (*(ushort *)(Window + 8) == local_28[0]) {
    if (*(ushort *)(Window + 10) == local_18[0]) {
      return;
    }
    PrepBackbuffer(self);
  }
  else {
    PrepBackbuffer(self);
  }
  return;
}

/* ======================================================================
 * OpenGLGraphics__OpenGLGraphics  (Ghidra `OpenGLGraphics` @ 0055e610)
 * Signature: uint8_t __thiscall OpenGLGraphics(OpenGLGraphics * self)
 * Class: OpenGLGraphics
 * Calls: `CreateEngineShaders`, `MOJOSHADER_glBestProfile`, `MOJOSHADER_glCreateContext`, `MOJOSHADER_glMakeContextCurrent`, `MojoShaderFree`, `MojoShaderGetProcAddr`, `MojoShaderMalloc`, `SDL_GL_CreateContext`, `SDL_GL_ExtensionSupported`, `SDL_GL_GetDrawableSize` (+12 more)
 * Called by: `gfxCreateRenderDevice`
 */
/* WARNING: Removing unreachable block (ram,0x005608df) */
/* OpenGLGraphics__OpenGLGraphics() */

void __thiscall OpenGLGraphics__OpenGLGraphics(OpenGLGraphics *self)

{
  int *piVar1;
  float fVar2;
  char *pcVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  char *__s2;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  long local_88;
  uint local_7c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
  uint local_38 [4];
  uint local_28 [3];
  allocator local_1a [2];
  
  *(uint64_t *)self = 0;
  plVar4 = Window;
  *(uint64_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x14) = 0;
  *(uint32_t *)(self + 0x18) = 0;
  lVar6 = *plVar4;
  *(long *)self = lVar6;
  if (lVar6 == 0) {
    Error__ThrowFatalError("Could not get the game window");
  }
  SDL_GL_SetAttribute(0,8);
  SDL_GL_SetAttribute(1,8);
  SDL_GL_SetAttribute(2,8);
  SDL_GL_SetAttribute(3,0);
  SDL_GL_SetAttribute(6,0);
  SDL_GL_SetAttribute(7,0);
  SDL_GL_SetAttribute(5,1);
  SDL_GL_SetAttribute(0xf,1);
  lVar6 = SDL_GL_CreateContext(*(uint64_t *)self);
  *(long *)(self + 8) = lVar6;
  if (lVar6 == 0) {
    Error__ThrowFatalError("Could not create an OpenGL context");
  }
  lVar6 = SDL_GL_GetProcAddress("glActiveTexture");
  if (lVar6 == 0) {
    fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glActiveTexture","OpenGL");
    pglfn_glActiveTexture = 0;
  }
  else {
    pglfn_glActiveTexture = lVar6;
    lVar6 = SDL_GL_GetProcAddress("glAlphaFunc");
    if (lVar6 == 0) {
      fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glAlphaFunc","OpenGL");
      pglfn_glAlphaFunc = 0;
    }
    else {
      pglfn_glAlphaFunc = lVar6;
      lVar6 = SDL_GL_GetProcAddress("glBindTexture");
      if (lVar6 == 0) {
        fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glBindTexture","OpenGL");
        pglfn_glBindTexture = 0;
      }
      else {
        pglfn_glBindTexture = lVar6;
        lVar6 = SDL_GL_GetProcAddress("glBlendEquation");
        if (lVar6 == 0) {
          fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glBlendEquation","OpenGL"
                 );
          pglfn_glBlendEquation = 0;
        }
        else {
          pglfn_glBlendEquation = lVar6;
          lVar6 = SDL_GL_GetProcAddress("glBlendFunc");
          if (lVar6 == 0) {
            fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glBlendFunc","OpenGL");
            pglfn_glBlendFunc = 0;
          }
          else {
            pglfn_glBlendFunc = lVar6;
            pcVar7 = (code *)SDL_GL_GetProcAddress("glClear");
            if (pcVar7 == (code *)0x0) {
              fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glClear","OpenGL");
              pglfn_glClear = (code *)0x0;
            }
            else {
              pglfn_glClear = pcVar7;
              pcVar7 = (code *)SDL_GL_GetProcAddress("glClearColor");
              if (pcVar7 == (code *)0x0) {
                fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glClearColor",
                        "OpenGL");
                pglfn_glClearColor = (code *)0x0;
              }
              else {
                pglfn_glClearColor = pcVar7;
                lVar6 = SDL_GL_GetProcAddress("glClearDepth");
                if (lVar6 == 0) {
                  fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glClearDepth",
                          "OpenGL");
                  pglfn_glClearDepth = 0;
                }
                else {
                  pglfn_glClearDepth = lVar6;
                  lVar6 = SDL_GL_GetProcAddress("glClearStencil");
                  if (lVar6 == 0) {
                    fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glClearStencil"
                            ,"OpenGL");
                    pglfn_glClearStencil = 0;
                  }
                  else {
                    pglfn_glClearStencil = lVar6;
                    lVar6 = SDL_GL_GetProcAddress("glColorMask");
                    if (lVar6 == 0) {
                      fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n","glColorMask",
                              "OpenGL");
                      pglfn_glColorMask = 0;
                    }
                    else {
                      pglfn_glColorMask = lVar6;
                      lVar6 = SDL_GL_GetProcAddress("glCompressedTexImage2D");
                      if (lVar6 == 0) {
                        fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                "glCompressedTexImage2D","OpenGL");
                        pglfn_glCompressedTexImage2D = 0;
                      }
                      else {
                        pglfn_glCompressedTexImage2D = lVar6;
                        pcVar7 = (code *)SDL_GL_GetProcAddress("glCullFace");
                        if (pcVar7 == (code *)0x0) {
                          fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                  "glCullFace","OpenGL");
                          pglfn_glCullFace = (code *)0x0;
                        }
                        else {
                          pglfn_glCullFace = pcVar7;
                          lVar6 = SDL_GL_GetProcAddress("glDeleteTextures");
                          if (lVar6 == 0) {
                            fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                    "glDeleteTextures","OpenGL");
                            pglfn_glDeleteTextures = 0;
                          }
                          else {
                            pglfn_glDeleteTextures = lVar6;
                            pcVar7 = (code *)SDL_GL_GetProcAddress("glDepthFunc");
                            if (pcVar7 == (code *)0x0) {
                              fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                      "glDepthFunc","OpenGL");
                              pglfn_glDepthFunc = (code *)0x0;
                            }
                            else {
                              pglfn_glDepthFunc = pcVar7;
                              lVar6 = SDL_GL_GetProcAddress("glDepthMask");
                              if (lVar6 == 0) {
                                fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                        "glDepthMask","OpenGL");
                                pglfn_glDepthMask = 0;
                              }
                              else {
                                pglfn_glDepthMask = lVar6;
                                lVar6 = SDL_GL_GetProcAddress("glDepthRange");
                                if (lVar6 == 0) {
                                  fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                          "glDepthRange","OpenGL");
                                  pglfn_glDepthRange = 0;
                                }
                                else {
                                  pglfn_glDepthRange = lVar6;
                                  pcVar7 = (code *)SDL_GL_GetProcAddress("glDisable");
                                  if (pcVar7 == (code *)0x0) {
                                    fprintf(stderr,"Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                            "glDisable","OpenGL");
                                    pglfn_glDisable = (code *)0x0;
                                  }
                                  else {
                                    pglfn_glDisable = pcVar7;
                                    lVar6 = SDL_GL_GetProcAddress("glDrawArrays");
                                    if (lVar6 == 0) {
                                      fprintf(stderr,
                                              "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                              "glDrawArrays","OpenGL");
                                      pglfn_glDrawArrays = 0;
                                    }
                                    else {
                                      pglfn_glDrawArrays = lVar6;
                                      lVar6 = SDL_GL_GetProcAddress("glDrawElements");
                                      if (lVar6 == 0) {
                                        fprintf(stderr,
                                                "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                "glDrawElements","OpenGL");
                                        pglfn_glDrawElements = 0;
                                      }
                                      else {
                                        pglfn_glDrawElements = lVar6;
                                        lVar6 = SDL_GL_GetProcAddress("glDrawBuffer");
                                        if (lVar6 == 0) {
                                          fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDrawBuffer","OpenGL");
                                          pglfn_glDrawBuffer = 0;
                                        }
                                        else {
                                          pglfn_glDrawBuffer = lVar6;
                                          pcVar7 = (code *)SDL_GL_GetProcAddress("glEnable");
                                          if (pcVar7 == (code *)0x0) {
                                            fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glEnable","OpenGL");
                                            pglfn_glEnable = (code *)0x0;
                                          }
                                          else {
                                            pglfn_glEnable = pcVar7;
                                            lVar6 = SDL_GL_GetProcAddress("glFrontFace");
                                            if (lVar6 == 0) {
                                              fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glFrontFace","OpenGL");
                                              pglfn_glFrontFace = 0;
                                            }
                                            else {
                                              pglfn_glFrontFace = lVar6;
                                              lVar6 = SDL_GL_GetProcAddress("glGetIntegerv");
                                              if (lVar6 == 0) {
                                                fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGetIntegerv","OpenGL");
                                                pglfn_glGetIntegerv = 0;
                                              }
                                              else {
                                                pglfn_glGetIntegerv = lVar6;
                                                lVar6 = SDL_GL_GetProcAddress("glGetString");
                                                if (lVar6 == 0) {
                                                  fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGetString","OpenGL");
                                                  pglfn_glGetString = 0;
                                                }
                                                else {
                                                  pglfn_glGetString = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glGenTextures");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGenTextures","OpenGL");
                                                  pglfn_glGenTextures = 0;
                                                  }
                                                  else {
                                                    pglfn_glGenTextures = lVar6;
                                                    pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                               ("glPixelStorei");
                                                    if (pcVar7 == (code *)0x0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glPixelStorei","OpenGL");
                                                  pglfn_glPixelStorei = (code *)0x0;
                                                  }
                                                  else {
                                                    pglfn_glPixelStorei = pcVar7;
                                                    pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                               ("glPolygonMode");
                                                    if (pcVar7 == (code *)0x0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glPolygonMode","OpenGL");
                                                  pglfn_glPolygonMode = (code *)0x0;
                                                  }
                                                  else {
                                                    pglfn_glPolygonMode = pcVar7;
                                                    pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                               ("glScissor");
                                                    if (pcVar7 == (code *)0x0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glScissor","OpenGL");
                                                  pglfn_glScissor = (code *)0x0;
                                                  }
                                                  else {
                                                    pglfn_glScissor = pcVar7;
                                                    lVar6 = SDL_GL_GetProcAddress("glStencilFunc");
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glStencilFunc","OpenGL");
                                                  pglfn_glStencilFunc = 0;
                                                  }
                                                  else {
                                                    pglfn_glStencilFunc = lVar6;
                                                    lVar6 = SDL_GL_GetProcAddress("glStencilMask");
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glStencilMask","OpenGL");
                                                  pglfn_glStencilMask = 0;
                                                  }
                                                  else {
                                                    pglfn_glStencilMask = lVar6;
                                                    lVar6 = SDL_GL_GetProcAddress("glStencilOp");
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glStencilOp","OpenGL");
                                                  pglfn_glStencilOp = 0;
                                                  }
                                                  else {
                                                    pglfn_glStencilOp = lVar6;
                                                    lVar6 = SDL_GL_GetProcAddress("glTexEnvf");
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexEnvf","OpenGL");
                                                  pglfn_glTexEnvf = 0;
                                                  }
                                                  else {
                                                    pglfn_glTexEnvf = lVar6;
                                                    lVar6 = SDL_GL_GetProcAddress("glTexImage2D");
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexImage2D","OpenGL");
                                                  pglfn_glTexImage2D = 0;
                                                  }
                                                  else {
                                                    pglfn_glTexImage2D = lVar6;
                                                    lVar6 = SDL_GL_GetProcAddress("glTexParameteri")
                                                    ;
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexParameteri","OpenGL");
                                                  pglfn_glTexParameteri = 0;
                                                  }
                                                  else {
                                                    pglfn_glTexParameteri = lVar6;
                                                    lVar6 = SDL_GL_GetProcAddress("glTexParameterf")
                                                    ;
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexParameterf","OpenGL");
                                                  pglfn_glTexParameterf = 0;
                                                  }
                                                  else {
                                                    pglfn_glTexParameterf = lVar6;
                                                    lVar6 = SDL_GL_GetProcAddress("glTexSubImage2D")
                                                    ;
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexSubImage2D","OpenGL");
                                                  pglfn_glTexSubImage2D = 0;
                                                  }
                                                  else {
                                                    pglfn_glTexSubImage2D = lVar6;
                                                    pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                               ("glViewport");
                                                    bVar10 = pcVar7 == (code *)0x0;
                                                    if (bVar10) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glViewport","OpenGL");
                                                  pcVar7 = (code *)0x0;
                                                  }
                                                  have_GL_ARB_vertex_buffer_object = 0;
                                                  have_GL_EXT_framebuffer_object = 0;
                                                  have_GL_EXT_framebuffer_blit = 0;
                                                  pglfn_glViewport = pcVar7;
                                                  if (!bVar10) {
                                                    lVar6 = SDL_GL_GetProcAddress("glActiveTexture")
                                                    ;
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glActiveTexture","OpenGL");
                                                  pglfn_glActiveTexture = 0;
LAB_00560486:
                                                  pglfn_glAlphaFunc = 0;
LAB_00560491:
                                                  pglfn_glBindTexture = 0;
LAB_0056049c:
                                                  pglfn_glBlendEquation = 0;
LAB_005604a7:
                                                  pglfn_glBlendFunc = 0;
LAB_005604b2:
                                                  pglfn_glClear = (code *)0x0;
LAB_005604bd:
                                                  pglfn_glClearColor = (code *)0x0;
LAB_005604c8:
                                                  pglfn_glClearDepth = 0;
LAB_005604d3:
                                                  pglfn_glClearStencil = 0;
LAB_005604de:
                                                  pglfn_glColorMask = 0;
LAB_005604e9:
                                                  pglfn_glCompressedTexImage2D = 0;
LAB_005604f4:
                                                  pglfn_glCullFace = (code *)0x0;
LAB_005604ff:
                                                  pglfn_glDeleteTextures = 0;
LAB_0056050a:
                                                  pglfn_glDepthFunc = (code *)0x0;
LAB_00560515:
                                                  pglfn_glDepthMask = 0;
LAB_00560520:
                                                  pglfn_glDepthRange = 0;
LAB_005603c5:
                                                  pglfn_glDisable = (code *)0x0;
LAB_005603d0:
                                                  pglfn_glDrawArrays = 0;
LAB_005603db:
                                                  pglfn_glDrawElements = 0;
LAB_005603e6:
                                                  pglfn_glDrawBuffer = 0;
LAB_0055fdfd:
                                                  pglfn_glEnable = (code *)0x0;
LAB_0055fe08:
                                                  pglfn_glFrontFace = 0;
LAB_0055fe13:
                                                  pglfn_glGetIntegerv = 0;
LAB_0055fe1e:
                                                  pglfn_glGetString = 0;
LAB_0055fe29:
                                                  pglfn_glGenTextures = 0;
LAB_0055fe34:
                                                  pglfn_glPixelStorei = (code *)0x0;
LAB_0055fe3f:
                                                  pglfn_glPolygonMode = (code *)0x0;
LAB_0055fe4a:
                                                  pglfn_glScissor = (code *)0x0;
LAB_0055fe55:
                                                  pglfn_glStencilFunc = 0;
LAB_0055fe60:
                                                  pglfn_glStencilMask = 0;
LAB_0055fe6b:
                                                  pglfn_glStencilOp = 0;
LAB_0055fe76:
                                                  pglfn_glTexEnvf = 0;
LAB_0055fe81:
                                                  pglfn_glTexImage2D = 0;
LAB_0055fe8c:
                                                  pglfn_glTexParameteri = 0;
LAB_0055fe97:
                                                  pglfn_glTexParameterf = 0;
LAB_0055fea2:
                                                  pglfn_glTexSubImage2D = 0;
                                                  pcVar7 = (code *)0x0;
                                                  }
                                                  else {
                                                    pglfn_glActiveTexture = lVar6;
                                                    lVar6 = SDL_GL_GetProcAddress("glAlphaFunc");
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glAlphaFunc","OpenGL");
                                                  goto LAB_00560486;
                                                  }
                                                  pglfn_glAlphaFunc = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glBindTexture");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBindTexture","OpenGL");
                                                  goto LAB_00560491;
                                                  }
                                                  pglfn_glBindTexture = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glBlendEquation");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBlendEquation","OpenGL");
                                                  goto LAB_0056049c;
                                                  }
                                                  pglfn_glBlendEquation = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glBlendFunc");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBlendFunc","OpenGL");
                                                  goto LAB_005604a7;
                                                  }
                                                  pglfn_glBlendFunc = lVar6;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress("glClear");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glClear","OpenGL");
                                                  goto LAB_005604b2;
                                                  }
                                                  pglfn_glClear = pcVar7;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                             ("glClearColor");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glClearColor","OpenGL");
                                                  goto LAB_005604bd;
                                                  }
                                                  pglfn_glClearColor = pcVar7;
                                                  lVar6 = SDL_GL_GetProcAddress("glClearDepth");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glClearDepth","OpenGL");
                                                  goto LAB_005604c8;
                                                  }
                                                  pglfn_glClearDepth = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glClearStencil");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glClearStencil","OpenGL");
                                                  goto LAB_005604d3;
                                                  }
                                                  pglfn_glClearStencil = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glColorMask");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glColorMask","OpenGL");
                                                  goto LAB_005604de;
                                                  }
                                                  pglfn_glColorMask = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glCompressedTexImage2D");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glCompressedTexImage2D","OpenGL");
                                                  goto LAB_005604e9;
                                                  }
                                                  pglfn_glCompressedTexImage2D = lVar6;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                             ("glCullFace");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glCullFace","OpenGL");
                                                  goto LAB_005604f4;
                                                  }
                                                  pglfn_glCullFace = pcVar7;
                                                  lVar6 = SDL_GL_GetProcAddress("glDeleteTextures");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDeleteTextures","OpenGL");
                                                  goto LAB_005604ff;
                                                  }
                                                  pglfn_glDeleteTextures = lVar6;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                             ("glDepthFunc");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDepthFunc","OpenGL");
                                                  goto LAB_0056050a;
                                                  }
                                                  pglfn_glDepthFunc = pcVar7;
                                                  lVar6 = SDL_GL_GetProcAddress("glDepthMask");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDepthMask","OpenGL");
                                                  goto LAB_00560515;
                                                  }
                                                  pglfn_glDepthMask = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glDepthRange");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDepthRange","OpenGL");
                                                  goto LAB_00560520;
                                                  }
                                                  pglfn_glDepthRange = lVar6;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                             ("glDisable");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDisable","OpenGL");
                                                  goto LAB_005603c5;
                                                  }
                                                  pglfn_glDisable = pcVar7;
                                                  lVar6 = SDL_GL_GetProcAddress("glDrawArrays");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDrawArrays","OpenGL");
                                                  goto LAB_005603d0;
                                                  }
                                                  pglfn_glDrawArrays = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glDrawElements");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDrawElements","OpenGL");
                                                  goto LAB_005603db;
                                                  }
                                                  pglfn_glDrawElements = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glDrawBuffer");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDrawBuffer","OpenGL");
                                                  goto LAB_005603e6;
                                                  }
                                                  pglfn_glDrawBuffer = lVar6;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress("glEnable")
                                                  ;
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glEnable","OpenGL");
                                                  goto LAB_0055fdfd;
                                                  }
                                                  pglfn_glEnable = pcVar7;
                                                  lVar6 = SDL_GL_GetProcAddress("glFrontFace");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glFrontFace","OpenGL");
                                                  goto LAB_0055fe08;
                                                  }
                                                  pglfn_glFrontFace = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glGetIntegerv");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGetIntegerv","OpenGL");
                                                  goto LAB_0055fe13;
                                                  }
                                                  pglfn_glGetIntegerv = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glGetString");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGetString","OpenGL");
                                                  goto LAB_0055fe1e;
                                                  }
                                                  pglfn_glGetString = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glGenTextures");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGenTextures","OpenGL");
                                                  goto LAB_0055fe29;
                                                  }
                                                  pglfn_glGenTextures = lVar6;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                             ("glPixelStorei");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glPixelStorei","OpenGL");
                                                  goto LAB_0055fe34;
                                                  }
                                                  pglfn_glPixelStorei = pcVar7;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                             ("glPolygonMode");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glPolygonMode","OpenGL");
                                                  goto LAB_0055fe3f;
                                                  }
                                                  pglfn_glPolygonMode = pcVar7;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                             ("glScissor");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glScissor","OpenGL");
                                                  goto LAB_0055fe4a;
                                                  }
                                                  pglfn_glScissor = pcVar7;
                                                  lVar6 = SDL_GL_GetProcAddress("glStencilFunc");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glStencilFunc","OpenGL");
                                                  goto LAB_0055fe55;
                                                  }
                                                  pglfn_glStencilFunc = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glStencilMask");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glStencilMask","OpenGL");
                                                  goto LAB_0055fe60;
                                                  }
                                                  pglfn_glStencilMask = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glStencilOp");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glStencilOp","OpenGL");
                                                  goto LAB_0055fe6b;
                                                  }
                                                  pglfn_glStencilOp = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glTexEnvf");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexEnvf","OpenGL");
                                                  goto LAB_0055fe76;
                                                  }
                                                  pglfn_glTexEnvf = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glTexImage2D");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexImage2D","OpenGL");
                                                  goto LAB_0055fe81;
                                                  }
                                                  pglfn_glTexImage2D = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glTexParameteri");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexParameteri","OpenGL");
                                                  goto LAB_0055fe8c;
                                                  }
                                                  pglfn_glTexParameteri = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glTexParameterf");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexParameterf","OpenGL");
                                                  goto LAB_0055fe97;
                                                  }
                                                  pglfn_glTexParameterf = lVar6;
                                                  lVar6 = SDL_GL_GetProcAddress("glTexSubImage2D");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glTexSubImage2D","OpenGL");
                                                  goto LAB_0055fea2;
                                                  }
                                                  pglfn_glTexSubImage2D = lVar6;
                                                  pcVar7 = (code *)SDL_GL_GetProcAddress
                                                                             ("glViewport");
                                                  if (pcVar7 == (code *)0x0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glViewport","OpenGL");
                                                  pcVar7 = (code *)0x0;
                                                  }
                                                  }
                                                  pglfn_glViewport = pcVar7;
                                                  iVar5 = SDL_GL_ExtensionSupported
                                                                    ("GL_ARB_vertex_buffer_object");
                                                  have_GL_ARB_vertex_buffer_object = iVar5 != 0;
                                                  if ((bool)have_GL_ARB_vertex_buffer_object) {
                                                    lVar6 = SDL_GL_GetProcAddress("glBindBufferARB")
                                                    ;
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBindBufferARB","GL_ARB_vertex_buffer_object");
                                                  have_GL_ARB_vertex_buffer_object = false;
                                                  goto LAB_0055f6c4;
                                                  }
                                                  pglfn_glBindBufferARB = lVar6;
                                                  if (have_GL_ARB_vertex_buffer_object == '\0')
                                                  goto LAB_0055f6cf;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glDeleteBuffersARB");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDeleteBuffersARB","GL_ARB_vertex_buffer_object"
                                                  );
                                                  have_GL_ARB_vertex_buffer_object = '\0';
                                                  goto LAB_0055f6cf;
                                                  }
                                                  pglfn_glDeleteBuffersARB = lVar6;
                                                  if (have_GL_ARB_vertex_buffer_object == '\0')
                                                  goto LAB_0055f6da;
                                                  lVar6 = SDL_GL_GetProcAddress("glGenBuffersARB");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGenBuffersARB","GL_ARB_vertex_buffer_object");
                                                  have_GL_ARB_vertex_buffer_object = '\0';
                                                  goto LAB_0055f6da;
                                                  }
                                                  pglfn_glGenBuffersARB = lVar6;
                                                  if (have_GL_ARB_vertex_buffer_object == '\0')
                                                  goto LAB_0055f6e5;
                                                  lVar6 = SDL_GL_GetProcAddress("glBufferDataARB");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBufferDataARB","GL_ARB_vertex_buffer_object");
                                                  have_GL_ARB_vertex_buffer_object = '\0';
                                                  goto LAB_0055f6e5;
                                                  }
                                                  pglfn_glBufferDataARB = lVar6;
                                                  if (have_GL_ARB_vertex_buffer_object == '\0')
                                                  goto LAB_0055f6f0;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glBufferSubDataARB");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBufferSubDataARB","GL_ARB_vertex_buffer_object"
                                                  );
                                                  have_GL_ARB_vertex_buffer_object = '\0';
                                                  goto LAB_0055f6f0;
                                                  }
                                                  pglfn_glBufferSubDataARB = lVar6;
                                                  if (have_GL_ARB_vertex_buffer_object == '\0')
                                                  goto LAB_0055f6fb;
                                                  lVar6 = SDL_GL_GetProcAddress("glMapBufferARB");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glMapBufferARB","GL_ARB_vertex_buffer_object");
                                                  have_GL_ARB_vertex_buffer_object = '\0';
                                                  goto LAB_0055f6fb;
                                                  }
                                                  pglfn_glMapBufferARB = lVar6;
                                                  if (have_GL_ARB_vertex_buffer_object == '\0') {
LAB_00560252:
                                                    lVar6 = 0;
                                                  }
                                                  else {
                                                    lVar6 = SDL_GL_GetProcAddress
                                                                      ("glUnmapBufferARB");
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glUnmapBufferARB","GL_ARB_vertex_buffer_object");
                                                  have_GL_ARB_vertex_buffer_object = '\0';
                                                  goto LAB_00560252;
                                                  }
                                                  }
                                                  }
                                                  else {
LAB_0055f6c4:
                                                    pglfn_glBindBufferARB = 0;
LAB_0055f6cf:
                                                    pglfn_glDeleteBuffersARB = 0;
LAB_0055f6da:
                                                    pglfn_glGenBuffersARB = 0;
LAB_0055f6e5:
                                                    pglfn_glBufferDataARB = 0;
LAB_0055f6f0:
                                                    pglfn_glBufferSubDataARB = 0;
LAB_0055f6fb:
                                                    pglfn_glMapBufferARB = 0;
                                                    lVar6 = 0;
                                                  }
                                                  pglfn_glUnmapBufferARB = lVar6;
                                                  iVar5 = SDL_GL_ExtensionSupported
                                                                    ("GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = iVar5 != 0;
                                                  if ((bool)have_GL_EXT_framebuffer_object) {
                                                    lVar6 = SDL_GL_GetProcAddress
                                                                      ("glBindRenderbufferEXT");
                                                    if (lVar6 == 0) {
                                                      fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBindRenderbufferEXT",
                                                  "GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = false;
                                                  goto LAB_0055f634;
                                                  }
                                                  pglfn_glBindRenderbufferEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0')
                                                  goto LAB_0055f63f;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glDeleteRenderbuffersEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDeleteRenderbuffersEXT",
                                                  "GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0055f63f;
                                                  }
                                                  pglfn_glDeleteRenderbuffersEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0')
                                                  goto LAB_0055f64a;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glGenRenderbuffersEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGenRenderbuffersEXT",
                                                  "GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0055f64a;
                                                  }
                                                  pglfn_glGenRenderbuffersEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0')
                                                  goto LAB_0055f655;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glRenderbufferStorageEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glRenderbufferStorageEXT",
                                                  "GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0055f655;
                                                  }
                                                  pglfn_glRenderbufferStorageEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0')
                                                  goto LAB_0055f660;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glBindFramebufferEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBindFramebufferEXT","GL_EXT_framebuffer_object"
                                                  );
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0055f660;
                                                  }
                                                  pglfn_glBindFramebufferEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0')
                                                  goto LAB_0055f66b;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glDeleteFramebuffersEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glDeleteFramebuffersEXT",
                                                  "GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0055f66b;
                                                  }
                                                  pglfn_glDeleteFramebuffersEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0')
                                                  goto LAB_0055f676;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glGenFramebuffersEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glGenFramebuffersEXT","GL_EXT_framebuffer_object"
                                                  );
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0055f676;
                                                  }
                                                  pglfn_glGenFramebuffersEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0')
                                                  goto LAB_0055f681;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glCheckFramebufferStatusEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glCheckFramebufferStatusEXT",
                                                  "GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0055f681;
                                                  }
                                                  pglfn_glCheckFramebufferStatusEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0')
                                                  goto LAB_0055f68c;
                                                  lVar6 = SDL_GL_GetProcAddress
                                                                    ("glFramebufferTexture2DEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glFramebufferTexture2DEXT",
                                                  "GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0055f68c;
                                                  }
                                                  pglfn_glFramebufferTexture2DEXT = lVar6;
                                                  if (have_GL_EXT_framebuffer_object == '\0') {
LAB_0056036a:
                                                    lVar6 = 0;
                                                  }
                                                  else {
                                                    lVar6 = SDL_GL_GetProcAddress
                                                                      (
                                                  "glFramebufferRenderbufferEXT");
                                                  if (lVar6 == 0) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glFramebufferRenderbufferEXT",
                                                  "GL_EXT_framebuffer_object");
                                                  have_GL_EXT_framebuffer_object = '\0';
                                                  goto LAB_0056036a;
                                                  }
                                                  }
                                                  }
                                                  else {
LAB_0055f634:
                                                    pglfn_glBindRenderbufferEXT = 0;
LAB_0055f63f:
                                                    pglfn_glDeleteRenderbuffersEXT = 0;
LAB_0055f64a:
                                                    pglfn_glGenRenderbuffersEXT = 0;
LAB_0055f655:
                                                    pglfn_glRenderbufferStorageEXT = 0;
LAB_0055f660:
                                                    pglfn_glBindFramebufferEXT = 0;
LAB_0055f66b:
                                                    pglfn_glDeleteFramebuffersEXT = 0;
LAB_0055f676:
                                                    pglfn_glGenFramebuffersEXT = 0;
LAB_0055f681:
                                                    pglfn_glCheckFramebufferStatusEXT = 0;
LAB_0055f68c:
                                                    pglfn_glFramebufferTexture2DEXT = 0;
                                                    lVar6 = 0;
                                                  }
                                                  pglfn_glFramebufferRenderbufferEXT = lVar6;
                                                  iVar5 = SDL_GL_ExtensionSupported
                                                                    ("GL_EXT_framebuffer_blit");
                                                  have_GL_EXT_framebuffer_blit = iVar5 != 0;
                                                  lVar6 = 0;
                                                  if (((bool)have_GL_EXT_framebuffer_blit) &&
                                                     (lVar6 = SDL_GL_GetProcAddress
                                                                        ("glBlitFramebufferEXT"),
                                                     lVar6 == 0)) {
                                                    fprintf(stderr,
                                                  "Missing OpenGL entry point \'%s\' for \'%s\'\n",
                                                  "glBlitFramebufferEXT","GL_EXT_framebuffer_blit");
                                                  have_GL_EXT_framebuffer_blit = '\0';
                                                  lVar6 = 0;
                                                  }
                                                  pglfn_glBlitFramebufferEXT = lVar6;
                                                  if ((have_GL_EXT_framebuffer_object != '\0') &&
                                                     (have_GL_ARB_vertex_buffer_object != '\0')) {
                                                    (*pglfn_glClearColor)(0,0,0);
                                                    (*pglfn_glClear)(0x4000);
                                                    SDL_GL_SwapWindow(*(uint64_t *)self);
                                                    (*pglfn_glClear)(0x4000);
                                                    SDL_GL_SwapWindow(*(uint64_t *)self);
                                                    (*pglfn_glClear)(0x4000);
                                                    SDL_GL_SwapWindow(*(uint64_t *)self);
                                                    SDL_GL_SetSwapInterval(1);
                                                    (*pglfn_glPixelStorei)(0xd05,1);
                                                    (*pglfn_glPixelStorei)(0xcf5,1);
                                                    DestroyBackbuffer(self);
                                                    SDL_GL_GetDrawableSize
                                                              (*(uint64_t *)self,local_38,local_28
                                                              );
                                                    plVar4 = Window;
                                                    if (have_GL_EXT_framebuffer_blit == '\0') {
                                                      *(short *)(Window + 1) = (short)local_38[0];
                                                      uVar9 = local_38[0] & 0xffff;
                                                      *(short *)((long)plVar4 + 10) =
                                                           (short)local_28[0];
                                                      uVar8 = local_28[0] & 0xffff;
                                                    }
                                                    else {
                                                      uVar9 = (uint)*(ushort *)(Window + 1);
                                                      if ((*(ushort *)(Window + 1) != local_38[0])
                                                         || (uVar8 = (uint)*(ushort *)
                                                                            ((long)Window + 10),
                                                            *(ushort *)((long)Window + 10) !=
                                                            local_28[0])) {
                                                        PrepBackbuffer(self);
                                                        uVar8 = (uint)*(ushort *)((long)Window + 10)
                                                        ;
                                                        uVar9 = (uint)*(ushort *)(Window + 1);
                                                      }
                                                    }
                                                    (*pglfn_glViewport)(0,0,uVar9,uVar8);
                                                    (*pglfn_glScissor)(0,0,(short)Window[1],
                                                                       *(uint16_t *)
                                                                        ((long)Window + 10));
                                                    (*pglfn_glPolygonMode)(0x408,0x1b02);
                                                    (*pglfn_glCullFace)(0x405);
                                                    shaderContext = 0;
                                                    __s2 = (char *)MOJOSHADER_glBestProfile
                                                                             (MojoShaderGetProcAddr,
                                                                              0);
                                                    if (__s2 == (char *)0x0) {
                                                      Error__ThrowFatalError
                                                                (
                                                  "Could not find a supported MojoShader profile");
                                                  }
                                                  pcVar3 = GMojoShaderProfile;
                                                  if ((GMojoShaderProfile != (char *)0x0) &&
                                                     (iVar5 = strcmp(GMojoShaderProfile,__s2),
                                                     iVar5 != 0)) {
                                                    shaderContext =
                                                         MOJOSHADER_glCreateContext
                                                                   (pcVar3,MojoShaderGetProcAddr,0,
                                                                    MojoShaderMalloc,MojoShaderFree,
                                                                    0);
                                                  }
                                                  if ((shaderContext == 0) &&
                                                     (shaderContext =
                                                           MOJOSHADER_glCreateContext
                                                                     (__s2,MojoShaderGetProcAddr,0,
                                                                      MojoShaderMalloc,
                                                                      MojoShaderFree,0),
                                                     shaderContext == 0)) {
                                                    Error__ThrowFatalError
                                                              (
                                                  "Could not create the MojoShader context");
                                                  }
                                                  MOJOSHADER_glMakeContextCurrent(shaderContext);
                                                  (*pglfn_glEnable)(0xde1);
                                                  (*pglfn_glDisable)(0xb71);
                                                  (*pglfn_glDepthFunc)(0x207);
                                                  (*pglfn_glDisable)(0xbc0);
                                                  (*pglfn_glDisable)(0xb90);
                                                  (*pglfn_glDisable)(0xb57);
                                                  (*pglfn_glEnable)(0xbe2);
                                                  local_68 = 0xbf800000;
                                                  local_64 = 0x3f800000;
                                                  local_60 = 0x3f800000;
                                                  local_5c = 0;
                                                  local_58 = 0;
                                                  local_54 = 0;
                                                  local_50 = 0x3f800000;
                                                  local_4c = 0xb33bbd2e;
                                                  local_48 = 0;
                                                  local_44 = 0;
                                                  local_40 = 0;
                                                  local_3c = 0;
                                                  Matrix4x4__Transformation3D
                                                            ((Matrix4x4 *)matRenderTargetRotation,
                                                             (FPUVector *)&local_68,
                                                             (TQuaternion *)&local_58,
                                                             (FPUVector *)&local_48);
                                                  strGraphicsDriverName = "OpenGL";
                                                  dwMonitorRefreshRate = 0x3c;
                                                  iVar5 = SDL_GetWindowDisplayMode
                                                                    (*(uint64_t *)self,&local_88);
                                                  fVar2 = DAT_005be894 /* R:1.0f */;
                                                  if ((iVar5 != -1) && (0xf < (int)local_7c)) {
                                                    dwMonitorRefreshRate = local_7c;
                                                  }
                                                  GLGraphics = self;
                                                  *(uint32_t *)(Graphics + 0x45c) = 1;
                                                  fOneFrameTimeStepVSync =
                                                       fVar2 / ((float)dwMonitorRefreshRate -
                                                               DAT_005c07b0 /* R:0.009999999776482582f */);
                                                  fOneFrameTimeStep = fOneFrameTimeStepVSync;
                                                  TResourceCreator__AddResourceCreationFunction
                                                            ((TResourceCreator *)ResourceCreator,
                                                             CreateEngineShaders,(void *)0x0);
                                                  CreateEngineShaders();
                                                  _GFXResetParams._8_4_ =
                                                       *(uint32_t *)((long)Window + 0xc);
                                                  _GFXResetParams._4_4_ =
                                                       (uint)*(ushort *)((long)Window + 10);
                                                  _GFXResetParams._0_4_ =
                                                       (uint)*(ushort *)(Window + 1);
                                                  return;
                                                  }
                                                  std__string_string((string *)&local_88,
                                                                                                                                            
                                                  "Missing required OpenGL extensions:\n",local_1a);
                                                  if (have_GL_ARB_vertex_buffer_object == '\0') {
                                                    std__string_append((char *)&local_88,0x5d50f0);
                                                  }
                                                  if (have_GL_EXT_framebuffer_object == '\0') {
                    /* try { // try from 0055f5e5 to 0055f601 has its CatchHandler @ 005608cc */
                                                    std__string_append((char *)&local_88,0x5d5004);
                                                  }
                    /* try { // try from 0055f1bd to 0055f1e5 has its CatchHandler @ 005608cc */
                                                  fprintf(stderr,"ERROR: %s\n",local_88);
                                                  SDL_HideWindow(*Window);
                                                  SDL_ShowSimpleMessageBox(0x10,"ERROR",local_88,0);
                                                  if ((allocator *)(local_88 + -0x18) !=
                                                      (allocator *)
                                                      &std__string_Rep_S_empty_rep_storage) {
                                                    LOCK();
                                                    piVar1 = (int *)(local_88 + -8);
                                                    iVar5 = *piVar1;
                                                    *piVar1 = *piVar1 + -1;
                                                    UNLOCK();
                                                    if (iVar5 < 1) {
                                                      std__string_Rep_M_destroy
                                                                ((allocator *)(local_88 + -0x18));
                                                    }
                                                  }
                                                  goto LAB_0055f1fb;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  have_GL_EXT_framebuffer_object = '\0';
  have_GL_ARB_vertex_buffer_object = '\0';
  have_GL_EXT_framebuffer_blit = '\0';
  fprintf(stderr,"ERROR: %s\n","Missing required core OpenGL functions");
  SDL_HideWindow(*Window);
  SDL_ShowSimpleMessageBox(0x10,"ERROR","Missing required core OpenGL functions",0);
LAB_0055f1fb:
                    /* WARNING: Subroutine does not return */
  exit(1);
}

/* ======================================================================
 * OpenGLGraphics__OpenGLGraphics__005608f0  (Ghidra `~OpenGLGraphics` @ 005608f0)
 * Signature: uint8_t __thiscall ~OpenGLGraphics(OpenGLGraphics * self)
 * Class: OpenGLGraphics
 * Calls: `MOJOSHADER_glDestroyContext`, `SDL_GL_DeleteContext`
 * Called by: `TGraphics__TGraphics__00588560`, `gfxDestroyRenderDevice`
 */
/* OpenGLGraphics__OpenGLGraphics__005608f0() */

void __thiscall OpenGLGraphics__OpenGLGraphics__005608f0(OpenGLGraphics *self)

{
  MOJOSHADER_glDestroyContext(shaderContext);
  shaderContext = 0;
  SDL_GL_DeleteContext(*(uint64_t *)(self + 8));
  pglfn_glActiveTexture = 0;
  pglfn_glAlphaFunc = 0;
  pglfn_glBindTexture = 0;
  pglfn_glBlendEquation = 0;
  pglfn_glBlendFunc = 0;
  pglfn_glClear = 0;
  pglfn_glClearColor = 0;
  pglfn_glClearDepth = 0;
  pglfn_glClearStencil = 0;
  pglfn_glColorMask = 0;
  pglfn_glCompressedTexImage2D = 0;
  pglfn_glCullFace = 0;
  pglfn_glDeleteTextures = 0;
  pglfn_glDepthFunc = 0;
  pglfn_glDepthMask = 0;
  pglfn_glDepthRange = 0;
  pglfn_glDisable = 0;
  pglfn_glDrawArrays = 0;
  pglfn_glDrawElements = 0;
  pglfn_glDrawBuffer = 0;
  pglfn_glEnable = 0;
  pglfn_glFrontFace = 0;
  pglfn_glGetIntegerv = 0;
  pglfn_glGetString = 0;
  pglfn_glGenTextures = 0;
  pglfn_glPixelStorei = 0;
  pglfn_glPolygonMode = 0;
  pglfn_glScissor = 0;
  pglfn_glStencilFunc = 0;
  pglfn_glStencilMask = 0;
  pglfn_glStencilOp = 0;
  pglfn_glTexEnvf = 0;
  pglfn_glTexImage2D = 0;
  pglfn_glTexParameteri = 0;
  pglfn_glTexParameterf = 0;
  pglfn_glTexSubImage2D = 0;
  pglfn_glViewport = 0;
  have_GL_ARB_vertex_buffer_object = 0;
  pglfn_glBindBufferARB = 0;
  pglfn_glDeleteBuffersARB = 0;
  pglfn_glGenBuffersARB = 0;
  pglfn_glBufferDataARB = 0;
  pglfn_glBufferSubDataARB = 0;
  pglfn_glMapBufferARB = 0;
  pglfn_glUnmapBufferARB = 0;
  have_GL_EXT_framebuffer_object = 0;
  pglfn_glBindRenderbufferEXT = 0;
  pglfn_glDeleteRenderbuffersEXT = 0;
  pglfn_glGenRenderbuffersEXT = 0;
  pglfn_glRenderbufferStorageEXT = 0;
  pglfn_glBindFramebufferEXT = 0;
  pglfn_glDeleteFramebuffersEXT = 0;
  pglfn_glGenFramebuffersEXT = 0;
  pglfn_glCheckFramebufferStatusEXT = 0;
  pglfn_glFramebufferTexture2DEXT = 0;
  pglfn_glFramebufferRenderbufferEXT = 0;
  have_GL_EXT_framebuffer_blit = 0;
  pglfn_glBlitFramebufferEXT = 0;
  return;
}
