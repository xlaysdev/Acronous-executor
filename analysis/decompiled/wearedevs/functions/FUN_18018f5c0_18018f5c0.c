/* FUN_18018f5c0 @ 18018f5c0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18018f5c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uStackY_8140;
  undefined8 auStackY_8134 [2];
  undefined8 uStackY_8120;
  undefined8 auStackY_8114 [2];
  undefined8 uStackY_8100;
  undefined8 auStackY_80f4 [2];
  undefined8 uStackY_80e0;
  undefined8 auStackY_80d4 [2];
  undefined8 uStackY_80c0;
  undefined8 auStackY_80b4 [2];
  undefined *puStackY_80a0;
  undefined8 auStackY_8094 [2];
  undefined8 uStackY_8080;
  undefined1 auStack_8074 [4];
  undefined8 uStack_806c;
  _OVERLAPPED_ENTRY local_8060 [1024];
  ulonglong local_60;
  ulonglong local_58 [4];
  
  local_58[1] = 0xfffffffffffffffe;
  while( true ) {
    lVar4 = 0xe0;
    do {
      *(undefined8 *)((longlong)auStackY_8134 + lVar4) = 0;
      *(undefined8 *)((longlong)auStackY_8134 + lVar4 + 8) = 0;
      *(undefined8 *)((longlong)auStackY_8134 + lVar4 + -0xc) = 0;
      *(undefined8 *)((longlong)auStackY_8134 + lVar4 + -4) = 0;
      *(undefined8 *)((longlong)auStackY_8134 + lVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)auStackY_8114 + lVar4 + -4) = 0;
      *(undefined8 *)((longlong)auStackY_8114 + lVar4) = 0;
      *(undefined8 *)((longlong)auStackY_8114 + lVar4 + 8) = 0;
      *(undefined8 *)((longlong)auStackY_8114 + lVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)auStackY_80f4 + lVar4 + -4) = 0;
      *(undefined8 *)((longlong)auStackY_80f4 + lVar4) = 0;
      *(undefined8 *)((longlong)auStackY_80f4 + lVar4 + 8) = 0;
      *(undefined8 *)((longlong)auStackY_80f4 + lVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)auStackY_80d4 + lVar4 + -4) = 0;
      *(undefined8 *)((longlong)auStackY_80d4 + lVar4) = 0;
      *(undefined8 *)((longlong)auStackY_80d4 + lVar4 + 8) = 0;
      *(undefined8 *)((longlong)auStackY_80d4 + lVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)auStackY_80b4 + lVar4 + -4) = 0;
      *(undefined8 *)((longlong)auStackY_80b4 + lVar4) = 0;
      *(undefined8 *)((longlong)auStackY_80b4 + lVar4 + 8) = 0;
      *(undefined8 *)((longlong)auStackY_80b4 + lVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)auStackY_8094 + lVar4 + -4) = 0;
      *(undefined8 *)((longlong)auStackY_8094 + lVar4) = 0;
      *(undefined8 *)((longlong)auStackY_8094 + lVar4 + 8) = 0;
      *(undefined8 *)((longlong)auStackY_8094 + lVar4 + 0x14) = 0;
      *(undefined8 *)(auStack_8074 + lVar4 + -4) = 0;
      *(undefined8 *)(auStack_8074 + lVar4) = 0;
      *(undefined8 *)(auStack_8074 + lVar4 + 8) = 0;
      *(undefined8 *)((longlong)&local_8060[0].lpOverlapped + lVar4 + 4) = 0;
      *(undefined8 *)((longlong)&local_8060[0].Internal + lVar4 + 4) = 0;
      *(undefined8 *)((longlong)&local_8060[0].lpCompletionKey + lVar4) = 0;
      *(undefined8 *)((longlong)&local_8060[0].lpOverlapped + lVar4) = 0;
      lVar4 = lVar4 + 0x100;
    } while (lVar4 != 0x80e0);
    local_58[0] = local_58[0] & 0xffffffff00000000;
    puStackY_80a0 = (undefined *)0x18018f6df;
    BVar3 = GetQueuedCompletionStatusEx
                      (*(HANDLE *)(*param_1 + 0x10),local_8060,0x400,(PULONG)local_58,0,0);
    if (BVar3 == 0) break;
    uVar6 = local_58[0] & 0xffffffff;
    if (0x400 < uVar6) {
                    /* WARNING: Subroutine does not return */
      puStackY_80a0 = &UNK_18018f793;
      FUN_180201a30(0,uVar6,0x400,&DAT_180266398);
    }
    if ((int)local_58[0] == 0) goto LAB_18018f75a;
    lVar4 = 0;
    local_60 = uVar6;
    do {
      lVar2 = *(longlong *)((longlong)&local_8060[0].lpOverlapped + lVar4);
      if (lVar2 != 0) {
        pbVar5 = (byte *)((longlong)&local_8060[0].lpCompletionKey + lVar4);
        if ((*pbVar5 & 1) == 0) {
          local_58[0] = lVar2 - 0x10;
          LOCK();
          plVar1 = (longlong *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            puStackY_80a0 = (undefined *)0x18018f753;
            FUN_180187b30(local_58);
          }
        }
        else {
          puStackY_80a0 = (undefined *)0x18018f715;
          (**(code **)(lVar2 + 0x20))(pbVar5,0);
        }
      }
      lVar4 = lVar4 + 0x20;
    } while (uVar6 * 0x20 != lVar4);
    puStackY_80a0 = (undefined *)0x18018f61f;
    FUN_18018efd0(local_8060,local_60);
  }
  puStackY_80a0 = (undefined *)0x18018f75a;
  GetLastError();
LAB_18018f75a:
  puStackY_80a0 = (undefined *)0x18018f766;
  FUN_18018e110(param_1 + 1);
  return;
}


