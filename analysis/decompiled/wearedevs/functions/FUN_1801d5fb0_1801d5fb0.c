/* FUN_1801d5fb0 @ 1801d5fb0 */

undefined ** FUN_1801d5fb0(undefined8 param_1,undefined **param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  
  if (param_3 != (undefined **)0x0) {
    do {
      ppuVar5 = param_2;
      uVar4 = FUN_1801dc790(0xfffffff5,param_2,param_3,param_1);
      if ((uVar4 & 1) == 0) {
        if (ppuVar5 == (undefined **)0x0) {
          return &PTR_s_failed_to_write_whole_buffer_18028ef30;
        }
        if (param_3 < ppuVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(ppuVar5,param_3,param_3,&PTR_s_library_std_src_io_mod_rs_18028ef48);
        }
        param_2 = (undefined **)((longlong)param_2 + (longlong)ppuVar5);
        param_3 = (undefined **)((longlong)param_3 - (longlong)ppuVar5);
      }
      else {
        uVar3 = (uint)ppuVar5 & 3;
        switch(uVar3) {
        case 0:
          if (*(char *)(ppuVar5 + 2) != '#') {
            return ppuVar5;
          }
          break;
        case 1:
          if (*(char *)((longlong)ppuVar5 + 0xf) != '#') {
            return ppuVar5;
          }
          if (uVar3 == 1) {
            uVar1 = *(undefined8 *)((longlong)ppuVar5 - 1);
            puVar2 = *(undefined8 **)((longlong)ppuVar5 + 7);
            if ((code *)*puVar2 != (code *)0x0) {
              (*(code *)*puVar2)(uVar1);
            }
            if (puVar2[1] != 0) {
              thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
            }
            thunk_FUN_1801d3330((longlong)ppuVar5 - 1,0x18,8);
          }
          break;
        case 2:
          goto switchD_1801d602c_caseD_2;
        case 3:
          if ((int)((ulonglong)ppuVar5 >> 0x20) != 0x23) {
            return ppuVar5;
          }
        }
      }
    } while (param_3 != (undefined **)0x0);
  }
  ppuVar5 = (undefined **)0x0;
switchD_1801d602c_caseD_2:
  return ppuVar5;
}


