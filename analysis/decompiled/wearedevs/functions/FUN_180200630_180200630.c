/* FUN_180200630 @ 180200630 */

void FUN_180200630(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_3c;
  
  uVar2 = *param_1;
  if (-1 < (int)uVar2 && (uVar2 & 0x3fffffff) != 0) {
    iVar3 = -99;
    do {
      uVar2 = *param_1;
      if (((int)uVar2 < 0) || ((uVar2 & 0x3fffffff) == 0)) break;
      bVar5 = iVar3 != 0;
      iVar3 = iVar3 + 1;
    } while (bVar5);
  }
  uVar4 = 0x3fffffff;
LAB_1802006af:
  while ((uVar2 & 0x3fffffff) == 0) {
    LOCK();
    uVar1 = *param_1;
    bVar5 = uVar2 == uVar1;
    if (bVar5) {
      *param_1 = uVar2 | uVar4;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
    if (bVar5) {
      return;
    }
  }
  if (-1 < (int)uVar2) goto code_r0x0001802006ba;
  goto LAB_1802006c8;
code_r0x0001802006ba:
  LOCK();
  uVar1 = *param_1;
  bVar5 = uVar2 == uVar1;
  if (bVar5) {
    *param_1 = uVar2 | 0x80000000;
  }
  else {
    uVar2 = uVar1;
  }
  UNLOCK();
  if (bVar5) {
LAB_1802006c8:
    local_3c = param_1[1];
    uVar2 = *param_1;
    uVar4 = 0xbfffffff;
    if ((int)uVar2 < 0 && (uVar2 & 0x3fffffff) != 0) {
      iVar3 = WaitOnAddress(param_1 + 1,&local_3c,4,0xffffffff);
      if (iVar3 != 1) {
        GetLastError();
      }
      uVar2 = *param_1;
      if (-1 < (int)uVar2 && (uVar2 & 0x3fffffff) != 0) {
        iVar3 = -99;
        do {
          uVar2 = *param_1;
          if (((int)uVar2 < 0) || ((uVar2 & 0x3fffffff) == 0)) break;
          bVar5 = iVar3 != 0;
          iVar3 = iVar3 + 1;
        } while (bVar5);
      }
    }
  }
  goto LAB_1802006af;
}


