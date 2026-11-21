/* FUN_1801d74c0 @ 1801d74c0 */

undefined ** FUN_1801d74c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  size_t _Size;
  undefined **ppuVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  do {
    while( true ) {
      uVar4 = *(ulonglong *)(param_1 + 0x10);
      ppuVar7 = (undefined **)(uVar4 - uVar8);
      if (uVar4 < uVar8 || ppuVar7 == (undefined **)0x0) {
        if (uVar8 == 0) {
          return (undefined **)0x0;
        }
        _Size = 0;
        ppuVar7 = (undefined **)0x0;
        if (uVar8 <= uVar4) goto LAB_1801d767a;
        goto LAB_1801d7692;
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      ppuVar5 = (undefined **)(*(longlong *)(param_1 + 8) + uVar8);
      uVar4 = FUN_1801dc790(0xfffffff5,ppuVar5,ppuVar7,param_1 + 0x19);
      if (((ulonglong)ppuVar5 & 0xffffffff00000003) != 0x600000002) {
        ppuVar7 = ppuVar5;
      }
      ppuVar6 = ppuVar5;
      if ((uVar4 & 1) != 0) {
        ppuVar6 = ppuVar7;
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
      if ((((ulonglong)ppuVar5 & 0xffffffff00000003) != 0x600000002) && ((uVar4 & 1) != 0)) break;
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar7 = &PTR_s_failed_to_write_the_buffered_dat_18028f490;
        goto switchD_1801d757a_caseD_2;
      }
      uVar8 = uVar8 + (longlong)ppuVar6;
    }
    uVar3 = (uint)ppuVar7 & 3;
    switch(uVar3) {
    case 0:
      if (*(char *)(ppuVar7 + 2) != '#') goto switchD_1801d757a_caseD_2;
      break;
    case 1:
      if (*(char *)((longlong)ppuVar7 + 0xf) != '#') goto switchD_1801d757a_caseD_2;
      if (uVar3 == 1) {
        uVar1 = *(undefined8 *)((longlong)ppuVar7 - 1);
        puVar2 = *(undefined8 **)((longlong)ppuVar7 + 7);
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(uVar1);
        }
        if (puVar2[1] != 0) {
          thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
        }
        thunk_FUN_1801d3330((longlong)ppuVar7 - 1,0x18,8);
      }
      break;
    case 2:
      goto switchD_1801d757a_caseD_2;
    case 3:
      if ((int)((ulonglong)ppuVar7 >> 0x20) != 0x23) {
switchD_1801d757a_caseD_2:
        if (uVar8 != 0) {
          uVar4 = *(ulonglong *)(param_1 + 0x10);
          _Size = uVar4 - uVar8;
          if (uVar4 < uVar8) {
LAB_1801d7692:
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar8,uVar4,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_180290c60);
          }
          *(undefined8 *)(param_1 + 0x10) = 0;
          if (_Size != 0) {
            memmove(*(void **)(param_1 + 8),(void *)(uVar8 + (longlong)*(void **)(param_1 + 8)),
                    _Size);
LAB_1801d767a:
            *(size_t *)(param_1 + 0x10) = _Size;
          }
        }
        return ppuVar7;
      }
    }
  } while( true );
}


