/* FUN_1801f5c10 @ 1801f5c10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1801f5c10(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  cVar3 = FUN_1801f62a0(0);
  if (cVar3 != '\0') {
    uVar4 = FUN_1801f6090();
    bVar2 = true;
    if (DAT_1802fd8b0 != 0) {
      FUN_1801f63f0(7);
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    DAT_1802fd8b0 = 1;
    cVar3 = FUN_1801f6120();
    if (cVar3 != '\0') {
      FUN_1801f6400();
      FUN_1801f6030();
      FUN_1801f6070();
      iVar5 = _initterm_e(&DAT_180202670,&DAT_180202678);
      if (iVar5 == 0) {
        cVar3 = FUN_1801f60e0();
        if (cVar3 != '\0') {
          _initterm(&DAT_180202660,&DAT_180202668);
          DAT_1802fd8b0 = 2;
          bVar2 = false;
        }
      }
    }
    FUN_1801f6380(uVar4);
    if (!bVar2) {
      plVar6 = (longlong *)FUN_1801f63e0();
      if (*plVar6 != 0) {
        cVar3 = FUN_1801f62e0(plVar6);
        if (cVar3 != '\0') {
          (*(code *)*plVar6)(param_1,2,param_2);
        }
      }
      DAT_1802fd880 = DAT_1802fd880 + 1;
      return 1;
    }
  }
  return 0;
}


