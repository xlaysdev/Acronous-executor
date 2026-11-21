/* FUN_1801fe2e0 @ 1801fe2e0 */

void FUN_1801fe2e0(longlong param_1,code *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  ulonglong uVar7;
  code *pcVar8;
  code *pcVar9;
  bool bVar10;
  longlong local_68;
  code *local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pcVar9 = param_2;
  do {
    while( true ) {
      if (*(longlong *)param_2 == 3) {
        return;
      }
      pcVar6 = (code *)FUN_1801c69f0(param_1 + 0x118);
      if (pcVar6 != (code *)0x0) break;
      do {
        pcVar9 = (code *)(param_1 + 0x138);
        FUN_1801c6e10(&local_68,(code *)(param_1 + 0x138));
      } while (local_68 == 2);
      if (local_68 == 0) {
        pcVar6 = (code *)0x0;
        break;
      }
      pcVar9 = (code *)CONCAT44(uStack_54,local_58);
      pcVar6 = local_60;
      pcVar8 = pcVar9;
      if (local_60 == (code *)0x0) goto LAB_1801fe365;
LAB_1801fe320:
      (*pcVar6)(pcVar9);
    }
    pcVar8 = pcVar9;
    if (pcVar6 != (code *)0x0) goto LAB_1801fe320;
LAB_1801fe365:
    local_68 = *(longlong *)(param_1 + 0x100);
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x110) + 0x1f0);
    *plVar1 = *plVar1 + 0x10000;
    UNLOCK();
    local_58 = 0;
    local_60 = (code *)0xffffffffffffffff;
    while( true ) {
      if (*(longlong *)param_2 == 3) {
        lVar3 = *(longlong *)(param_1 + 0x110);
        LOCK();
        puVar2 = (ulonglong *)(lVar3 + 0x1f0);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x10000;
        UNLOCK();
        uVar7 = 2;
        if ((uVar4 & 0xffff) < 2) {
          uVar7 = uVar4 & 0xffff;
        }
        FUN_1801fdf00(lVar3 + 0x1d8,uVar7);
        return;
      }
      pcVar6 = (code *)FUN_1801c2bd0(param_1);
      uVar5 = local_58;
      lVar3 = *(longlong *)(param_1 + 0x110);
      if (pcVar6 != (code *)0x0) break;
      if (local_58 < 0x20) {
        SwitchToThread();
        local_58 = uVar5 + 1;
      }
      else if (local_58 == 0x20) {
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0x1f0);
          if ((uVar4 >> 0x20 & 1) == 0) {
            uVar7 = uVar4;
            break;
          }
          uVar7 = uVar4 + 0x100000000;
          LOCK();
          bVar10 = uVar4 == *(ulonglong *)(lVar3 + 0x1f0);
          if (bVar10) {
            *(ulonglong *)(lVar3 + 0x1f0) = uVar7;
          }
          UNLOCK();
        } while (!bVar10);
        pcVar8 = (code *)(uVar7 >> 0x20);
        local_58 = 0x21;
        local_60 = pcVar8;
        SwitchToThread();
      }
      else {
        pcVar8 = (code *)&local_68;
        FUN_1801fdf50(lVar3 + 0x1d8,&local_68,param_2,param_1);
      }
    }
    LOCK();
    puVar2 = (ulonglong *)(lVar3 + 0x1f0);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 0x10000;
    UNLOCK();
    pcVar9 = (code *)(uVar4 & 0xffff);
    if ((code *)0x1 < pcVar9) {
      pcVar9 = (code *)0x2;
    }
    FUN_1801fdf00(lVar3 + 0x1d8);
    (*pcVar6)(pcVar8);
  } while( true );
}


