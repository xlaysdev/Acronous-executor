/* FUN_1801644d0 @ 1801644d0 */

void FUN_1801644d0(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (param_2[2] == 0xffffffffffffffff) {
    if (*param_2 == 0) {
      if ((longlong *)param_1[2] != param_2) {
        return;
      }
      plVar5 = (longlong *)param_2[1];
      param_1[2] = (longlong)plVar5;
    }
    else {
      plVar5 = (longlong *)param_2[1];
      *(longlong **)(*param_2 + 8) = plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    if ((longlong *)param_1[3] == param_2) {
      param_1[3] = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    return;
  }
  uVar4 = param_2[2] ^ param_1[1] | 0x3f;
  if (0xffffffffd < uVar4) {
    uVar4 = 0xffffffffe;
  }
  uVar2 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar4 = (ulonglong)((uint)((int)(uVar2 ^ 1) * 0x2b) >> 8);
  if (0x23 < (uVar2 ^ 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar4,6,&PTR_s_C__Users_burne__cargo_registry_s_180260208);
  }
  lVar7 = uVar4 * 0x410;
  lVar6 = *param_1 + lVar7;
  uVar3 = (uint)((ulonglong)param_2[2] >>
                ((char)*(undefined4 *)(*param_1 + 0x400 + lVar7) * '\x06' & 0x3fU)) & 0x3f;
  plVar5 = (longlong *)((ulonglong)(uVar3 << 4) + lVar6);
  if (*param_2 == 0) {
    if ((longlong *)*plVar5 != param_2) {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        return;
      }
      goto LAB_1801645e2;
    }
    plVar8 = (longlong *)param_2[1];
    *plVar5 = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) goto LAB_180164555;
LAB_1801645cf:
    if ((longlong *)plVar5[1] == param_2) {
      plVar5[1] = *param_2;
      goto LAB_18016455b;
    }
  }
  else {
    plVar8 = (longlong *)param_2[1];
    *(longlong **)(*param_2 + 8) = plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_1801645cf;
LAB_180164555:
    *plVar8 = *param_2;
LAB_18016455b:
    *param_2 = 0;
    param_2[1] = 0;
  }
  if (*plVar5 != 0) {
    return;
  }
LAB_1801645e2:
  if (plVar5[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.tail.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\util\\linked_list.rs"
                  ,0x25,&DAT_1802613d8);
  }
  puVar1 = (ulonglong *)(lVar6 + 0x408);
  *puVar1 = *puVar1 ^ 1L << (sbyte)uVar3;
  return;
}


