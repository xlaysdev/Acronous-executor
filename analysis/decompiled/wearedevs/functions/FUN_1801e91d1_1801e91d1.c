/* FUN_1801e91d1 @ 1801e91d1 */

ulonglong FUN_1801e91d1(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  undefined7 uVar8;
  longlong *local_40;
  byte local_38;
  undefined7 uStack_37;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar4 = FUN_1801edcb0("?",1);
      return uVar4;
    }
  }
  else {
    plVar7 = param_1;
    FUN_1801e6eaa(&local_40);
    plVar1 = local_40;
    uVar8 = (undefined7)((ulonglong)&local_40 >> 8);
    if (local_40 == (longlong *)0x0) {
      if (param_1[4] != 0) {
        pcVar6 = "{invalid syntax}";
        if (local_38 != 0) {
          pcVar6 = "{recursion limit reached}";
        }
        cVar2 = FUN_1801edcb0(pcVar6,(ulonglong)local_38 * 9 + 0x10);
        uVar4 = CONCAT71(uVar8,1);
        if (cVar2 != '\0') goto LAB_1801e930b;
      }
      *param_1 = 0;
      *(byte *)(param_1 + 1) = local_38;
    }
    else {
      uVar4 = FUN_1801e6ccd();
      if ((uVar4 & 1) == 0) {
        lVar5 = param_1[4];
        if (lVar5 != 0) {
          cVar2 = FUN_1801edcb0(&DAT_1802923ee,2,lVar5);
          uVar4 = CONCAT71(uVar8,1);
          if (cVar2 != '\0') goto LAB_1801e930b;
          cVar2 = FUN_1801edcb0(plVar1,CONCAT71(uStack_37,local_38),lVar5);
          goto LAB_1801e92e4;
        }
      }
      else {
        lVar5 = param_1[4];
        if (lVar5 != 0) {
          local_40 = plVar7;
          cVar2 = FUN_1801ee720(&local_40,lVar5);
LAB_1801e92e4:
          uVar4 = CONCAT71(uVar8,1);
          if (cVar2 != '\0') goto LAB_1801e930b;
          if ((*(byte *)(lVar5 + 0x12) & 0x80) == 0) {
            lVar5 = FUN_1801e6dde(param_2);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_180201ba0(&PTR_s__rust_deps_rustc_demangle_0_1_26_1802923f0);
            }
            uVar3 = FUN_1801edcb0(lVar5);
            uVar4 = (ulonglong)uVar3;
            goto LAB_1801e930b;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_1801e930b:
  return uVar4 & 0xffffffff;
}


