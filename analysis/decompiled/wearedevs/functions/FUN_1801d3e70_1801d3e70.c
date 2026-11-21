/* FUN_1801d3e70 @ 1801d3e70 */

undefined8 FUN_1801d3e70(LPCWSTR param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  ulonglong uVar10;
  longlong lVar11;
  size_t _Size;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar2 = lstrlenW(param_1);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_49,&DAT_180290b38,
                  &PTR_s_library_std_src_______backtrace__18028eb60);
  }
  if (uVar2 != 0) {
    uVar6 = (ulonglong)uVar2;
    lVar11 = uVar6 * -2;
    do {
      if (lVar11 == 0) {
        return 1;
      }
      lVar1 = uVar6 - 1;
      uVar6 = uVar6 - 1;
      lVar11 = lVar11 + 2;
    } while ((param_1[lVar1] != L'\\') && (param_1[lVar1] != L'/'));
    pvVar8 = (void *)param_4[1];
    uVar13 = param_4[2];
    _Size = -lVar11;
    pvVar4 = pvVar8;
    if (uVar13 == 0) {
      uVar5 = 0;
    }
    else {
      pvVar7 = (void *)((longlong)pvVar8 + uVar13 * 2);
      uVar5 = uVar13;
      do {
        lVar11 = uVar5 * 2;
        uVar12 = 0;
        pvVar9 = pvVar4;
        while (lVar11 = lVar11 + -2, *(short *)((longlong)pvVar4 + uVar12 * 2) != 0x3b) {
          pvVar9 = (void *)((longlong)pvVar9 + 2);
          uVar12 = uVar12 + 1;
          if (pvVar9 == pvVar7) goto LAB_1801d3f7e;
        }
        if ((uVar6 == uVar12) && (iVar3 = memcmp(pvVar4,param_1,_Size), iVar3 == 0)) {
          return 1;
        }
        uVar10 = uVar5 - 1;
        uVar5 = uVar10 - uVar12;
        pvVar4 = (void *)((longlong)pvVar9 + 2);
        pvVar7 = (void *)(lVar11 + (longlong)pvVar4);
      } while (uVar10 != uVar12);
      uVar5 = 0;
      pvVar4 = (void *)((longlong)pvVar9 + 2);
    }
LAB_1801d3f7e:
    if ((uVar5 != uVar6) || (iVar3 = memcmp(pvVar4,param_1,_Size), iVar3 != 0)) {
      if ((uVar13 == 0) || (*(short *)((longlong)pvVar8 + uVar13 * 2 + -2) != 0x3b)) {
        if (uVar13 == *param_4) {
          FUN_180200ca0(param_4);
          pvVar8 = (void *)param_4[1];
        }
        *(undefined2 *)((longlong)pvVar8 + uVar13 * 2) = 0x3b;
        uVar13 = uVar13 + 1;
        param_4[2] = uVar13;
      }
      if (*param_4 - uVar13 < uVar6) {
        FUN_180200f70(param_4,uVar13,uVar6,2,2);
        pvVar8 = (void *)param_4[1];
        uVar13 = param_4[2];
      }
      memcpy((void *)((longlong)pvVar8 + uVar13 * 2),param_1,_Size);
      param_4[2] = uVar6 + uVar13;
    }
  }
  return 1;
}


