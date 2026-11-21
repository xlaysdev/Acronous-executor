/* FUN_180200460 @ 180200460 */

void FUN_180200460(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint local_2c;
  
  uVar4 = *param_1;
  if (uVar4 == 0x3fffffff) {
    iVar3 = -99;
    do {
      uVar4 = *param_1;
      if (uVar4 != 0x3fffffff) break;
      bVar5 = iVar3 != 0;
      iVar3 = iVar3 + 1;
    } while (bVar5);
  }
  bVar5 = false;
LAB_1802004b7:
  if (!bVar5) {
    do {
      if (uVar4 < 0x40000000 && (uVar4 & 0x3fffffff) < 0x3ffffffe) {
        LOCK();
        uVar2 = *param_1;
        bVar5 = uVar4 == uVar2;
        if (bVar5) {
          *param_1 = uVar4 + 1;
        }
        else {
          uVar4 = uVar2;
        }
        UNLOCK();
        uVar2 = uVar4;
        if (bVar5) {
          return;
        }
      }
      else {
        if ((uVar4 & 0x3fffffff) == 0x3ffffffe) goto LAB_18020060b;
        if ((uVar4 & 0x40000000) != 0) goto LAB_1802005a2;
        LOCK();
        uVar1 = *param_1;
        if (uVar4 == uVar1) {
          *param_1 = uVar4 | 0x40000000;
          uVar2 = uVar4;
        }
        else {
          uVar2 = uVar1;
        }
        UNLOCK();
        if (uVar4 == uVar1) goto LAB_1802005a2;
      }
      uVar4 = uVar2;
    } while( true );
  }
  do {
    uVar2 = uVar4 & 0x3fffffff;
    if (((uVar4 & 0x40000000) == 0 && 0xc0000002 < uVar2 + 0xc0000002) ||
       (uVar2 < 0x3ffffffe && uVar4 < 0x40000000)) {
      LOCK();
      uVar2 = *param_1;
      bVar5 = uVar4 == uVar2;
      if (bVar5) {
        *param_1 = uVar4 + 1;
      }
      else {
        uVar4 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar4;
      if (bVar5) {
        return;
      }
    }
    else {
      if (uVar2 == 0x3ffffffe) {
LAB_18020060b:
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0("too many active read locks on RwLocklibrary\\std\\src\\sys\\sync\\rwlock\\futex.rs"
                      ,0x49,&DAT_18028fbc8);
      }
      if ((uVar4 & 0x40000000) != 0) break;
      LOCK();
      uVar1 = *param_1;
      if (uVar4 == uVar1) {
        *param_1 = uVar4 | 0x40000000;
        uVar2 = uVar4;
      }
      else {
        uVar2 = uVar1;
      }
      UNLOCK();
      if (uVar4 == uVar1) break;
    }
    uVar4 = uVar2;
  } while( true );
LAB_1802005a2:
  local_2c = uVar4 | 0x40000000;
  iVar3 = WaitOnAddress(param_1,&local_2c,4,0xffffffff);
  if (iVar3 != 1) {
    GetLastError();
  }
  uVar4 = *param_1;
  bVar5 = true;
  if (uVar4 == 0x3fffffff) {
    iVar3 = -99;
    do {
      uVar4 = *param_1;
      if (uVar4 != 0x3fffffff) break;
      bVar6 = iVar3 != 0;
      iVar3 = iVar3 + 1;
    } while (bVar6);
  }
  goto LAB_1802004b7;
}


